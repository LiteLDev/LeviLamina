#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BinaryStream;
class ReadOnlyBinaryStream;
struct ActorDefinitionIdentifier;
// clang-format on

class AddActorPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk14e52d;
    ::ll::UntypedStorage<4, 12>  mUnk6704db;
    ::ll::UntypedStorage<4, 12>  mUnk6d2c35;
    ::ll::UntypedStorage<4, 8>   mUnk89ef78;
    ::ll::UntypedStorage<4, 4>   mUnk8426bc;
    ::ll::UntypedStorage<4, 4>   mUnk3f9153;
    ::ll::UntypedStorage<8, 8>   mUnk878b32;
    ::ll::UntypedStorage<8, 8>   mUnk28240b;
    ::ll::UntypedStorage<8, 24>  mUnk76c063;
    ::ll::UntypedStorage<8, 176> mUnk1cf58a;
    ::ll::UntypedStorage<8, 24>  mUnk52f751;
    ::ll::UntypedStorage<8, 48>  mUnkf1b7a7;
    ::ll::UntypedStorage<8, 24>  mUnk4f9804;
    ::ll::UntypedStorage<8, 8>   mUnk4eb6ae;
    ::ll::UntypedStorage<8, 8>   mUnk4d0e7a;
    // NOLINTEND

public:
    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const&);
    AddActorPacket(AddActorPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddActorPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddActorPacket();

    MCAPI explicit AddActorPacket(::Actor& e);

    MCAPI_C ::ActorDefinitionIdentifier getType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Actor& e);
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
