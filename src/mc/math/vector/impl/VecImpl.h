#pragma once

#include <cmath> // IWYU pragma: keep

#include "ll/api/base/Macro.h" // IWYU pragma: keep

#define LL_VEC_X_MEMBER(T)                                                                                             \
    union {                                                                                                            \
        T x, r, s;                                                                                                     \
    }
#define LL_VEC_Y_MEMBER(T)                                                                                             \
    union {                                                                                                            \
        T y, g, t;                                                                                                     \
    }
#define LL_VEC_Z_MEMBER(T)                                                                                             \
    union {                                                                                                            \
        T z, b, p;                                                                                                     \
    }
#define LL_VEC_W_MEMBER(T)                                                                                             \
    union {                                                                                                            \
        T w, a, q;                                                                                                     \
    }

// NOLINTBEGIN

#define LL_VEC2_IMPL(NAME, BNAME, TYPE, BASE)                                                                          \
    class LL_EBO NAME : public BASE<BNAME, TYPE, TYPE> {                                                               \
    public:                                                                                                            \
        LL_VEC_X_MEMBER(TYPE);                                                                                         \
        union {                                                                                                        \
            TYPE y, g, t, z, b, p;                                                                                     \
        };                                                                                                             \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(NAME&&) noexcept        = default;                                                \
        LL_CLANG_CEXPR NAME& operator=(NAME&&) noexcept      = default;                                                \
        [[nodiscard]] constexpr NAME(NAME const&) noexcept   = default;                                                \
        LL_CLANG_CEXPR NAME& operator=(NAME const&) noexcept = default;                                                \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(TYPE all = 0) noexcept : x(all), z(all) {}                                        \
                                                                                                                       \
        template <std::convertible_to<TYPE> T0, std::convertible_to<TYPE> T1>                                          \
        [[nodiscard]] constexpr NAME(T0 x, T1 z) noexcept                                                              \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? std::floor(x) : x)), \
          z(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? std::floor(z) : z)   \
          ) {}                                                                                                         \
        template <IsField T>                                                                                           \
        [[nodiscard]] constexpr NAME(T const& vec)                                                                     \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 2)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(std::floor(vec.template get<axis_type>(iter)));          \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
    }

#define LL_VEC3_IMPL(NAME, BNAME, TYPE, BASE)                                                                          \
    class LL_EBO NAME : public BASE<BNAME, TYPE, TYPE, TYPE> {                                                         \
    public:                                                                                                            \
        LL_VEC_X_MEMBER(TYPE);                                                                                         \
        LL_VEC_Y_MEMBER(TYPE);                                                                                         \
        LL_VEC_Z_MEMBER(TYPE);                                                                                         \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(NAME&&)        = default;                                                         \
        LL_CLANG_CEXPR NAME& operator=(NAME&&)      = default;                                                         \
        [[nodiscard]] constexpr NAME(NAME const&)   = default;                                                         \
        LL_CLANG_CEXPR NAME& operator=(NAME const&) = default;                                                         \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(TYPE all = 0) noexcept : x(all), y(all), z(all) {}                                \
                                                                                                                       \
        template <std::convertible_to<TYPE> T0, std::convertible_to<TYPE> T1, std::convertible_to<TYPE> T2>            \
        [[nodiscard]] constexpr NAME(T0 x, T1 y, T2 z) noexcept                                                        \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? std::floor(x) : x)), \
          y(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? std::floor(y) : y)), \
          z(static_cast<TYPE>((std::is_floating_point_v<T2> && !std::is_floating_point_v<TYPE>) ? std::floor(z) : z)   \
          ) {}                                                                                                         \
        template <IsField T>                                                                                           \
        [[nodiscard]] constexpr NAME(T const& vec)                                                                     \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 3)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(std::floor(vec.template get<axis_type>(iter)));          \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
    }

#define LL_VEC4_IMPL(NAME, BNAME, TYPE, BASE)                                                                          \
    class LL_EBO NAME : public BASE<BNAME, TYPE, TYPE, TYPE, TYPE> {                                                   \
    public:                                                                                                            \
        LL_VEC_X_MEMBER(TYPE);                                                                                         \
        LL_VEC_Y_MEMBER(TYPE);                                                                                         \
        LL_VEC_Z_MEMBER(TYPE);                                                                                         \
        LL_VEC_W_MEMBER(TYPE);                                                                                         \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(NAME&&)        = default;                                                         \
        LL_CLANG_CEXPR NAME& operator=(NAME&&)      = default;                                                         \
        [[nodiscard]] constexpr NAME(NAME const&)   = default;                                                         \
        LL_CLANG_CEXPR NAME& operator=(NAME const&) = default;                                                         \
                                                                                                                       \
        [[nodiscard]] constexpr NAME(TYPE all = 0) noexcept : x(all), y(all), z(all), w(all) {}                        \
                                                                                                                       \
        template <                                                                                                     \
            std::convertible_to<TYPE> T0,                                                                              \
            std::convertible_to<TYPE> T1,                                                                              \
            std::convertible_to<TYPE> T2,                                                                              \
            std::convertible_to<TYPE> T3>                                                                              \
        [[nodiscard]] constexpr NAME(T0 x, T1 y, T2 z, T3 w) noexcept                                                  \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? std::floor(x) : x)), \
          y(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? std::floor(y) : y)), \
          z(static_cast<TYPE>((std::is_floating_point_v<T2> && !std::is_floating_point_v<TYPE>) ? std::floor(z) : z)), \
          w(static_cast<TYPE>((std::is_floating_point_v<T3> && !std::is_floating_point_v<TYPE>) ? std::floor(w) : w)   \
          ) {}                                                                                                         \
        template <IsField T>                                                                                           \
        [[nodiscard]] constexpr NAME(T const& vec)                                                                     \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 4)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(std::floor(vec.template get<axis_type>(iter)));          \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            return (T&)((&x)[index]);                                                                                  \
        }                                                                                                              \
    }

// NOLINTEND
