#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/serialize/serialize.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ReadOnlyBinaryStream {
public:
    size_t             mReadPointer;   // this+0x8
    bool               mHasOverflowed; // this+0x10
    std::string        mOwnedBuffer;   // this+0x18
    const std::string* mBuffer;        // this+0x38

    template <typename T>
    inline Bedrock::Result<void> readType(T& x) {
        auto res = serialize<T>::read(*this);
        if (res.has_value()) {
            x = res.value();
            return {};
        }
        return res;
    }
    template <>
    MCAPI Bedrock::Result<void> readType(class CompoundTag&);
    template <>
    MCAPI Bedrock::Result<void> readType(struct CommandOriginData&);
    template <>
    MCAPI Bedrock::Result<void> readType(class Experiments&);
    template <>
    MCAPI Bedrock::Result<void> readType(struct ItemStackRequestSlotInfo&);
    template <>
    MCAPI Bedrock::Result<void> readType(class MoveActorAbsoluteData&);
    template <>
    MCAPI Bedrock::Result<void> readType(class NetworkItemStackDescriptor&);
    template <>
    MCAPI Bedrock::Result<void> readType(class StructureSettings&);
    template <>
    MCAPI Bedrock::Result<void> readType(std::vector<std::unique_ptr<class DataItem>>&);

    // prevent constructor by default
    ReadOnlyBinaryStream& operator=(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?read@ReadOnlyBinaryStream@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> read(void*, uint64);

    // symbol: ??1ReadOnlyBinaryStream@@UEAA@XZ
    MCVAPI ~ReadOnlyBinaryStream();

    // symbol: ??0ReadOnlyBinaryStream@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ReadOnlyBinaryStream(std::string&&);

    // symbol: ??0ReadOnlyBinaryStream@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI ReadOnlyBinaryStream(std::string const&, bool);

    // symbol: ?canReadBool@ReadOnlyBinaryStream@@QEBA_NXZ
    MCAPI bool canReadBool() const;

    // symbol: ?ensureReadCompleted@ReadOnlyBinaryStream@@QEBA?AV?$Result@XVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<void> ensureReadCompleted() const;

    // symbol: ?getBool@ReadOnlyBinaryStream@@QEAA?AV?$Result@_NVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<bool> getBool();

    // symbol: ?getByte@ReadOnlyBinaryStream@@QEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uchar> getByte();

    // symbol: ?getDouble@ReadOnlyBinaryStream@@QEAA?AV?$Result@NVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<double> getDouble();

    // symbol: ?getFloat@ReadOnlyBinaryStream@@QEAA?AV?$Result@MVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<float> getFloat();

    // symbol: ?getSignedBigEndianInt@ReadOnlyBinaryStream@@QEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<int> getSignedBigEndianInt();

    // symbol: ?getSignedInt@ReadOnlyBinaryStream@@QEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<int> getSignedInt();

    // symbol: ?getSignedInt64@ReadOnlyBinaryStream@@QEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<int64> getSignedInt64();

    // symbol: ?getSignedShort@ReadOnlyBinaryStream@@QEAA?AV?$Result@FVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<short> getSignedShort();

    // symbol:
    // ?getString@ReadOnlyBinaryStream@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Bedrock::Result<void> getString(std::string&);

    // symbol:
    // ?getString@ReadOnlyBinaryStream@@QEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    MCAPI class Bedrock::Result<std::string> getString();

    // symbol: ?getUnsignedChar@ReadOnlyBinaryStream@@QEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uchar> getUnsignedChar();

    // symbol: ?getUnsignedInt@ReadOnlyBinaryStream@@QEAA?AV?$Result@IVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uint> getUnsignedInt();

    // symbol: ?getUnsignedInt64@ReadOnlyBinaryStream@@QEAA?AV?$Result@_KVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uint64> getUnsignedInt64();

    // symbol: ?getUnsignedShort@ReadOnlyBinaryStream@@QEAA?AV?$Result@GVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<ushort> getUnsignedShort();

    // symbol: ?getUnsignedVarInt@ReadOnlyBinaryStream@@QEAA?AV?$Result@IVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uint> getUnsignedVarInt();

    // symbol: ?getUnsignedVarInt64@ReadOnlyBinaryStream@@QEAA?AV?$Result@_KVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<uint64> getUnsignedVarInt64();

    // symbol: ?getVarInt@ReadOnlyBinaryStream@@QEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<int> getVarInt();

    // symbol: ?getVarInt64@ReadOnlyBinaryStream@@QEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    MCAPI class Bedrock::Result<int64> getVarInt64();

    // symbol: ?hasOverflowed@ReadOnlyBinaryStream@@QEBA_NXZ
    MCAPI bool hasOverflowed() const;

    // symbol:
    // ?readVectorList@ReadOnlyBinaryStream@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAV?$vector@IV?$allocator@I@std@@@std@@@Z
    MCAPI class Bedrock::Result<void> readVectorList(std::vector<uint>&);

    // NOLINTEND
};
