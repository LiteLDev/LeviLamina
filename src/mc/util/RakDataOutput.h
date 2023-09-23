#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    RakDataOutput& operator=(RakDataOutput const&);
    RakDataOutput(RakDataOutput const&);
    RakDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view);

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view);

    // vIndex: 3, symbol: ?writeFloat@BytesDataOutput@@UEAAXM@Z
    virtual void writeFloat(float);

    // vIndex: 4, symbol: ?writeDouble@BytesDataOutput@@UEAAXN@Z
    virtual void writeDouble(double);

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char);

    // vIndex: 6, symbol: ?writeShort@BytesDataOutput@@UEAAXF@Z
    virtual void writeShort(short);

    // vIndex: 7, symbol: ?writeInt@BytesDataOutput@@UEAAXH@Z
    virtual void writeInt(int);

    // vIndex: 8, symbol: ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64);

    // vIndex: 9, symbol: ?writeBytes@RakDataOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const*, uint64);

    // symbol: ??1RakDataOutput@@UEAA@XZ
    MCVAPI ~RakDataOutput();

    // NOLINTEND
};
