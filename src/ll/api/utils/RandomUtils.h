#pragma once

#include <cfloat>
#include <concepts>
#include <cstdint>
#include <limits>
#include <random>

#include "pcg_cpp/pcg_extras.hpp"
#include "pcg_cpp/pcg_random.hpp"

#include "ll/api/base/StdInt.h"

namespace ll::inline utils::random_utils {

template <std::integral T>
inline T rand(T upBound = 0) {
    static pcg_extras::seed_seq_from<std::random_device> rd{};
    static pcg64                                         random{rd};

    constexpr auto digits = std::numeric_limits<T>::digits;
    if (upBound != 0) {
        return static_cast<T>(random(upBound));
    } else if constexpr (digits != 64) {
        static auto u = (uintmax_t)std::pow<ldouble>(2ull, digits);
        return static_cast<T>(random(u));
    } else {
        return static_cast<T>(random());
    }
}
template <std::floating_point T>
inline T rand() {
    union {
        uintmax_t u;
        T         f;
    } x;
    auto r  = rand<uintmax_t>();
    x.f     = std::numeric_limits<T>::max();
    r      &= x.u;
    x.f     = std::numeric_limits<T>::infinity();
    r      &= ~x.u;
    x.f     = static_cast<T>(1);
    x.u    |= r;
    /* Trick from MTGP: generate a uniformly distributed
    float number in [1,2) and subtract 1. */
    return x.f - static_cast<T>(1);
}
template <std::floating_point T>
inline T rand(T max) {
    return rand<T>() * max;
}
template <class T>
inline T rand(T min, T max) {
    return min + rand<T>(max - min);
}
template <class T>
inline T openIntervalRand(T min = 0, T max = 1) {
    return rand<T>(std::nexttoward(min, LDBL_MAX), max);
}
template <class T>
inline T closeIntervalRand(T min = 0, T max = 1) {
    return rand<T>(min, std::nexttoward(max, LDBL_MAX));
}
template <class T>
inline T rightCloseIntervalRand(T min = 0, T max = 1) {
    return rand<T>(std::nexttoward(min, LDBL_MAX), std::nexttoward(max, LDBL_MAX));
}
template <class T>
inline T leftCloseIntervalRand(T min = 0, T max = 1) {
    return rand<T>(min, max);
}

} // namespace ll::inline utils::random_utils
