#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    // prevent constructor by default
    BigEndianStringByteOutput& operator=(BigEndianStringByteOutput const&) = delete;
    BigEndianStringByteOutput(BigEndianStringByteOutput const&)            = delete;
    BigEndianStringByteOutput()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?writeFloat@BigEndianStringByteOutput@@UEAAXM@Z
    virtual void writeFloat(float);

    // vIndex: 4, symbol: ?writeDouble@BigEndianStringByteOutput@@UEAAXN@Z
    virtual void writeDouble(double);

    // vIndex: 6, symbol: ?writeShort@BigEndianStringByteOutput@@UEAAXF@Z
    virtual void writeShort(short);

    // vIndex: 7, symbol: ?writeInt@BigEndianStringByteOutput@@UEAAXH@Z
    virtual void writeInt(int);

    // vIndex: 8, symbol: ?writeLongLong@BigEndianStringByteOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64);

    // symbol: ??1BigEndianStringByteOutput@@UEAA@XZ
    MCVAPI ~BigEndianStringByteOutput();

    // NOLINTEND
};
