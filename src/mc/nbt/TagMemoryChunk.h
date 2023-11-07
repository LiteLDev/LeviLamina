#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include <span>

struct TagMemoryChunk {
public:
    size_t                   mSize{0};     // not one byte
    size_t                   mCapacity{0}; // one byte
    std::unique_ptr<uchar[]> mBuffer;

    TagMemoryChunk() = default;

    template <class T>
    [[nodiscard]] inline TagMemoryChunk(std::span<T> v) : mSize(v.size()),
                                                          mCapacity(mSize * sizeof(T)) {
        this->mBuffer = std::make_unique_for_overwrite<uchar[]>(mCapacity);
        memcpy(this->mBuffer.get(), v.data(), mCapacity);
    }
    LLNDAPI TagMemoryChunk(TagMemoryChunk const&);
    LLNDAPI TagMemoryChunk(TagMemoryChunk&&) noexcept;

    LLAPI TagMemoryChunk& operator=(TagMemoryChunk const&);
    LLAPI TagMemoryChunk& operator=(TagMemoryChunk&&) noexcept;

public:
    // NOLINTBEGIN
    // symbol: ?copy@TagMemoryChunk@@QEBA?AU1@XZ
    MCAPI struct TagMemoryChunk copy() const;

    // symbol: ??9TagMemoryChunk@@QEBA_NAEBU0@@Z
    MCAPI bool operator!=(struct TagMemoryChunk const&) const;

    // symbol: ??1TagMemoryChunk@@QEAA@XZ
    MCAPI ~TagMemoryChunk();

    // NOLINTEND
};
