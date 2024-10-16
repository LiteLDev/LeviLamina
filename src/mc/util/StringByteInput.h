#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    size_t           mIdx;
    std::string_view mBuffer;

    [[nodiscard]] constexpr StringByteInput(std::string_view sv, size_t offset = 0) noexcept
    : mIdx(offset),
      mBuffer(sv) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StringByteInput() = default;

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void* data, uint64 bytes);

    // vIndex: 10
    virtual uint64 numBytesLeft() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI uint64 numBytesLeft$() const;

    MCAPI class Bedrock::Result<void> readBytesResult$(void* data, uint64 bytes);

    // NOLINTEND
};
