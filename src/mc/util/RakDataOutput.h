#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/BitStream.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {
public:
    RakNet::BitStream* mBitStream;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakDataOutput();

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void writeBytes$(void const* data, uint64 bytes);

    // NOLINTEND
};
