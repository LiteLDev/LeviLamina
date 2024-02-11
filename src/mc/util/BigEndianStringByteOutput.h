#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    using StringByteOutput::StringByteOutput;

    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BigEndianStringByteOutput@@UEAA@XZ
    virtual ~BigEndianStringByteOutput();

    // vIndex: 3, symbol: ?writeFloat@BigEndianStringByteOutput@@UEAAXM@Z
    virtual void writeFloat(float v);

    // vIndex: 4, symbol: ?writeDouble@BigEndianStringByteOutput@@UEAAXN@Z
    virtual void writeDouble(double v);

    // vIndex: 6, symbol: ?writeShort@BigEndianStringByteOutput@@UEAAXF@Z
    virtual void writeShort(short v);

    // vIndex: 7, symbol: ?writeInt@BigEndianStringByteOutput@@UEAAXH@Z
    virtual void writeInt(int v);

    // vIndex: 8, symbol: ?writeLongLong@BigEndianStringByteOutput@@UEAAX_J@Z
    virtual void writeLongLong(int64 v);

    // NOLINTEND
};
