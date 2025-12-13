#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class AddPlayerPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mUnkb66b87;
    ::ll::UntypedStorage<8, 32>   mUnk6ba9f2;
    ::ll::UntypedStorage<8, 16>   mUnk240ec2;
    ::ll::UntypedStorage<8, 8>    mUnkbf1334;
    ::ll::UntypedStorage<8, 8>    mUnk87ea3a;
    ::ll::UntypedStorage<8, 32>   mUnk64343b;
    ::ll::UntypedStorage<4, 12>   mUnkf9c26b;
    ::ll::UntypedStorage<4, 12>   mUnke450e6;
    ::ll::UntypedStorage<4, 8>    mUnk5e459d;
    ::ll::UntypedStorage<4, 4>    mUnkfc3bc0;
    ::ll::UntypedStorage<8, 24>   mUnk67daf3;
    ::ll::UntypedStorage<4, 1444> mUnk8614f6;
    ::ll::UntypedStorage<8, 32>   mUnkc32c94;
    ::ll::UntypedStorage<4, 4>    mUnkec0760;
    ::ll::UntypedStorage<4, 4>    mUnk3f0fb7;
    ::ll::UntypedStorage<8, 96>   mUnkf0ea15;
    ::ll::UntypedStorage<8, 8>    mUnke2d421;
    ::ll::UntypedStorage<8, 48>   mUnk11a85c;
    // NOLINTEND

public:
    // prevent constructor by default
    AddPlayerPacket& operator=(AddPlayerPacket const&);
    AddPlayerPacket(AddPlayerPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddPlayerPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddPlayerPacket();

    MCAPI explicit AddPlayerPacket(::Player& p);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Player& p);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
