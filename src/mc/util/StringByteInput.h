#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
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
    // vIndex: 0, symbol: ??1StringByteInput@@UEAA@XZ
    virtual ~StringByteInput();

    // vIndex: 9, symbol: ?readBytesResult@StringByteInput@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64);

    // vIndex: 10, symbol: ?numBytesLeft@StringByteInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // NOLINTEND
};
