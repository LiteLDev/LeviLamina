#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // prevent constructor by default
    StringByteInput& operator=(StringByteInput const&);
    StringByteInput(StringByteInput const&);
    StringByteInput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringByteInput@@UEAA@XZ
    virtual ~StringByteInput();

    // vIndex: 9, symbol: ?readBytes@StringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void* data, uint64 bytes);

    // vIndex: 10, symbol: ?numBytesLeft@StringByteInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // NOLINTEND
};
