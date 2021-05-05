#pragma once
#include <functional>
#include <type_traits>
using std::function;

template <typename T>
struct CBStorage {
    union
    {
        void (*p)(T &);
        function<void(T &)> *f;
    } d;
    int is_p;
    void operator()(T &x) { (is_p ? d.p : (*d.f))(x); }
    CBStorage() {
        is_p = 1;
        d.p  = nullptr;
    }
    CBStorage(void (*c)(T &)) {
        is_p = 1;
        d.p  = c;
    }
    CBStorage(function<void(T &)> &&f) {
        is_p = 0;
        d.f  = new function<void(T &)>(std::move(f));
    }
    CBStorage(CBStorage &&x) noexcept {
        is_p = x.is_p;
        static_assert(sizeof(d) == 8);
        memcpy(&d, &x.d, sizeof(d));
        x.is_p = 1;
    }
    CBStorage(CBStorage const &x) {
        if (!x.is_p) {
            d.f  = new function<void(T &)>(*x.d.f);
            is_p = 0;
        } else {
            is_p = 1;
            d.p  = x.d.p;
        }
    }
    CBStorage &operator=(CBStorage const &) = delete;
    ~CBStorage() {
        if (!is_p)
            delete d.f;
    }
};
template <typename T, typename C>
CBStorage<T> _MakeCB_helper(C &&y, std::function<void(T &)> *x) {
    using CBP_t = void (*)(T &);
    if constexpr (std::is_convertible_v<C, CBP_t>) {
        return CBStorage(CBP_t(std::move(y)));
    } else {
        return CBStorage(function(std::move(y)));
    }
}
template <typename CB>
auto MakeCB(CB &&x) {
    return _MakeCB_helper(std::move(x), (std::add_pointer_t<decltype(std::function(x))>)0);
}