#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class RakDataInput : public ::BytesDataInput {
public:
    // prevent constructor by default
    RakDataInput& operator=(RakDataInput const&);
    RakDataInput(RakDataInput const&);
    RakDataInput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RakDataInput@@UEAA@XZ
    virtual ~RakDataInput();

    // vIndex: 9, symbol: ?readBytes@RakDataInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void*, uint64);

    // vIndex: 10, symbol: ?numBytesLeft@RakDataInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // NOLINTEND
};
