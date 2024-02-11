#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/BinaryStream.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class VarIntDataOutput : public ::BytesDataOutput {
public:
    BinaryStream* mStream;

    explicit VarIntDataOutput(class BinaryStream* bs) : mStream(bs) {}

    VarIntDataOutput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VarIntDataOutput@@UEAA@XZ
    virtual ~VarIntDataOutput();

    // vIndex: 1, symbol: ?writeString@VarIntDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view v);

    // vIndex: 2, symbol: ?writeLongString@VarIntDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view v);

    // vIndex: 3, symbol: ?writeFloat@VarIntDataOutput@@UEAAXM@Z
    virtual void writeFloat(float v);

    // vIndex: 4, symbol: ?writeDouble@VarIntDataOutput@@UEAAXN@Z
    virtual void writeDouble(double v);

    // vIndex: 5, symbol: ?writeByte@VarIntDataOutput@@UEAAXD@Z
    virtual void writeByte(char v);

    // vIndex: 6, symbol: ?writeShort@VarIntDataOutput@@UEAAXF@Z
    virtual void writeShort(short v);

    // vIndex: 7, symbol: ?writeInt@VarIntDataOutput@@UEAAXH@Z
    virtual void writeInt(int v);

    // vIndex: 8, symbol: ?writeLongLong@VarIntDataOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64 v);

    // vIndex: 9, symbol: ?writeBytes@VarIntDataOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
