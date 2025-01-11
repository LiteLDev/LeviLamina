#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ReadOnlyBinaryStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mOwnedBuffer;
    ::ll::TypedStorage<8, 16, ::std::string_view> mView;
    ::ll::TypedStorage<8, 8, uint64>              mReadPointer;
    ::ll::TypedStorage<1, 1, bool>                mHasOverflowed;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReadOnlyBinaryStream();

    // vIndex: 1
    virtual ::Bedrock::Result<void> read(void* target, uint64 num);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReadOnlyBinaryStream(::std::string&& buffer);

    MCAPI ReadOnlyBinaryStream(::std::string_view buffer, bool copyBuffer);

    MCAPI bool canReadBool() const;

    MCAPI ::Bedrock::Result<void> ensureReadCompleted() const;

    MCAPI ::Bedrock::Result<bool> getBool();

    MCAPI ::Bedrock::Result<uchar> getByte();

    MCAPI ::Bedrock::Result<double> getDouble();

    MCAPI ::Bedrock::Result<float> getFloat();

    MCAPI ::Bedrock::Result<int> getSignedBigEndianInt();

    MCAPI ::Bedrock::Result<int> getSignedInt();

    MCAPI ::Bedrock::Result<int64> getSignedInt64();

    MCAPI ::Bedrock::Result<short> getSignedShort();

    MCAPI ::Bedrock::Result<::std::string> getString(uint64 maxLength);

    MCAPI ::Bedrock::Result<void> getString(::std::string& outStringStream, uint64 maxLength);

    MCAPI ::Bedrock::Result<uchar> getUnsignedChar();

    MCAPI ::Bedrock::Result<uint> getUnsignedInt();

    MCAPI ::Bedrock::Result<uint64> getUnsignedInt64();

    MCAPI ::Bedrock::Result<ushort> getUnsignedShort();

    MCAPI ::Bedrock::Result<uint> getUnsignedVarInt();

    MCAPI ::Bedrock::Result<uint64> getUnsignedVarInt64();

    MCAPI ::Bedrock::Result<int> getVarInt();

    MCAPI ::Bedrock::Result<int64> getVarInt64();

    MCFOLD bool hasOverflowed() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string&& buffer);

    MCAPI void* $ctor(::std::string_view buffer, bool copyBuffer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $read(void* target, uint64 num);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
