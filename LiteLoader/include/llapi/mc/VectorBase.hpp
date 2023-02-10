#pragma once
#include <utility>
#include <vector>
#include <string>

template <class Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...> iter) {
    (void(fn(N)), ...);
}

template <size_t N, class Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
}

//     for (size_t i = 0; i < 100; i += 10) {
//         unroll<10>([&](size_t iter) { out += rand(); });
//     }

// template <class T, class _t_type_, size_t N>
// class VectorBase {
//    public:
// using _t_type_ = decltype(T::operator[](size_t));

// inline _t_type_& operator[](size_t index) { return static_cast<_t_type_&>(static_cast<T&>(*this)[index]); }
//
// inline _t_type_ operator[](size_t index) const {
//     return static_cast<_t_type_>(static_cast<T const&>(*this)[index]);
// }

#define FAKE_CRTP(T, _t_type_, N)                                                                                  \
    inline std::vector<T> getNeighbors() const {                                                                   \
        std::vector<T> res;                                                                                        \
        res.clear();                                                                                               \
        unroll<N * 2>([&](size_t iter) {                                                                           \
            T tmp = static_cast<T const&>(*this);                                                                  \
            tmp[iter / 2] += static_cast<_t_type_>((iter % 2) * 2 - 1);                                            \
            res.push_back(tmp);                                                                                    \
        });                                                                                                        \
        return res;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline std::string toString() const {                                                                          \
        std::string res;                                                                                           \
        res += '(';                                                                                                \
        unroll<N - 1>([&](size_t iter) { res += std::to_string(operator[](iter)) + ", "; });                       \
        res += std::to_string(operator[](N - 1)) + ')';                                                            \
        return res;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    constexpr bool operator==(T const& b) const {                                                                  \
        bool res = true;                                                                                           \
        unroll<N>([&](size_t iter) { res = res && (b[iter] == operator[](iter)); });                               \
        return res;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    constexpr bool operator!=(T const& b) const { return !(static_cast<T const&>(*this) == b); }                   \
                                                                                                                   \
    constexpr T& operator+=(T const& b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) += b[iter]; });                                              \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator-=(T const& b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) -= b[iter]; });                                              \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator*=(T const& b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) *= b[iter]; });                                              \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator/=(T const& b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) /= b[iter]; });                                              \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    inline T operator+(T const& b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp += b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator-(T const& b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp -= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator*(T const& b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp *= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator/(T const& b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp /= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator+=(_t_type_ b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) += b; });                                                    \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator-=(_t_type_ b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) -= b; });                                                    \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator*=(_t_type_ b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) *= b; });                                                    \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    constexpr T& operator/=(_t_type_ b) {                                                                          \
        unroll<N>([&](size_t iter) { operator[](iter) /= b; });                                                    \
        return static_cast<T&>(*this);                                                                             \
    }                                                                                                              \
                                                                                                                   \
    inline T operator+(_t_type_ b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp += b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator-(_t_type_ b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp -= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator*(_t_type_ b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp *= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline T operator/(_t_type_ b) const {                                                                         \
        T tmp = static_cast<T const&>(*this);                                                                      \
        tmp /= b;                                                                                                  \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline _t_type_ dot(T const& b) const {                                                                        \
        _t_type_ res = static_cast<_t_type_>(0);                                                                   \
        unroll<N>([&](size_t iter) { res += operator[](iter) * b[iter]; });                                        \
        return res;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline _t_type_ lengthSqr() const { return dot(static_cast<T const&>(*this)); }                                \
                                                                                                                   \
    inline double length() const { return sqrt(static_cast<double>(lengthSqr())); }                                \
                                                                                                                   \
    inline double distanceTo(T const& b) const { return (static_cast<T const&>(*this) - b).length(); }             \
                                                                                                                   \
    inline _t_type_ distanceToSqr(T const& b) const { return (static_cast<T const&>(*this) - b).lengthSqr(); }     \
                                                                                                                   \
    inline T normalize() const { return static_cast<T const&>(*this) / static_cast<_t_type_>(length()); }          \
                                                                                                                   \
    inline static T min(T const& a, T const& b) {                                                                  \
        T tmp;                                                                                                     \
        unroll<N>([&](size_t iter) { tmp[iter] = std::min<_t_type_>(a[iter], b[iter]); });                         \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline static T max(T const& a, T const& b) {                                                                  \
        T tmp;                                                                                                     \
        unroll<N>([&](size_t iter) { tmp[iter] = std::max<_t_type_>(a[iter], b[iter]); });                         \
        return tmp;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    inline bool operator<(const T& b) const { return lengthSqr() < b.lengthSqr(); }                                \
                                                                                                                   \
    inline bool operator>(const T& b) const { return lengthSqr() > b.lengthSqr(); }                                \
                                                                                                                   \
    inline std::size_t hash() const {                                                                              \
        std::size_t res;                                                                                           \
        unroll<N>(                                                                                                 \
            [&](size_t iter) { res ^= std::hash<_t_type_>()(operator[](iter)) + (res << 3) + (res >> 7) - res; }); \
        return res;                                                                                                \
    }                                                                                                              \
                                                                                                                   \
    // };
