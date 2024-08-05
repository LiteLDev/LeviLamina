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
    // vIndex: 0
    virtual ~ReadOnlyBinaryStream();

    // vIndex: 1
    virtual class Bedrock::Result<void> read(void* target, uint64 num);

    MCAPI explicit ReadOnlyBinaryStream(std::string&& buffer);

    MCAPI ReadOnlyBinaryStream(std::string const& buffer, bool copyBuffer);

    MCAPI bool canReadBool() const;

    MCAPI class Bedrock::Result<void> ensureReadCompleted() const;

    MCAPI class Bedrock::Result<bool> getBool();

    MCAPI class Bedrock::Result<uchar> getByte();

    MCAPI class Bedrock::Result<double> getDouble();

    MCAPI class Bedrock::Result<float> getFloat();

    MCAPI class Bedrock::Result<int> getSignedBigEndianInt();

    MCAPI class Bedrock::Result<int> getSignedInt();

    MCAPI class Bedrock::Result<int64> getSignedInt64();

    MCAPI class Bedrock::Result<short> getSignedShort();

    MCAPI class Bedrock::Result<std::string> getString(uint64);

    MCAPI class Bedrock::Result<void> getString(std::string&, uint64);

    MCAPI class Bedrock::Result<uchar> getUnsignedChar();

    MCAPI class Bedrock::Result<uint> getUnsignedInt();

    MCAPI class Bedrock::Result<uint64> getUnsignedInt64();

    MCAPI class Bedrock::Result<ushort> getUnsignedShort();

    MCAPI class Bedrock::Result<uint> getUnsignedVarInt();

    MCAPI class Bedrock::Result<uint64> getUnsignedVarInt64();

    MCAPI class Bedrock::Result<int> getVarInt();

    MCAPI class Bedrock::Result<int64> getVarInt64();

    MCAPI bool hasOverflowed() const;

    MCAPI class Bedrock::Result<void> readVectorList(std::vector<uint>&);

    // NOLINTEND
};
