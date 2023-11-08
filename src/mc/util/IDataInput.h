#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IDataInput@@UEAA@XZ
    virtual ~IDataInput() = default;

    // vIndex: 1, symbol:
    // ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString() = 0;

    // vIndex: 2, symbol:
    // ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString() = 0;

    // vIndex: 3, symbol: ?readFloat@BigEndianStringByteInput@@UEAAMXZ
    virtual float readFloat() = 0;

    // vIndex: 4, symbol: ?readDouble@BigEndianStringByteInput@@UEAANXZ
    virtual double readDouble() = 0;

    // vIndex: 5, symbol: ?readByte@BytesDataInput@@UEAADXZ
    virtual char readByte() = 0;

    // vIndex: 6, symbol: ?readShort@BigEndianStringByteInput@@UEAAFXZ
    virtual short readShort() = 0;

    // vIndex: 7, symbol: ?readInt@BigEndianStringByteInput@@UEAAHXZ
    virtual int readInt() = 0;

    // vIndex: 8, symbol: ?readLongLong@BigEndianStringByteInput@@UEAA_JXZ
    virtual int64 readLongLong() = 0;

    // vIndex: 9, symbol: ?readBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void*, uint64) = 0;

    // vIndex: 10, symbol: ?numBytesLeft@StringByteInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const = 0;

    // NOLINTEND
};
