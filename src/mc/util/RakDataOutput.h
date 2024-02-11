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
    // vIndex: 0, symbol: ??1RakDataOutput@@UEAA@XZ
    virtual ~RakDataOutput();

    // vIndex: 9, symbol: ?writeBytes@RakDataOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
