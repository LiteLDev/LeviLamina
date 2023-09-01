#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class VarIntDataOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&) = delete;
    VarIntDataOutput(VarIntDataOutput const&)            = delete;
    VarIntDataOutput()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?writeString@VarIntDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view);

    // vIndex: 2, symbol: ?writeLongString@VarIntDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view);

    // vIndex: 3, symbol: ?writeFloat@VarIntDataOutput@@UEAAXM@Z
    virtual void writeFloat(float);

    // vIndex: 4, symbol: ?writeDouble@VarIntDataOutput@@UEAAXN@Z
    virtual void writeDouble(double);

    // vIndex: 5, symbol: ?writeByte@VarIntDataOutput@@UEAAXD@Z
    virtual void writeByte(char);

    // vIndex: 6, symbol: ?writeShort@VarIntDataOutput@@UEAAXF@Z
    virtual void writeShort(short);

    // vIndex: 7, symbol: ?writeInt@VarIntDataOutput@@UEAAXH@Z
    virtual void writeInt(int);

    // vIndex: 8, symbol: ?writeLongLong@VarIntDataOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64);

    // vIndex: 9, symbol: ?writeBytes@VarIntDataOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const*, uint64);

    // symbol: ??1VarIntDataOutput@@UEAA@XZ
    MCVAPI ~VarIntDataOutput();

    // NOLINTEND
};
