#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include <span>

struct TagMemoryChunk {
public:
    size_t                   mSize{0};     // not one byte
    size_t                   mCapacity{0}; // one byte
    std::unique_ptr<uchar[]> mBuffer;

    [[nodiscard]] constexpr TagMemoryChunk() = default;

    template <class T, size_t N>
    [[nodiscard]] constexpr TagMemoryChunk(std::span<T, N> v) : mSize(v.size()),
                                                                mCapacity(mSize * sizeof(T)) {
        this->mBuffer = std::make_unique_for_overwrite<uchar[]>(mCapacity);
        std::copy_n((uchar*)v.data(), mCapacity, this->mBuffer.get());
    }

    [[nodiscard]] constexpr TagMemoryChunk(TagMemoryChunk const& other)
    : mSize(other.mSize),
      mCapacity(other.mCapacity) {
        this->mBuffer = std::make_unique_for_overwrite<uchar[]>(mCapacity);
        std::copy_n(other.mBuffer.get(), mCapacity, this->mBuffer.get());
    }

    [[nodiscard]] constexpr TagMemoryChunk(TagMemoryChunk&& other) noexcept
    : mSize(other.mSize),
      mCapacity(other.mCapacity),
      mBuffer(std::move(other.mBuffer)) {}

    constexpr TagMemoryChunk& operator=(TagMemoryChunk const& other) {
        if (&other == this) {
            return *this;
        }
        *this = TagMemoryChunk{other};
        return *this;
    }

    constexpr TagMemoryChunk& operator=(TagMemoryChunk&& other) noexcept {
        if (&other == this) {
            return *this;
        }
        mSize     = other.mSize;
        mCapacity = other.mCapacity;
        mBuffer   = std::move(other.mBuffer);
        return *this;
    }

    constexpr std::span<uchar> view() const { return std::span<uchar>(mBuffer.get(), mCapacity); }
};
