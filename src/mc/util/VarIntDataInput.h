#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class VarIntDataInput : public ::BytesDataInput {
public:
    ReadOnlyBinaryStream* mStream;

    explicit VarIntDataInput(class ReadOnlyBinaryStream* bs) : mStream(bs) {}

    VarIntDataInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?readString@VarIntDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString();

    // vIndex: 2, symbol:
    // ?readLongString@VarIntDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString();

    // vIndex: 3, symbol: ?readFloat@VarIntDataInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@VarIntDataInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 5, symbol: ?readByte@VarIntDataInput@@UEAADXZ
    virtual char readByte();

    // vIndex: 6, symbol: ?readShort@VarIntDataInput@@UEAAFXZ
    virtual short readShort();

    // vIndex: 7, symbol: ?readInt@VarIntDataInput@@UEAAHXZ
    virtual int readInt();

    // vIndex: 8, symbol: ?readLongLong@VarIntDataInput@@UEAA_JXZ
    virtual int64 readLongLong();

    // vIndex: 9, symbol: ?readBytes@VarIntDataInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void*, uint64);

    // vIndex: 10, symbol: ?numBytesLeft@VarIntDataInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // symbol: ??1VarIntDataInput@@UEAA@XZ
    MCVAPI ~VarIntDataInput();

    // NOLINTEND
};
