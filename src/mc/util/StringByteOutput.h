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
    // vIndex: 0
    virtual ~StringByteOutput() = default;

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void writeBytes$(void const* data, uint64 bytes);

    // NOLINTEND
};
