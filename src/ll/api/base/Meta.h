#include <string_view>
#include <utility>

namespace ll::meta {

template <auto f>
consteval std::string_view invocable_name() noexcept {
    constexpr std::string_view n{__FUNCSIG__};

    constexpr std::string_view k{"invocable_name<"};
    constexpr std::string_view l{">(void) noexcept"};

    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

template <typename f>
consteval std::string_view invocable_name() noexcept {
    constexpr std::string_view n{__FUNCSIG__};

    constexpr std::string_view k{"invocable_name<"};
    constexpr std::string_view l{">(void) noexcept"};

    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

template <typename T>
inline constexpr bool is_class_v = std::is_class_v<T> && invocable_name<T>().starts_with("class ");

template <typename T>
inline constexpr bool is_struct_v = std::is_class_v<T> && invocable_name<T>().starts_with("struct ");

} // namespace ll::meta
