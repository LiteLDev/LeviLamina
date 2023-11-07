#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    using StringByteInput::StringByteInput;

    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BigEndianStringByteInput@@UEAA@XZ
    virtual ~BigEndianStringByteInput();

    // vIndex: 3, symbol: ?readFloat@BigEndianStringByteInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BigEndianStringByteInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 6, symbol: ?readShort@BigEndianStringByteInput@@UEAAFXZ
    virtual short readShort();

    // vIndex: 7, symbol: ?readInt@BigEndianStringByteInput@@UEAAHXZ
    virtual int readInt();

    // vIndex: 8, symbol: ?readLongLong@BigEndianStringByteInput@@UEAA_JXZ
    virtual int64 readLongLong();

    // vIndex: 9, symbol: ?readBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void*, uint64);

    // vIndex: 11, symbol: ?readBigEndianBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBigEndianBytes(void*, uint64);

    // NOLINTEND
};
