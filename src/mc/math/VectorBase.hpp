#pragma once
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

template <typename T, typename... Types>
constexpr bool is_all_same_v = (std::is_same_v<T, Types> && ...);

template <typename... Types>
concept AllSame = is_all_same_v<Types...>;

template <typename Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...>) {
    (void(fn(N)), ...);
}

template <size_t N, typename Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
}

template <size_t N, typename T, typename... Args>
constexpr void unrollWithArgs_impl(auto fn) {
    void(fn<T>(N));
    if constexpr (sizeof...(Args) > 0) {
        unrollWithArgs_impl<N + 1, Args...>(fn);
    }
}

template <typename... Args>
constexpr void unrollWithArgs(auto fn) {
    unrollWithArgs_impl<0, Args...>(fn);
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

    [[nodiscard]] constexpr size_t size() const { return sizeof...(Component); }

    [[nodiscard]] inline std::vector<T> getNeighbors() const {
        std::vector<T> res;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t axis) constexpr {
            unroll<2>([&](size_t iter) {
                T tmp                     = *(static_cast<T const*>(this));
                tmp.get<axis_type>(axis) += static_cast<axis_type>(iter * 2 - 1);
                res.emplace_back(tmp);
            });
        });
        return res;
    }

    [[nodiscard]] inline std::string toString() const {
        std::string res("(");
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            res += std::to_string(static_cast<T const*>(this)->get<axis_type>(iter)) +
                   ((iter < sizeof...(Component) - 1) ? ", " : ")");
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator==(T const& b) const {
        bool res = true;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            res = res && (b.get<axis_type>(iter) == static_cast<T const*>(this)->get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator!=(T const& b) const { return !(*(static_cast<T const*>(this)) == b); }

    constexpr T& operator+=(T const& b) {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<axis_type>(iter) += b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator-=(T const& b) {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<axis_type>(iter) -= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator*=(T const& b) {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<axis_type>(iter) *= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator/=(T const& b) {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<axis_type>(iter) /= b.get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    [[nodiscard]] inline T operator+(T const& b) const {
        T tmp  = *(static_cast<T const*>(this));
        tmp   += b;
        return tmp;
    }

    [[nodiscard]] inline T operator-(T const& b) const {
        T tmp  = *(static_cast<T const*>(this));
        tmp   -= b;
        return tmp;
    }

    [[nodiscard]] inline T operator*(T const& b) const {
        T tmp  = *(static_cast<T const*>(this));
        tmp   *= b;
        return tmp;
    }

    [[nodiscard]] inline T operator/(T const& b) const {
        T tmp  = *(static_cast<T const*>(this));
        tmp   /= b;
        return tmp;
    }

    constexpr T& operator+=(first_type b)
        requires AllSame<Component...>
    {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<first_type>(iter) += b;
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }


    constexpr T& operator-=(first_type b)
        requires AllSame<Component...>
    {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<first_type>(iter) -= b;
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator*=(first_type b)
        requires AllSame<Component...>
    {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<first_type>(iter) *= b;
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator/=(first_type b)
        requires AllSame<Component...>
    {
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->get<first_type>(iter) /= b;
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    [[nodiscard]] inline T operator+(first_type b) const
        requires AllSame<Component...>
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   += b;
        return tmp;
    }

    [[nodiscard]] inline T operator-(first_type b) const
        requires AllSame<Component...>
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   -= b;
        return tmp;
    }

    [[nodiscard]] inline T operator*(first_type b) const
        requires AllSame<Component...>
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   *= b;
        return tmp;
    }

    [[nodiscard]] inline T operator/(first_type b) const
        requires AllSame<Component...>
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   /= b;
        return tmp;
    }

    [[nodiscard]] inline double dot(T const& b) const {
        double res = 0.0;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            res += (double)(static_cast<T const*>(this)->get<axis_type>(iter)) * b.get<axis_type>(iter);
        });
        return res;
    }

    [[nodiscard]] inline double lengthSqr() const { return dot(*(static_cast<T const*>(this))); }

    [[nodiscard]] inline double length() const { return sqrt(static_cast<double>(lengthSqr())); }

    [[nodiscard]] inline double distanceTo(T const& b) const { return (*(static_cast<T const*>(this)) - b).length(); }

    [[nodiscard]] inline double distanceToSqr(T const& b) const {
        return (*(static_cast<T const*>(this)) - b).lengthSqr();
    }

    [[nodiscard]] inline double angle(T const& b) const { return acos(normalize().dot(b.normalize())); }

    [[nodiscard]] inline T normalize() const
        requires AllSame<Component...> && std::is_floating_point_v<first_type>
    {
        return *(static_cast<T const*>(this)) / static_cast<first_type>(length());
    }

    [[nodiscard]] inline T add(T const& b) const { return *(static_cast<T const*>(this)) + b; }

    [[nodiscard]] inline T sub(T const& b) const { return *(static_cast<T const*>(this)) - b; }

    [[nodiscard]] inline T mul(T const& b) const { return *(static_cast<T const*>(this)) * b; }

    [[nodiscard]] inline T div(T const& b) const { return *(static_cast<T const*>(this)) / b; }

    template <typename... Args>
    [[nodiscard]] inline T add(Args... args) const
        requires AllSame<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component))
    {
        T                                             tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) += vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline T sub(Args... args) const
        requires AllSame<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component))
    {
        T                                             tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) -= vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline T mul(Args... args) const
        requires AllSame<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component))
    {
        T                                             tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) *= vec[iter]; });
        return tmp;
    }

    template <typename... Args>
    [[nodiscard]] inline T div(Args... args) const
        requires AllSame<Component...> && (sizeof...(Args) > 0) && (sizeof...(Args) <= sizeof...(Component))
    {
        T                                             tmp = *(static_cast<T const*>(this));
        const std::array<first_type, sizeof...(args)> vec = {args...};
        unroll<vec.size()>([&](size_t iter) { tmp.get<first_type>(iter) /= vec[iter]; });
        return tmp;
    }

    [[nodiscard]] inline static T min(T const& a, T const& b) {
        T tmp;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.get<axis_type>(iter) = std::min<axis_type>(a.get<axis_type>(iter), b.get<axis_type>(iter));
        });
        return tmp;
    }

    [[nodiscard]] inline static T max(T const& a, T const& b) {
        T tmp;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.get<axis_type>(iter) = std::max<axis_type>(a.get<axis_type>(iter), b.get<axis_type>(iter));
        });
        return tmp;
    }

    [[nodiscard]] inline bool operator<(const T& b) const { return lengthSqr() < b.lengthSqr(); }

    [[nodiscard]] inline bool operator>(const T& b) const { return lengthSqr() > b.lengthSqr(); }

    [[nodiscard]] constexpr first_type& operator[](size_t index)
        requires AllSame<Component...>
    {
        return static_cast<T*>(this)->get<first_type>(index);
    }

    [[nodiscard]] constexpr first_type operator[](size_t index) const
        requires AllSame<Component...>
    {
        return static_cast<T const*>(this)->get<first_type>(index);
    }

    [[nodiscard]] constexpr std::size_t hash() const {
        std::size_t res = 0;
        unrollWithArgs<Component...>([&]<typename axis_type>(size_t iter) constexpr {
            if constexpr (std::is_integral_v<axis_type>) {
                hash_combine(static_cast<T const*>(this)->get<axis_type>(iter), res);
            } else {
                hash_combine(std::hash<axis_type>()(static_cast<T const*>(this)->get<axis_type>(iter)), res);
            }
        });
        return res;
    }
};