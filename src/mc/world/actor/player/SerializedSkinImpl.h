#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ConnectionRequest;
class ReadOnlyBinaryStream;
class SubClientConnectionRequest;
// clang-format on

class SerializedSkinImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1f8427;
    ::ll::UntypedStorage<8, 32> mUnka06b74;
    ::ll::UntypedStorage<8, 32> mUnka00f31;
    ::ll::UntypedStorage<8, 32> mUnkaba1bc;
    ::ll::UntypedStorage<8, 32> mUnka669cf;
    ::ll::UntypedStorage<8, 48> mUnkcfb31a;
    ::ll::UntypedStorage<8, 48> mUnk500f41;
    ::ll::UntypedStorage<8, 24> mUnkc3c4c7;
    ::ll::UntypedStorage<8, 16> mUnka3b3ee;
    ::ll::UntypedStorage<8, 32> mUnkdcf7c7;
    ::ll::UntypedStorage<8, 16> mUnk11407a;
    ::ll::UntypedStorage<8, 32> mUnk404dc6;
    ::ll::UntypedStorage<8, 32> mUnk38db49;
    ::ll::UntypedStorage<8, 24> mUnk7fae9e;
    ::ll::UntypedStorage<8, 8>  mUnkc17be4;
    ::ll::UntypedStorage<8, 64> mUnkaf1241;
    ::ll::UntypedStorage<4, 16> mUnkbe9295;
    ::ll::UntypedStorage<1, 1>  mUnk5166fb;
    ::ll::UntypedStorage<1, 1>  mUnk58e93d;
    ::ll::UntypedStorage<1, 1>  mUnk3a402e;
    ::ll::UntypedStorage<1, 1>  mUnka69637;
    ::ll::UntypedStorage<1, 1>  mUnk8948ee;
    ::ll::UntypedStorage<1, 1>  mUnka34f2f;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedSkinImpl& operator=(SerializedSkinImpl const&);
    SerializedSkinImpl(SerializedSkinImpl const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializedSkinImpl();

    MCNAPI explicit SerializedSkinImpl(::ConnectionRequest const& request);

    MCNAPI explicit SerializedSkinImpl(::SubClientConnectionRequest const& request);

    MCNAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCNAPI void setArmSizeFromString(::std::string const& armSizeStr);

    MCNAPI void updateGeometryName();

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~SerializedSkinImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ConnectionRequest const& request);

    MCNAPI void* $ctor(::SubClientConnectionRequest const& request);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
