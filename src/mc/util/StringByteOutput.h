#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&) = delete;
    StringByteOutput(StringByteOutput const&)            = delete;
    StringByteOutput()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view);

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view);

    // vIndex: 3, symbol: ?writeFloat@BigEndianStringByteOutput@@UEAAXM@Z
    virtual void writeFloat(float);

    // vIndex: 4, symbol: ?writeDouble@BigEndianStringByteOutput@@UEAAXN@Z
    virtual void writeDouble(double);

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char);

    // vIndex: 6, symbol: ?writeShort@BigEndianStringByteOutput@@UEAAXF@Z
    virtual void writeShort(short);

    // vIndex: 7, symbol: ?writeInt@BigEndianStringByteOutput@@UEAAXH@Z
    virtual void writeInt(int);

    // vIndex: 8, symbol: ?writeLongLong@BigEndianStringByteOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64);

    // vIndex: 9, symbol: ?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z
    virtual void writeBytes(void const*, uint64);

    // symbol: ??1StringByteOutput@@UEAA@XZ
    MCVAPI ~StringByteOutput();

    // NOLINTEND
};
