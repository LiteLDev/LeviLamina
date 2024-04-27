#pragma once

#include <cstddef>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::meta {
namespace detail {
template <class Fn, size_t... N>
constexpr void unrollImpl(Fn&& fn, std::integer_sequence<size_t, N...>) {
    (void(std::forward<Fn>(fn)(N)), ...);
}

template <size_t N, int Strategy>
struct VisitStrategy;

template <size_t N>
struct VisitStrategy<N, -1> {
    // Fallback strategy for visitations with too many total states for the following "switch" strategies.
    template <typename T, typename... Ts>
    static constexpr std::array<std::decay_t<T>, sizeof...(Ts) + 1> makeVisitorArray(T&& t, Ts&&... ts) {
        return {
            {std::forward<T>(t), std::forward<Ts>(ts)...}
        };
    }
    template <class Fn, size_t I>
    static constexpr decltype(auto) invokeVisitor(Fn&& fn) {
        return std::forward<Fn>(fn).template operator()<I>();
    }

    template <class Fn, size_t... Ns>
    static constexpr decltype(auto) makeCallers(std::integer_sequence<size_t, Ns...>) {
        return makeVisitorArray(&invokeVisitor<Fn, Ns>...);
    }

    template <class Fn>
    static constexpr auto callers = makeCallers<Fn>(std::make_index_sequence<N>());

