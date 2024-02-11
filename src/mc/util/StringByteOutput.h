#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&);
    StringByteOutput(StringByteOutput const&);
    StringByteOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringByteOutput@@UEAA@XZ
    virtual ~StringByteOutput();

    // vIndex: 9, symbol: ?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
