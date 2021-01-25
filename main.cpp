#include <fmt/core.h>
#include <mp++/type_name.hpp>
#include <boost/multiprecision/float128.hpp>
using boost::multiprecision::float128;

template <>
struct fmt::formatter<float128> {
  constexpr auto parse(format_parse_context& ctx) {
    return ctx.end();
  }

  template <typename FormatContext>
  auto format(const float128& x, FormatContext& ctx) {
    std::ostringstream o;
    o << std::setprecision(std::numeric_limits<float128>::max_digits10) << x;  
    return format_to(ctx.out(), "{}", o.str());
  }
};

template <typename Tuple, typename F>
inline void tuple_for_each(Tuple &&t, F &&f)
{
    std::apply(
        [&f](auto &&... items) {
            (void(std::forward<F>(f)(std::forward<decltype(items)>(items))), ...);
        },
        std::forward<Tuple>(t)
    );
}

int main()
{
    using all_types = std::tuple<
        bool,
        std::uint8_t,
        std::uint16_t,
        std::uint32_t,
        std::uint64_t,
           __uint128_t,
        std::int8_t,
        std::int16_t,
        std::int32_t,
        std::int64_t,
           __int128_t,
        float,
        double,
        long double,
        float128>;

    tuple_for_each(all_types{}, [](auto n) {
        using T = decltype(n);
        const auto s = sizeof(T);
        fmt::print("Printing limits for the type '{}' ({} byte{}):'\n",
                    mppp::type_name<T>(), s, (1==s ? "" : "s"));
        fmt::print("Lowest  : {}\n", +std::numeric_limits<T>::lowest());
        fmt::print("Min     : {}\n", +std::numeric_limits<T>::min());
        fmt::print("Max     : {}\n", +std::numeric_limits<T>::max());
        fmt::print("Digits  : {}\n",  std::numeric_limits<T>::digits);
        fmt::print("Digits10: {}\n",  std::numeric_limits<T>::digits10);
        fmt::print("------------\n");
    }); 
}
