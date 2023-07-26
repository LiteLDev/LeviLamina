#pragma once
#include <utility>
#include <vector>
#include <type_traits>
#include <string>

template <typename T, typename... Types>
constexpr bool is_all_same_v = (std::is_same_v<T, Types> && ...);

template <typename Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...>) {
    (void(fn(N)), ...);
}

template <size_t N, typename Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
}

template <typename Fn, size_t N, typename T, typename... Args>
constexpr void unrollWithArgs_impl(Fn fn) {
    void(fn(N, T{}));
    if constexpr (sizeof...(Args) > 0) {
        unrollWithArgs_impl<Fn, N + 1, Args...>(fn);
    }
}

template <typename... Args, typename Fn>
constexpr void unrollWithArgs(Fn fn) {
    unrollWithArgs_impl<Fn, 0, Args...>(fn);
}

template <std::size_t N, typename T, typename... Types>
struct get_type {
    using type = typename get_type<N - 1, Types...>::type;
};

template <typename T, typename... Types>
struct get_type<0, T, Types...> {
    using type = T;
};

template <std::size_t N, typename... Types>
using get_type_t = typename get_type<N, Types...>::type;

template <typename T>
constexpr void hash_combine(T const& v, std::size_t& seed) {
    seed ^= v + 2654435769LL + (seed << 6LL) + (seed >> 2LL);
}

template <typename T, typename... Component>
class VectorBase {
public:
    using first_type = get_type_t<0, Component...>;

    [[nodiscard]] constexpr size_t size() const {
        return sizeof...(Component);
    }

    [[nodiscard]] inline std::vector<T> getNeighbors() const {
        std::vector<T> res;
        unrollWithArgs<Component...>([&](size_t axis, auto shit) constexpr {
            using axis_type = decltype(shit);
            unroll<2>([&](size_t iter) {
                T tmp = *(static_cast<T const*>(this));
                tmp.get<axis_type>(axis) += static_cast<axis_type>(iter * 2 - 1);
                res.emplace_back(tmp);
            });
        });
        return res;
    }

