#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TagMemoryChunk {
public:
    size_t                   mElements{0};
    size_t                   mSize{0};
    std::unique_ptr<uchar[]> mBuffer;

    LLNDAPI TagMemoryChunk(uchar data[], size_t size);
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
