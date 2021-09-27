#pragma once

#include <cstdint>
#include <emmintrin.h>

namespace gsl {

template <typename T, size_t ext = (size_t)-1>
class span;

template <typename T>
class span<T, (size_t)-1> {
public:
    union {
        __m128i val;
        struct {
            size_t len;
            T*     target;
        };
    };

    span(T* target, size_t len)
        : len(len)
        , target(target) {
    }

    T* begin() const {
        return target;
    }
    T* end() const {
        return target + len;
    }
    bool empty() const {
        return len == 0;
    }
    size_t size() const {
        return len;
    }

    T* data() const {
        return target;
    }
};

template <typename T>
span<T, (size_t)-1> make_span(T* target, size_t len) {
    return {target, len};
}

} // namespace gsl