    [[nodiscard]] inline std::string toString() const {
        std::string res("(");
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            res += std::to_string(static_cast<T const*>(this)->get<axis_type>(iter)) +
                   ((iter < sizeof...(Component) - 1) ? ", " : ")");
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator==(T const& b) const {
        bool res = true;
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            res = res && (b.get<axis_type>(iter) == static_cast<T const*>(this)->get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator!=(T const& b) const {
        return !(*(static_cast<T const*>(this)) == b);
    }

    constexpr T& operator+=(T const& b) {
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            static_cast<T*>(this)->get<axis_type>(iter) += b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator-=(T const& b) {
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            static_cast<T*>(this)->get<axis_type>(iter) -= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator*=(T const& b) {
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            static_cast<T*>(this)->get<axis_type>(iter) *= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator/=(T const& b) {
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            static_cast<T*>(this)->get<axis_type>(iter) /= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    [[nodiscard]] inline T operator+(T const& b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp += b;
        return tmp;
    }

    [[nodiscard]] inline T operator-(T const& b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp -= b;
        return tmp;
    }

    [[nodiscard]] inline T operator*(T const& b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp *= b;
        return tmp;
    }

    [[nodiscard]] inline T operator/(T const& b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp /= b;
        return tmp;
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    constexpr T& operator+=(first_type b) {
        unrollWithArgs<Component...>(
            [&](size_t iter, auto shit) constexpr { static_cast<T*>(this)->get<first_type>(iter) += b; });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    constexpr T& operator-=(first_type b) {
        unrollWithArgs<Component...>(
            [&](size_t iter, auto shit) constexpr { static_cast<T*>(this)->get<first_type>(iter) -= b; });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    constexpr T& operator*=(first_type b) {
        unrollWithArgs<Component...>(
            [&](size_t iter, auto shit) constexpr { static_cast<T*>(this)->get<first_type>(iter) *= b; });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    constexpr T& operator/=(first_type b) {
        unrollWithArgs<Component...>(
            [&](size_t iter, auto shit) constexpr { static_cast<T*>(this)->get<first_type>(iter) /= b; });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] inline T operator+(first_type b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp += b;
        return tmp;
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] inline T operator-(first_type b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp -= b;
        return tmp;
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] inline T operator*(first_type b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp *= b;
        return tmp;
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] inline T operator/(first_type b) const {
        T tmp = *(static_cast<T const*>(this));
        tmp /= b;
        return tmp;
    }

    [[nodiscard]] inline double dot(T const& b) const {
        double res = 0.0;
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            res += (double)(static_cast<T const*>(this)->get<axis_type>(iter)) * b.get<axis_type>(iter);
        });
        return res;
    }

    [[nodiscard]] inline double lengthSqr() const {
        return dot(*(static_cast<T const*>(this)));
    }

    [[nodiscard]] inline double length() const {
        return sqrt(static_cast<double>(lengthSqr()));
    }

    [[nodiscard]] inline double distanceTo(T const& b) const {
        return (*(static_cast<T const*>(this)) - b).length();
    }

    [[nodiscard]] inline double distanceToSqr(T const& b) const {
        return (*(static_cast<T const*>(this)) - b).lengthSqr();
    }

    template <typename V = first_type,
              std::enable_if_t<(is_all_same_v<Component...> && std::is_floating_point_v<V>), int> = 0>
    [[nodiscard]] inline T normalize() const {
        return *(static_cast<T const*>(this)) / static_cast<first_type>(length());
    }

    [[nodiscard]] inline T add(T const& b) const {
        return *(static_cast<T const*>(this)) + b;
    }

    [[nodiscard]] inline T sub(T const& b) const {
        return *(static_cast<T const*>(this)) - b;
    }

    [[nodiscard]] inline T mul(T const& b) const {
        return *(static_cast<T const*>(this)) * b;
    }

    [[nodiscard]] inline T div(T const& b) const {
        return *(static_cast<T const*>(this)) / b;
    }

    template <typename... Args>
    [[nodiscard]] inline std::enable_if_t<
        is_all_same_v<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component)), T>
        add(Args... args) const {
        T tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) += vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline std::enable_if_t<
        is_all_same_v<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component)), T>
        sub(Args... args) const {
        T tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) -= vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline std::enable_if_t<
        is_all_same_v<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component)), T>
        mul(Args... args) const {
        T tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) *= vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline std::enable_if_t<
        is_all_same_v<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component)), T>
        div(Args... args) const {
        T tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) /= vec[iter]; });
        return tmp;
    }

    [[nodiscard]] inline static T min(T const& a, T const& b) {
        T tmp;
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            tmp.get<axis_type>(iter) = std::min<axis_type>(a.get<axis_type>(iter), b.get<axis_type>(iter));
        });
        return tmp;
    }

    [[nodiscard]] inline static T max(T const& a, T const& b) {
        T tmp;
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            tmp.get<axis_type>(iter) = std::max<axis_type>(a.get<axis_type>(iter), b.get<axis_type>(iter));
        });
        return tmp;
    }

    [[nodiscard]] inline bool operator<(const T& b) const {
        return lengthSqr() < b.lengthSqr();
    }

    [[nodiscard]] inline bool operator>(const T& b) const {
        return lengthSqr() > b.lengthSqr();
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] constexpr first_type& operator[](size_t index) {
        return static_cast<T*>(this)->get<first_type>(index);
    }

    template <typename V = T, std::enable_if_t<is_all_same_v<Component...> && std::is_same_v<V, V>, int> = 0>
    [[nodiscard]] constexpr first_type operator[](size_t index) const {
        return static_cast<T const*>(this)->get<first_type>(index);
    }

    [[nodiscard]] constexpr std::size_t hash() const {
        std::size_t res = 0;
        unrollWithArgs<Component...>([&](size_t iter, auto shit) constexpr {
            using axis_type = decltype(shit);
            if constexpr (std::is_integral_v<axis_type>) {
                hash_combine(static_cast<T const*>(this)->get<axis_type>(iter), res);
            } else {
                hash_combine(std::hash<axis_type>()(static_cast<T const*>(this)->get<axis_type>(iter)), res);
            }
        });
        return res;
    }
};