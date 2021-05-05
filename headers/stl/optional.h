#pragma once
struct Ioptional {};
template <typename T>
struct optional : Ioptional {
    char filler[sizeof(T)];
    using Tval = typename T;
    bool set;
    T &value() {
        if (!set) {
            throw(std::exception("bad optional access"));
        }
        return *(T *)filler;
    }
    const T &value() const {
        if (!set) {
            throw(std::exception("bad optional access"));
        }
        return *(T *)filler;
    }
    const T &val() const { return value(); }
    T &val() { return value(); }
    inline bool Set() const { return set; }
    optional(T const &v) {
        new (filler) T(v);
        set = true;
    }
    optional(T &&v) {
        new (filler) T(std::forward<T>(v));
        set = true;
    }
    optional() { set = false; }
    optional(const optional<T> &x) {
        set = x.set;
        if (set) {
            new (filler) T(x.value());
        }
    }
    optional(optional<T> &&x) noexcept {
        set = x.set;
        if (set) {
            new (filler) T(std::move(x.value()));
        }
        x.set = false;
    }
    optional<T> &operator=(const optional<T> &x) {
        set = x.set;
        if (set) {
            new (filler) T(x.value());
        }
        return *this;
    }
    ~optional() {
        if (set) {
            value().~T();
        }
    }
    template <typename Callable>
    void then(Callable const &x) {
        if (set)
            x(val());
    }
};
