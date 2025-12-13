#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec3;
// clang-format on

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types define
    enum class Action : uchar {
        Invalid        = 0,
        StopRiding     = 3,
        InteractUpdate = 4,
        NpcOpen        = 5,
        OpenInventory  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkefc1ef;
    ::ll::UntypedStorage<8, 8>  mUnkd57cde;
    ::ll::UntypedStorage<4, 12> mUnk4455a4;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractPacket& operator=(InteractPacket const&);
    InteractPacket(InteractPacket const&);
    InteractPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~InteractPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InteractPacket(::InteractPacket::Action action, ::ActorRuntimeID targetId, ::Vec3 const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::InteractPacket::Action action, ::ActorRuntimeID targetId, ::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

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
