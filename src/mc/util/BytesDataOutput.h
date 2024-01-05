#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BytesDataOutput@@UEAA@XZ
    virtual ~BytesDataOutput() = default;

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view v);

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view v);

    // vIndex: 3, symbol: ?writeFloat@BytesDataOutput@@UEAAXM@Z
    virtual void writeFloat(float);

    // vIndex: 4, symbol: ?writeDouble@BytesDataOutput@@UEAAXN@Z
    virtual void writeDouble(double);

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char v);

    // vIndex: 6, symbol: ?writeShort@BytesDataOutput@@UEAAXF@Z
    virtual void writeShort(short);

    // vIndex: 7, symbol: ?writeInt@BytesDataOutput@@UEAAXH@Z
    virtual void writeInt(int);

    // vIndex: 8, symbol: ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64);

    // NOLINTEND
};
