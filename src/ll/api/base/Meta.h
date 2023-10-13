#include <string_view>
#include <utility>

namespace ll::meta {

template <auto f>
consteval std::string_view invocableName() noexcept {
    constexpr std::string_view n{__FUNCSIG__};

    constexpr std::string_view k{"invocableName<"};
    constexpr std::string_view l{">(void) noexcept"};

    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

template <typename f>
consteval std::string_view invocableName() noexcept {
    constexpr std::string_view n{__FUNCSIG__};

    constexpr std::string_view k{"invocableName<"};
    constexpr std::string_view l{">(void) noexcept"};

    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

template <typename T>
inline constexpr bool is_class_v = std::is_class_v<T> && invocableName<T>().starts_with("class ");

template <typename T>
inline constexpr bool is_struct_v = std::is_class_v<T> && invocableName<T>().starts_with("struct ");

template <typename... Components, typename F>
constexpr void unrollWithArgs(F&& func) {
    size_t i = 0;
    ((func.template operator()<Components>(i++)), ...);
}

template <typename... Components, typename F>
constexpr void unrollWithArgsNoIndex(F&& func) {
    ((func.template operator()<Components>()), ...);
}

template <typename Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...>) {
    (void(fn(N)), ...);
}

template <size_t N, typename Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
}

template <size_t N, typename T, typename... Types>
struct get_type {
    using type = typename get_type<N - 1, Types...>::type;
};

template <typename T, typename... Types>
struct get_type<0, T, Types...> {
    using type = T;
};

template <size_t N, typename... Types>
using get_type_t = typename get_type<N, Types...>::type;

template <typename T, typename U, typename... Args>
struct max_type {
    using type = typename max_type<T, typename max_type<U, Args...>::type>::type;
};

template <typename T, typename U>
struct max_type<T, U> {
    using type = typename std::conditional<(sizeof(T) < sizeof(U)), U, T>::type;
};

template <typename... TL>
struct TypeList {
    template <template <typename> class W>
    using wrap = TypeList<W<TL>...>;

    template <template <typename> class M>
    using map = TypeList<typename M<TL>::type...>;

    template <typename T>
    using append = TypeList<TL..., T>;

    template <typename T>
    using prepend = TypeList<T, TL...>;

    template <size_t N>
    using get = get_type_t<N, TL...>;

    template <template <typename...> class U>
    using to = U<TL...>;

    template <typename Func>
    static void constexpr forEach(Func&& func) {
        unrollWithArgsNoIndex<TL...>(func);
    }

    template <typename Func>
    static void constexpr forEachIndexed(Func&& func) {
        unrollWithArgs<TL...>(func);
    }
};

} // namespace ll::meta
