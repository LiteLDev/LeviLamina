#pragma once

#include <cstdint>
#include <functional>

namespace mce::Math {

template <typename T>
uint64_t hash_accumulate(T a, T b) {
    return ((a >> 2) + (a << 6) + std::hash<T>{}(b) + 2654435769) ^ a;
}

template <typename A, typename B>
uint64_t hash2(A a, B b) {
    return hash_accumulate<B>(hash_accumulate<A>(0, a), b);
}
template <typename A, typename B, typename C>
uint64_t hash3(A a, B b, C c) {
    return hash_accumulate<C>(hash_accumulate<B>(hash_accumulate<A>(0, a), b), c);
}

} // namespace mce::Math