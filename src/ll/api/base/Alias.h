#pragma once

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
} // namespace ll
