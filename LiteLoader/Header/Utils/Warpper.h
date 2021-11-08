#pragma once
template <typename T>
struct Wrapped {
    T* _this;
    Wrapped(T const& x)
        : _this((T*)&x) {
    }
    Wrapped(T* x)
        : _this(x) {
    }
    Wrapped() {
        _this = nullptr;
    }
    operator T&() {
        return *_this;
    }
    operator T*() {
        return _this;
    }
    T& get() {
        return *_this;
    }
    T* operator->() {
        return _this;
    }
    operator bool() {
        return _this;
    }
};