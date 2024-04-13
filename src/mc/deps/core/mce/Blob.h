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

        [[nodiscard]] constexpr Deleter() : mFn(Blob::defaultDeleter) {}

        [[nodiscard]] constexpr Deleter(delete_function fn) : mFn(fn) {}

        void operator()(pointer x) const { mFn(x); }
    };

    using pointer_type = std::unique_ptr<value_type[], Deleter>;

    pointer_type mBlob{}; // this+0x0
    size_type    mSize{}; // this+0x10

    [[nodiscard]] constexpr Blob() = default;

    [[nodiscard]] constexpr Blob(std::span<uchar> s, Deleter deleter = {}) : mSize(s.size()) { // NOLINT
        mBlob = pointer_type(new value_type[mSize], deleter);
        std::copy(s.begin(), s.end(), mBlob.get());
    }

    [[nodiscard]] constexpr pointer data() const { return mBlob.get(); }

    [[nodiscard]] constexpr size_type size() const { return mSize; }

    [[nodiscard]] constexpr std::span<uchar> view() const { return {data(), size()}; }

    LL_CLANG_CEXPR Blob& operator=(Blob&&) noexcept = default;
    [[nodiscard]] constexpr Blob(Blob&&) noexcept   = default;

    [[nodiscard]] constexpr Blob(Blob const& other) : Blob(other.view(), other.mBlob.get_deleter()) {}

    constexpr Blob& operator=(Blob const& other) {
        if (this != &other) {
            *this = Blob{other};
        }
        return *this;
    }

public:
    // NOLINTBEGIN
    // symbol: ??0Blob@mce@@QEAA@_K@Z
    MCAPI explicit Blob(uint64 size);

    // symbol: ?cbegin@Blob@mce@@QEBAPEBEXZ
    MCAPI const_iterator cbegin() const;

    // symbol: ?cend@Blob@mce@@QEBAPEBEXZ
    MCAPI const_iterator cend() const;

    // symbol: ?empty@Blob@mce@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ??1Blob@mce@@QEAA@XZ
    MCAPI ~Blob();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?defaultDeleter@Blob@mce@@CAXPEAE@Z
    MCAPI static void defaultDeleter(pointer ptr);

    // NOLINTEND
};

}; // namespace mce
