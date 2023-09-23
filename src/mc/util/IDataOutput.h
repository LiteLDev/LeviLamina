#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual ~IDataOutput() = default;

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view) = 0;

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view) = 0;

    // vIndex: 3, symbol: ?writeFloat@BytesDataOutput@@UEAAXM@Z
    virtual void writeFloat(float) = 0;

    // vIndex: 4, symbol: ?writeDouble@BytesDataOutput@@UEAAXN@Z
    virtual void writeDouble(double) = 0;

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char) = 0;

    // vIndex: 6, symbol: ?writeShort@BytesDataOutput@@UEAAXF@Z
    virtual void writeShort(short) = 0;

    // vIndex: 7, symbol: ?writeInt@BytesDataOutput@@UEAAXH@Z
    virtual void writeInt(int) = 0;

    // vIndex: 8, symbol: ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64) = 0;

    // vIndex: 9, symbol: ?writeBytes@RakDataOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const*, uint64) = 0;

    // NOLINTEND
};
