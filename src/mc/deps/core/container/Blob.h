#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    using value_type     = uchar;
    using size_type      = size_t;
    using pointer        = value_type*;
    using iterator       = value_type*;
    using const_pointer  = value_type const*;
    using const_iterator = value_type const*;

    using delete_function = void (*)(pointer);

    struct Deleter {
    public:
        delete_function mFn;

        [[nodiscard]] LL_CONSTEXPR23 Deleter() : mFn(Blob::defaultDeleter) {}

        [[nodiscard]] LL_CONSTEXPR23 Deleter(delete_function fn) : mFn(fn) {}

        void operator()(pointer x) const { mFn(x); }
    };

    using pointer_type = std::unique_ptr<value_type[], Deleter>;

    pointer_type mBlob{}; // this+0x0
    size_type    mSize{}; // this+0x10

    [[nodiscard]] LL_CONSTEXPR23 Blob() = default;

    [[nodiscard]] LL_CONSTEXPR23 Blob(std::span<value_type> s, Deleter deleter = {}) : mSize(s.size()) { // NOLINT
        mBlob = pointer_type(new value_type[mSize], deleter);
        std::copy(s.begin(), s.end(), mBlob.get());
    }

    [[nodiscard]] LL_CONSTEXPR23 pointer data() const { return mBlob.get(); }

    [[nodiscard]] LL_CONSTEXPR23 size_type size() const { return mSize; }

    [[nodiscard]] LL_CONSTEXPR23 std::span<value_type> view() const { return {data(), size()}; }

    LL_MAY_CONSTEXPR Blob&       operator=(Blob&&) noexcept = default;
    [[nodiscard]] LL_CONSTEXPR23 Blob(Blob&&) noexcept      = default;

    [[nodiscard]] LL_CONSTEXPR23 Blob(Blob const& other) : Blob(other.view(), other.mBlob.get_deleter()) {}

    LL_CONSTEXPR23 Blob& operator=(Blob const& other) {
        if (this != &other) {
            *this = Blob{other};
        }
        return *this;
    }

public:
    // NOLINTBEGIN
    MCAPI explicit Blob(uint64 size);

    MCAPI const_iterator cbegin() const;

    MCAPI const_iterator cend() const;

    MCAPI bool empty() const;

    MCAPI ~Blob();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void defaultDeleter(pointer ptr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace mce
