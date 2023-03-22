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
//         unroll<10>([&](size_t iter) { out += 1; });
//     }

// template <class T, class _t_type_, size_t N>
// class VectorBase {
//    public:
// using _t_type_ = decltype(T::operator[](size_t));

// inline _t_type_& operator[](size_t index) { return static_cast<_t_type_&>(static_cast<T&>((*this))[index]); }
//
// inline _t_type_ operator[](size_t index) const {
//     return static_cast<_t_type_>((*this)[index]);
// }

#define FAKE_CRTP(T, _t_type_, N)                                                                                      \
    [[nodiscard]] inline std::vector<T> getNeighbors() const {                                                         \
        std::vector<T> res;                                                                                            \
        res.clear();                                                                                                   \
        unroll<N * 2>([&](size_t iter) {                                                                               \
            T tmp = (*this);                                                                                           \
            tmp[iter / 2] += static_cast<_t_type_>((iter % 2) * 2 - 1);                                                \
            res.push_back(tmp);                                                                                        \
        });                                                                                                            \
        return res;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline std::string toString() const {                                                                \
        std::string res("(");                                                                                          \
        unroll<N - 1>([&](size_t iter) { res += std::to_string(operator[](iter)) + ", "; });                           \
        res += std::to_string(operator[](N - 1)) + ')';                                                                \
        return res;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] constexpr bool operator==(T const& b) const {                                                        \
        bool res = true;                                                                                               \
        unroll<N>([&](size_t iter) { res = res && (b[iter] == operator[](iter)); });                                   \
        return res;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] constexpr bool operator!=(T const& b) const { return !((*this) == b); }                              \
                                                                                                                       \
    constexpr T& operator+=(T const& b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) += b[iter]; });                                                  \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator-=(T const& b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) -= b[iter]; });                                                  \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator*=(T const& b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) *= b[iter]; });                                                  \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator/=(T const& b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) /= b[iter]; });                                                  \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator+(T const& b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp += b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator-(T const& b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp -= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator*(T const& b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp *= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator/(T const& b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp /= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator+=(_t_type_ b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) += b; });                                                        \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator-=(_t_type_ b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) -= b; });                                                        \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator*=(_t_type_ b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) *= b; });                                                        \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    constexpr T& operator/=(_t_type_ b) {                                                                              \
        unroll<N>([&](size_t iter) { operator[](iter) /= b; });                                                        \
        return static_cast<T&>((*this));                                                                               \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator+(_t_type_ b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp += b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator-(_t_type_ b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp -= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator*(_t_type_ b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp *= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline T operator/(_t_type_ b) const {                                                               \
        T tmp = (*this);                                                                                               \
        tmp /= b;                                                                                                      \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline double dot(T const& b) const {                                                                \
        double res = 0.0;                                                                                              \
        unroll<N>([&](size_t iter) { res += (double)(operator[](iter)) * b[iter]; });                                  \
        return res;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline double lengthSqr() const { return dot((*this)); }                                             \
                                                                                                                       \
    [[nodiscard]] inline double length() const { return sqrt(static_cast<double>(lengthSqr())); }                      \
                                                                                                                       \
    [[nodiscard]] inline double distanceTo(T const& b) const { return ((*this) - b).length(); }                        \
                                                                                                                       \
    [[nodiscard]] inline double distanceToSqr(T const& b) const { return ((*this) - b).lengthSqr(); }                  \
                                                                                                                       \
    [[nodiscard]] inline T normalize() const { return (*this) / static_cast<_t_type_>(length()); }                     \
                                                                                                                       \
    [[nodiscard]] inline T add(T const& b) const { return (*this) + b; }                                               \
                                                                                                                       \
    [[nodiscard]] inline T sub(T const& b) const { return (*this) - b; }                                               \
                                                                                                                       \
    [[nodiscard]] inline T mul(T const& b) const { return (*this) * b; }                                               \
                                                                                                                       \
    [[nodiscard]] inline T div(T const& b) const { return (*this) / b; }                                               \
                                                                                                                       \
    template <typename... Args>                                                                                        \
    [[nodiscard]] inline T add(_t_type_ first, Args... args) const {                                                   \
        static_assert(sizeof...(args) <= N - 1, "too many arguments!");                                                \
        T tmp = (*this);                                                                                               \
        const std::array<_t_type_, sizeof...(args) + 1> vec = {first, args...};                                        \
        unroll<vec.size()>([&](size_t iter) { tmp[iter] += vec[iter]; });                                              \
        return tmp;                                                                                                    \
    }                                                                                                                  \
    template <typename... Args>                                                                                        \
    [[nodiscard]] inline T sub(_t_type_ first, Args... args) const {                                                   \
        static_assert(sizeof...(args) <= N - 1, "too many arguments!");                                                \
        T tmp = (*this);                                                                                               \
        const std::array<_t_type_, sizeof...(args) + 1> vec = {first, args...};                                        \
        unroll<vec.size()>([&](size_t iter) { tmp[iter] -= vec[iter]; });                                              \
        return tmp;                                                                                                    \
    }                                                                                                                  \
    template <typename... Args>                                                                                        \
    [[nodiscard]] inline T mul(_t_type_ first, Args... args) const {                                                   \
        static_assert(sizeof...(args) <= N - 1, "too many arguments!");                                                \
        T tmp = (*this);                                                                                               \
        const std::array<_t_type_, sizeof...(args) + 1> vec = {first, args...};                                        \
        unroll<vec.size()>([&](size_t iter) { tmp[iter] *= vec[iter]; });                                              \
        return tmp;                                                                                                    \
    }                                                                                                                  \
    template <typename... Args>                                                                                        \
    [[nodiscard]] inline T div(_t_type_ first, Args... args) const {                                                   \
        static_assert(sizeof...(args) <= N - 1, "too many arguments!");                                                \
        T tmp = (*this);                                                                                               \
        const std::array<_t_type_, sizeof...(args) + 1> vec = {first, args...};                                        \
        unroll<vec.size()>([&](size_t iter) { tmp[iter] /= vec[iter]; });                                              \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline static T min(T const& a, T const& b) {                                                        \
        T tmp;                                                                                                         \
        unroll<N>([&](size_t iter) { tmp[iter] = std::min<_t_type_>(a[iter], b[iter]); });                             \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline static T max(T const& a, T const& b) {                                                        \
        T tmp;                                                                                                         \
        unroll<N>([&](size_t iter) { tmp[iter] = std::max<_t_type_>(a[iter], b[iter]); });                             \
        return tmp;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] inline bool operator<(const T& b) const { return lengthSqr() < b.lengthSqr(); }                      \
                                                                                                                       \
    [[nodiscard]] inline bool operator>(const T& b) const { return lengthSqr() > b.lengthSqr(); }                      \
                                                                                                                       \
    [[nodiscard]] inline std::size_t hash() const {                                                                    \
        std::size_t res = 0;                                                                                           \
        unroll<N>(                                                                                                     \
            [&](size_t iter) { res ^= std::hash<_t_type_>()(operator[](iter)) + (res << 3) + (res >> 7) - res; });     \
        return res;                                                                                                    \
    }                                                                                                                  \
                                                                                                                       \
    [[nodiscard]] constexpr size_t size() const { return N; }
