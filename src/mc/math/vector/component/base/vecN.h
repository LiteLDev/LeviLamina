#pragma once

#define VEC_X_MEMBER_(T)                                                                                               \
    union {                                                                                                            \
        T x, r, s;                                                                                                     \
    }
#define VEC_Y_MEMBER_(T)                                                                                               \
    union {                                                                                                            \
        T y, g, t;                                                                                                     \
    }
#define VEC_Z_MEMBER_(T)                                                                                               \
    union {                                                                                                            \
        T z, b, p;                                                                                                     \
    }
#define VEC_W_MEMBER_(T)                                                                                               \
    union {                                                                                                            \
        T w, a, q;                                                                                                     \
    }

// NOLINTBEGIN

#define VEC2_IMPL_(NAME, BNAME, TYPE, BASE)                                                                            \
    class NAME : public BASE<BNAME, TYPE, TYPE> {                                                                      \
    public:                                                                                                            \
        VEC_X_MEMBER_(TYPE);                                                                                           \
        union {                                                                                                        \
            TYPE y, g, t, z, b, p;                                                                                     \
        };                                                                                                             \
        constexpr NAME() noexcept : x(0), z(0){};                                                                      \
        template <std::convertible_to<TYPE> TALL>                                                                      \
        constexpr NAME(TALL all) noexcept                                                                              \
        : x(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          z(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ){};                                                                                                         \
        template <std::convertible_to<TYPE> T0, std::convertible_to<TYPE> T1>                                          \
        constexpr NAME(T0 x, T1 z) noexcept                                                                            \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? floor(x) : x)),      \
          z(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? floor(z) : z)){};    \
        template <IsField T>                                                                                           \
        constexpr NAME(T const& vec)                                                                                   \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 2)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(floor(vec.template get<axis_type>(iter)));               \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            if (index == 1) {                                                                                          \
                return (T&)z;                                                                                          \
            }                                                                                                          \
            return (T&)x;                                                                                              \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            if (index == 1) {                                                                                          \
                return (T)z;                                                                                           \
            }                                                                                                          \
            return (T)x;                                                                                               \
        }                                                                                                              \
    }

#define VEC3_IMPL_(NAME, BNAME, TYPE, BASE)                                                                            \
    class NAME : public BASE<BNAME, TYPE, TYPE, TYPE> {                                                                \
    public:                                                                                                            \
        VEC_X_MEMBER_(TYPE);                                                                                           \
        VEC_Y_MEMBER_(TYPE);                                                                                           \
        VEC_Z_MEMBER_(TYPE);                                                                                           \
        constexpr NAME() noexcept : x(0), y(0), z(0){};                                                                \
        template <std::convertible_to<TYPE> TALL>                                                                      \
        constexpr NAME(TALL all) noexcept                                                                              \
        : x(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          y(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          z(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ){};                                                                                                         \
        template <std::convertible_to<TYPE> T0, std::convertible_to<TYPE> T1, std::convertible_to<TYPE> T2>            \
        constexpr NAME(T0 x, T1 y, T2 z) noexcept                                                                      \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? floor(x) : x)),      \
          y(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? floor(y) : y)),      \
          z(static_cast<TYPE>((std::is_floating_point_v<T2> && !std::is_floating_point_v<TYPE>) ? floor(z) : z)){};    \
        template <IsField T>                                                                                           \
        constexpr NAME(T const& vec)                                                                                   \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 3)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(floor(vec.template get<axis_type>(iter)));               \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            switch (index) {                                                                                           \
            case 1:                                                                                                    \
                return (T&)y;                                                                                          \
            case 2:                                                                                                    \
                return (T&)z;                                                                                          \
            default:                                                                                                   \
                return (T&)x;                                                                                          \
            }                                                                                                          \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            switch (index) {                                                                                           \
            case 1:                                                                                                    \
                return (T)y;                                                                                           \
            case 2:                                                                                                    \
                return (T)z;                                                                                           \
            default:                                                                                                   \
                return (T)x;                                                                                           \
            }                                                                                                          \
        }                                                                                                              \
    }

#define VEC4_IMPL_(NAME, BNAME, TYPE, BASE)                                                                            \
    class NAME : public BASE<BNAME, TYPE, TYPE, TYPE, TYPE> {                                                          \
    public:                                                                                                            \
        VEC_X_MEMBER_(TYPE);                                                                                           \
        VEC_Y_MEMBER_(TYPE);                                                                                           \
        VEC_Z_MEMBER_(TYPE);                                                                                           \
        VEC_W_MEMBER_(TYPE);                                                                                           \
        constexpr NAME() noexcept : x(0), y(0), z(0), w(0){};                                                          \
        template <std::convertible_to<TYPE> TALL>                                                                      \
        constexpr NAME(TALL all) noexcept                                                                              \
        : x(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          y(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          z(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ),                                                                                                           \
          w(static_cast<TYPE>((std::is_floating_point_v<TALL> && !std::is_floating_point_v<TYPE>) ? floor(all) : all)  \
          ){};                                                                                                         \
        template <                                                                                                     \
            std::convertible_to<TYPE> T0,                                                                              \
            std::convertible_to<TYPE> T1,                                                                              \
            std::convertible_to<TYPE> T2,                                                                              \
            std::convertible_to<TYPE> T3>                                                                              \
        constexpr NAME(T0 x, T1 y, T2 z, T3 w) noexcept                                                                \
        : x(static_cast<TYPE>((std::is_floating_point_v<T0> && !std::is_floating_point_v<TYPE>) ? floor(x) : x)),      \
          y(static_cast<TYPE>((std::is_floating_point_v<T1> && !std::is_floating_point_v<TYPE>) ? floor(y) : y)),      \
          z(static_cast<TYPE>((std::is_floating_point_v<T2> && !std::is_floating_point_v<TYPE>) ? floor(z) : z)),      \
          w(static_cast<TYPE>((std::is_floating_point_v<T3> && !std::is_floating_point_v<TYPE>) ? floor(w) : w)){};    \
        template <IsField T>                                                                                           \
        constexpr NAME(T const& vec)                                                                                   \
            requires((IsIntN<T> || IsFloatN<T> || IsBoolN<T>) && T::size() == 4)                                       \
        : NAME() {                                                                                                     \
            T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                       \
                if constexpr (std::is_floating_point_v<axis_type> && !std::is_floating_point_v<TYPE>) {                \
                    this->get<TYPE>(iter) = static_cast<TYPE>(floor(vec.template get<axis_type>(iter)));               \
                } else {                                                                                               \
                    this->get<TYPE>(iter) = static_cast<TYPE>((vec.template get<axis_type>(iter)));                    \
                }                                                                                                      \
            });                                                                                                        \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T& get(size_t index) noexcept {                                                        \
            switch (index) {                                                                                           \
            case 1:                                                                                                    \
                return (T&)y;                                                                                          \
            case 2:                                                                                                    \
                return (T&)z;                                                                                          \
            case 3:                                                                                                    \
                return (T&)w;                                                                                          \
            default:                                                                                                   \
                return (T&)x;                                                                                          \
            }                                                                                                          \
        }                                                                                                              \
        template <typename T>                                                                                          \
        [[nodiscard]] constexpr T get(size_t index) const noexcept {                                                   \
            switch (index) {                                                                                           \
            case 1:                                                                                                    \
                return (T)y;                                                                                           \
            case 2:                                                                                                    \
                return (T)z;                                                                                           \
            case 3:                                                                                                    \
                return (T)w;                                                                                           \
            default:                                                                                                   \
                return (T)x;                                                                                           \
            }                                                                                                          \
        }                                                                                                              \
    }


// NOLINTEND