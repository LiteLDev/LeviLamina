/**
 * @file   RNG.h
 * @author OEOTYAN (https://github.com/OEOTYAN)
 * @brief  Random Number Generator
 *
 * @copyright Created by OEOTYAN on 2022/09/03.
 *
 */
#pragma once

#include <random>

#include <pcg_cpp/pcg_random.hpp>

namespace RNG {

static pcg64 GolbalRandom64{pcg_extras::seed_seq_from<std::random_device>{}};

static pcg32 GolbalRandom32{pcg_extras::seed_seq_from<std::random_device>{}};

template <class T>
inline T rand() {
    return static_cast<T>(GolbalRandom64());
}

template <class T>
inline T rand(T min, T max) {
    return min + static_cast<T>(GolbalRandom64(max - min + 1));
}

template <>
inline bool rand() {
    return static_cast<bool>(GolbalRandom32(2));
}

template <>
inline uint32_t rand() {
    return GolbalRandom32();
}

template <>
inline uint32_t rand(uint32_t min, uint32_t max) {
    return min + GolbalRandom32(max - min + 1);
}

template <>
inline int32_t rand() {
    return static_cast<int32_t>(GolbalRandom32());
}

template <>
inline int32_t rand(int32_t min, int32_t max) {
    return (static_cast<int64_t>(min) + GolbalRandom32(static_cast<uint32_t>(static_cast<int64_t>(max) - min + 1)));
}

template <>
inline int64_t rand() {
    return static_cast<int64_t>(GolbalRandom64());
}

template <>
inline int64_t rand(int64_t min, int64_t max) {
    return min + static_cast<int64_t>(GolbalRandom64(static_cast<uint64_t>(max - min + 1)));
}

template <>
inline uint64_t rand() {
    return GolbalRandom64();
}

template <>
inline uint64_t rand(uint64_t min, uint64_t max) {
    return min + GolbalRandom64(max - min + 1);
}

template <>
inline float rand() {
    union {
        uint32_t u;
        float    f;
    } x;
    x.u = (rand<uint32_t>() >> 9u) | 0x3f800000u;
    /* Trick from MTGP: generate an uniformly distributed
    single precision number in [1,2) and subtract 1. */
    return x.f - 1.0f;
}

template <>
inline float rand(float min, float max) {
    return min + rand<float>() * (max - min);
}

template <>
inline double rand() {
    union {
        uint64_t u;
        double   f;
    } x;
    x.u = (rand<uint64_t>() >> 12ull) | 0x3ff0000000000000ull;
    /* Trick from MTGP: generate an uniformly distributed
    single precision number in [1,2) and subtract 1. */
    return x.f - 1.0;
}

template <>
inline double rand(double min, double max) {
    return min + rand<double>() * (max - min);
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

} // namespace RNG