#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IDataOutput@@UEAA@XZ
    virtual ~IDataOutput() = default;

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view v) = 0;

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view v) = 0;

    // vIndex: 3, symbol: ?writeFloat@BigEndianStringByteOutput@@UEAAXM@Z
    virtual void writeFloat(float v) = 0;

    // vIndex: 4, symbol: ?writeDouble@BigEndianStringByteOutput@@UEAAXN@Z
    virtual void writeDouble(double v) = 0;

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char v) = 0;

    // vIndex: 6, symbol: ?writeShort@BigEndianStringByteOutput@@UEAAXF@Z
    virtual void writeShort(short v) = 0;

    // vIndex: 7, symbol: ?writeInt@BigEndianStringByteOutput@@UEAAXH@Z
    virtual void writeInt(int v) = 0;

    // vIndex: 8, symbol: ?writeLongLong@BigEndianStringByteOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64 v) = 0;

    // vIndex: 9, symbol: ?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const* data, uint64 bytes) = 0;

    // NOLINTEND
};
