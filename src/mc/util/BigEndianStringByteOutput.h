#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    using StringByteOutput::StringByteOutput;

    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BigEndianStringByteOutput() = default;

    // vIndex: 3
    virtual void writeFloat(float v);

    // vIndex: 4
    virtual void writeDouble(double v);

    // vIndex: 6
    virtual void writeShort(short v);

    // vIndex: 7
    virtual void writeInt(int v);

    // vIndex: 8
    virtual void writeLongLong(int64 v);

    // NOLINTEND
};
