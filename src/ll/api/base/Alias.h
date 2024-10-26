#pragma once

#include <bit>
#include <cstddef>
#include <type_traits>
#include <utility>

namespace ll {
template <class T, size_t N>
struct CArray {
    using type = T[N];
};
template <class T>
struct CArray<T, 0> {
    using type = T[];
};
template <class T, size_t N = 0>
using CArrayT = typename CArray<T, N>::type;

template <size_t Len, size_t Align = (std::min)((1ull << std::countr_zero(Len)), 8ull)>
struct UntypedStorage {
    alignas(Align) std::byte data[Len];

    template <class T>
    [[nodiscard]] T& as() & {
        return *reinterpret_cast<T*>(this);
    }
    template <class T>
    [[nodiscard]] T const& as() const& {
        return *reinterpret_cast<T const*>(this);
    }
    template <class T>
    [[nodiscard]] T&& as() && {
        return std::move(*reinterpret_cast<T*>(this));
    }
    template <class T>
    [[nodiscard]] T const&& as() const&& {
        return std::move(*reinterpret_cast<T const*>(this));
    }
};

} // namespace ll