    template <class Fn>
    static constexpr decltype(auto) impl(size_t idx, Fn&& fn) { // dispatch a visitation with many potential states
        static_assert(N > 256);
        return callers<Fn>[idx](std::forward<Fn>(fn));
    }
};

template <size_t N>
struct VisitStrategy<N, 0> {
    template <class Fn>
    static constexpr decltype(auto) impl(size_t, Fn&& fn) { // dispatch a visitation with 4^0 potential states
        return std::forward<Fn>(fn).template operator()<0>();
    }
};

#define LL_VISIT_CASE(n)                                                                                               \
    case (n):                                                                                                          \
        if constexpr ((n) < N) {                                                                                       \
            return std::forward<Fn>(fn).template operator()<(n)>();                                                    \
        }                                                                                                              \
        _STL_UNREACHABLE;                                                                                              \
        [[fallthrough]]

#define LL_VISIT_STAMP(stamper, n)                                                                                     \
    static_assert(N > (n) / 4 && N <= (n));                                                                            \
    switch (idx) {                                                                                                     \
        stamper(0, LL_VISIT_CASE);                                                                                     \
    default:                                                                                                           \
        _STL_UNREACHABLE;                                                                                              \
    }

#define LL_STAMP4(n, x)                                                                                                \
    x(n);                                                                                                              \
    x(n + 1);                                                                                                          \
    x(n + 2);                                                                                                          \
    x(n + 3)
#define LL_STAMP16(n, x)                                                                                               \
    LL_STAMP4(n, x);                                                                                                   \
    LL_STAMP4(n + 4, x);                                                                                               \
    LL_STAMP4(n + 8, x);                                                                                               \
    LL_STAMP4(n + 12, x)
#define LL_STAMP64(n, x)                                                                                               \
    LL_STAMP16(n, x);                                                                                                  \
    LL_STAMP16(n + 16, x);                                                                                             \
    LL_STAMP16(n + 32, x);                                                                                             \
    LL_STAMP16(n + 48, x)
#define LL_STAMP256(n, x)                                                                                              \
    LL_STAMP64(n, x);                                                                                                  \
    LL_STAMP64(n + 64, x);                                                                                             \
    LL_STAMP64(n + 128, x);                                                                                            \
    LL_STAMP64(n + 192, x)

#define LL_STAMP(n, x) x(LL_STAMP##n, n)

template <size_t N>
struct VisitStrategy<N, 1> {
    template <class Fn>
    static constexpr decltype(auto) impl(size_t idx, Fn&& fn) {
        // dispatch a visitation with 4^1 potential states
        LL_STAMP(4, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 2> {
    template <class Fn>
    static constexpr decltype(auto) impl(size_t idx, Fn&& fn) {
        // dispatch a visitation with 4^2 potential states
        LL_STAMP(16, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 3> {
    template <class Fn>
    static constexpr decltype(auto) impl(size_t idx, Fn&& fn) {
        // dispatch a visitation with 4^3 potential states
        LL_STAMP(64, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 4> {
    template <class Fn>
    static constexpr decltype(auto) impl(size_t idx, Fn&& fn) {
        // dispatch a visitation with 4^4 potential states
        LL_STAMP(256, LL_VISIT_STAMP);
    }
};

#undef LL_VISIT_CASE
#undef LL_VISIT_STAMP
#undef LL_STAMP
#undef LL_STAMP256
#undef LL_STAMP64
#undef LL_STAMP16
#undef LL_STAMP4

template <class Group, auto Id>
struct TypeCounter {
    using tag = TypeCounter;

    struct GenerateTag {
        friend consteval auto isDefined(tag) { return true; }
    };
    friend consteval auto isDefined(tag);

    template <class Tag = tag, auto = isDefined(Tag{})>
    static consteval auto exists(auto) {
        return true;
    }

    static consteval auto exists(...) { return GenerateTag(), false; }
};
} // namespace detail

template <class... Ts>
struct Overloaded : Ts... {
    using Ts::operator()...;
};

template <unsigned N>
struct PriorityTag : PriorityTag<N - 1> {};
template <>
struct PriorityTag<0> {};

template <class... Components, class F>
constexpr void unrollWithArgs(F&& func) {
    size_t i = 0;
    ((std::forward<F>(func).template operator()<Components>(i++)), ...);
}

template <class... Components, class F>
constexpr void unrollWithArgsNoIndex(F&& func) {
    ((std::forward<F>(func).template operator()<Components>()), ...);
}

template <size_t N, class Fn>
constexpr void unroll(Fn&& fn) {
    detail::unrollImpl(std::forward<Fn>(fn), std::make_index_sequence<N>());
}

template <size_t N, class Fn>
constexpr decltype(auto) visitIndex(size_t index, Fn&& fn) {
    constexpr int strategy = N == 1 ? 0 : N <= 4 ? 1 : N <= 16 ? 2 : N <= 64 ? 3 : N <= 256 ? 4 : -1;
    return detail::VisitStrategy<N, strategy>::impl(index, std::forward<Fn>(fn));
}

template <size_t N, class T, class... Types>
struct get_type {
    using type = typename get_type<N - 1, Types...>::type;
};

template <class T, class... Types>
struct get_type<0, T, Types...> {
    using type = T;
};

template <size_t N, class... Types>
using get_type_t = typename get_type<N, Types...>::type;

template <class T, class U, class... Args>
struct max_type {
    using type = typename max_type<T, typename max_type<U, Args...>::type>::type;
};

template <class T, class U>
struct max_type<T, U> {
    using type = typename std::conditional<(sizeof(T) < sizeof(U)), U, T>::type;
};

template <class T, class... Ts>
struct index_of;

template <class T, class... Ts>
struct index_of<T, T, Ts...> : std::integral_constant<size_t, 0> {};

template <class T, class U, class... Ts>
struct index_of<T, U, Ts...> : std::integral_constant<size_t, 1 + index_of<T, Ts...>::value> {};

template <class... TL>
class TypeList {
public:
    template <class T>
    static constexpr bool contains = (std::is_same_v<T, TL> || ...);

    template <template <class> class T>
    static constexpr bool all = (T<TL>::value && ...);

    template <template <class> class T>
    static constexpr bool any = (T<TL>::value || ...);

    static constexpr size_t size = sizeof...(TL);

    template <template <class> class W>
    using wrap = TypeList<W<TL>...>;

    template <template <class> class M>
    using map = TypeList<typename M<TL>::type...>;

    template <class T>
    using push_back = TypeList<TL..., T>;

    template <class T>
    using push_front = TypeList<T, TL...>;

    template <size_t N>
    using get = get_type_t<N + 1, void, TL...>;

    template <template <class...> class U>
    using to = U<TL...>;

    template <class Func>
    static void constexpr forEach(Func&& func) {
        unrollWithArgsNoIndex<TL...>(func);
    }

    template <class Func>
    static void constexpr forEachIndexed(Func&& func) {
        unrollWithArgs<TL...>(func);
    }

    template <class T>
    static constexpr size_t index = index_of<T, TL...>::value;
};

template <class Group, class T, auto Id = int64{}>
[[maybe_unused]] consteval auto uniqueId() {
    if constexpr (detail::TypeCounter<Group, Id>::exists(Id)) {
        return uniqueId<Group, T, Id + 1>();
    } else {
        return Id;
    }
}
// FIXME: fix this for clang
#if !(defined(__INTELLISENSE__) || defined(__clangd__) || defined(__clang__))
template <class Group>
struct DynamicTypeList {
    template <size_t N>
    struct Getter {
        friend auto valueStored(Getter<N>);
    };
    template <size_t N, class Type>
    struct Setter {
        friend auto valueStored(Getter<N>) { return Type{}; }
    };
    template <auto Id = size_t{}, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval auto value() {
        if constexpr (requires(Getter<Id + 1> g) { valueStored(g); }) {
            return value<Id + 1, UniqueTag>();
        } else if constexpr (requires(Getter<Id> g) { valueStored(g); }) {
            return valueStored(Getter<Id>{});
        } else {
            return TypeList<>{};
        }
    }
    template <concepts::Specializes<TypeList> T, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval void assign() {
        constexpr auto id = uniqueId<Group, UniqueTag>();
        Setter<id, T>  setter{};
    }
    template <class T, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval void push_back() {
        using now         = decltype((value<0, UniqueTag>()));
        constexpr auto id = uniqueId<Group, UniqueTag>();
        using next        = typename now::template push_back<T>;
        Setter<id, next> setter{};
    }
    template <class T, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval void push_front() {
        using now         = decltype((value<0, UniqueTag>()));
        constexpr auto id = uniqueId<Group, UniqueTag>();
        using next        = typename now::template push_front<T>;
        Setter<id, next> setter{};
    }
    template <template <class> class W, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval void wrap() {
        using now         = decltype((value<0, UniqueTag>()));
        constexpr auto id = uniqueId<Group, UniqueTag>();
        using next        = typename now::template wrap<W>;
        Setter<id, next> setter{};
    }
    template <template <class> class M, class UniqueTag = LL_UNIQUE_TYPE>
    [[maybe_unused]] static consteval void map() {
        using now         = decltype((value<0, UniqueTag>()));
        constexpr auto id = uniqueId<Group, UniqueTag>();
        using next        = typename now::template map<M>;
        Setter<id, next> setter{};
    }
};
#endif

} // namespace ll::meta
