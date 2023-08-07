#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {

public:
    virtual void __unk_vfn_0();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_2();
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(int64_t);
    virtual void writeBytes(void const*, uint64_t);
};
