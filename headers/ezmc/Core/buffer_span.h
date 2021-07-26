#pragma once

#include <vector>

template <typename T>
class buffer_span {
public:
    T const *a, *b;

    inline buffer_span(T const* a, T const* b)
        : a(a)
        , b(b) {
    }
    inline buffer_span(std::vector<T> const& v)
        : a(v.data())
        , b(v.data() + v.size()) {
    }

    inline size_t size() const {
        return b - a;
    }
    inline T const operator[](size_t idx) const {
        return a[idx];
    }
    inline T const* begin() const {
        return a;
    }
    inline T const* end() const {
        return b;
    }
};

template <typename T>
class buffer_span_mut {
public:
    T *a, *b;

    inline buffer_span_mut(T* a, T* b)
        : a(a)
        , b(b) {
    }
    inline buffer_span_mut(std::vector<T>& v)
        : a(v.data())
        , b(v.data() + v.size()) {
    }

    inline size_t size() const {
        return b - a;
    }
    inline T const operator[](size_t idx) const {
        return a[idx];
    }
    inline T const* begin() const {
        return a;
    }
    inline T const* end() const {
        return b;
    }
};