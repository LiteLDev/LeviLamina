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
        auto res = ::serialize<T>::read(*this);
        if (res) {
            x = res.value();
            return {};
        }
        return res;
    }
    MCTAPI Bedrock::Result<void> readType(class CompoundTag&);
    MCTAPI Bedrock::Result<void> readType(struct CommandOriginData&);
    MCTAPI Bedrock::Result<void> readType(class Experiments&);
    MCTAPI Bedrock::Result<void> readType(struct ItemStackRequestSlotInfo&);
    MCTAPI Bedrock::Result<void> readType(class MoveActorAbsoluteData&);
    MCTAPI Bedrock::Result<void> readType(class NetworkItemStackDescriptor&);
    MCTAPI Bedrock::Result<void> readType(class StructureSettings&);
    MCTAPI Bedrock::Result<void> readType(std::vector<std::unique_ptr<class DataItem>>&);

    // prevent constructor by default
    ReadOnlyBinaryStream& operator=(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ReadOnlyBinaryStream@@UEAA@XZ
    virtual ~ReadOnlyBinaryStream();

    // vIndex: 1, symbol: ?read@ReadOnlyBinaryStream@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> read(void* target, uint64 num);

    // symbol: ??0ReadOnlyBinaryStream@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ReadOnlyBinaryStream(std::string&& buffer);

    // symbol: ??0ReadOnlyBinaryStream@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI ReadOnlyBinaryStream(std::string const& buffer, bool copyBuffer);

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
    // ?getString@ReadOnlyBinaryStream@@QEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@_K@Z
    MCAPI class Bedrock::Result<std::string> getString(uint64);

    // symbol:
    // ?getString@ReadOnlyBinaryStream@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI class Bedrock::Result<void> getString(std::string&, uint64);

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
