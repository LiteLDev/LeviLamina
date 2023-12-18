#pragma once

#include <string_view>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/StdInt.h"

namespace ll::meta {

template <class... Ts>
struct Overloaded : Ts... {
    using Ts::operator()...;
};

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

template <class Group, class T, auto Id = int64{}>
[[maybe_unused]] consteval auto uniqueId() {
    if constexpr (TypeCounter<Group, Id>::exists(Id)) {
        return uniqueId<Group, T, Id + 1>();
    } else {
        return Id;
    }
}

namespace DynamicTypeList {

template <class Group, size_t N>
struct Getter {
    friend auto valueStored(Getter<Group, N>);
};
template <class Group, size_t N, class Type>
struct Setter {
    friend auto valueStored(Getter<Group, N>) { return Type{}; }
};
#ifdef __INTELLISENSE__
template <class Group, auto Id = size_t{}>
[[maybe_unused]] consteval auto value() {
    return TypeList<>{};
}
template <class Group, concepts::Specializes<TypeList> T>
[[maybe_unused]] consteval void assign() {}
template <class Group, class T>
[[maybe_unused]] consteval void push_back() {}
template <class Group, class T>
[[maybe_unused]] consteval void push_front() {}
template <class Group, template <class> class W>
[[maybe_unused]] consteval void wrap() {}
template <class Group, template <class> class M>
[[maybe_unused]] consteval void map() {}
#else
template <class Group, auto Id = size_t{}, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval auto value() {
    if constexpr (requires(Getter<Group, Id + 1> g) { valueStored(g); }) {
        return value<Group, Id + 1, UniqueTag>();
    } else if constexpr (requires(Getter<Group, Id> g) { valueStored(g); }) {
        return valueStored(Getter<Group, Id>{});
    } else {
        return TypeList<>{};
    }
}
template <class Group, concepts::Specializes<TypeList> T, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval void assign() {
    constexpr auto       id = uniqueId<Group, UniqueTag>();
    Setter<Group, id, T> setter{};
}
template <class Group, class T, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval void push_back() {
    using now         = decltype(value<Group, 0, UniqueTag>());
    constexpr auto id = uniqueId<Group, UniqueTag>();
    using next        = typename now::template push_back<T>;
    Setter<Group, id, next> setter{};
}
template <class Group, class T, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval void push_front() {
    using now         = decltype(value<Group, 0, UniqueTag>());
    constexpr auto id = uniqueId<Group, UniqueTag>();
    using next        = typename now::template push_front<T>;
    Setter<Group, id, next> setter{};
}
template <class Group, template <class> class W, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval void wrap() {
    using now         = decltype(value<Group, 0, UniqueTag>());
    constexpr auto id = uniqueId<Group, UniqueTag>();
    using next        = typename now::template wrap<W>;
    Setter<Group, id, next> setter{};
}
template <class Group, template <class> class M, class UniqueTag = decltype([] {})>
[[maybe_unused]] consteval void map() {
    using now         = decltype(value<Group, 0, UniqueTag>());
    constexpr auto id = uniqueId<Group, UniqueTag>();
    using next        = typename now::template map<M>;
    Setter<Group, id, next> setter{};
}
#endif

} // namespace DynamicTypeList

} // namespace ll::meta
