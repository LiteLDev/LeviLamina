#pragma once

#include <string_view>
#include <utility>

#include "ll/api/base/StdInt.h"

namespace ll::meta {

template <class... Components, class F>
constexpr void unrollWithArgs(F&& func) {
    size_t i = 0;
    ((func.template operator()<Components>(i++)), ...);
}

template <class... Components, class F>
constexpr void unrollWithArgsNoIndex(F&& func) {
    ((func.template operator()<Components>()), ...);
}

template <class Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...>) {
    (void(fn(N)), ...);
}

template <size_t N, class Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
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

template <class... TL>
class TypeList {
public:
    template <class T>
    static constexpr bool contains = (std::is_same_v<T, TL> || ...);

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
};

template <auto Id>
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

template <class T, auto Id = int64{}>
consteval auto uniqueId() {
    if constexpr (TypeCounter<Id>::exists(Id)) {
        return uniqueId<T, Id + 1>();
    } else {
        return Id;
    }
}

} // namespace ll::meta
