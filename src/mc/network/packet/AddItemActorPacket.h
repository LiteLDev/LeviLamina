#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class AddItemActorPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk12ebb9;
    ::ll::UntypedStorage<8, 8>  mUnk3251ed;
    ::ll::UntypedStorage<8, 8>  mUnkecb905;
    ::ll::UntypedStorage<8, 8>  mUnk737e6e;
    ::ll::UntypedStorage<8, 96> mUnk25c3ad;
    ::ll::UntypedStorage<4, 12> mUnk9148b5;
    ::ll::UntypedStorage<4, 12> mUnk3b7883;
    ::ll::UntypedStorage<1, 1>  mUnk100849;
    // NOLINTEND

public:
    // prevent constructor by default
    AddItemActorPacket& operator=(AddItemActorPacket const&);
    AddItemActorPacket(AddItemActorPacket const&);
    AddItemActorPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddItemActorPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
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
