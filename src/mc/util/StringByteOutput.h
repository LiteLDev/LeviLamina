#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    std::string* mBuffer;

    [[nodiscard]] constexpr explicit StringByteOutput(std::string& str) noexcept : mBuffer(std::addressof(str)) {}

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringByteOutput@@UEAA@XZ
    virtual ~StringByteOutput();

    // vIndex: 9, symbol: ?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
