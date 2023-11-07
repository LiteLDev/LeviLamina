#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BytesDataInput() = default;

    // vIndex: 1, symbol:
    // ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString();

    // vIndex: 2, symbol:
    // ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString();

    // vIndex: 3, symbol: ?readFloat@BytesDataInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BytesDataInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 5, symbol: ?readByte@BytesDataInput@@UEAADXZ
    virtual char readByte();

    // vIndex: 6, symbol: ?readShort@BytesDataInput@@UEAAFXZ
    virtual short readShort();

    // vIndex: 7, symbol: ?readInt@BytesDataInput@@UEAAHXZ
    virtual int readInt();

    // vIndex: 8, symbol: ?readLongLong@BytesDataInput@@UEAA_JXZ
    virtual int64 readLongLong();

    // NOLINTEND
};
