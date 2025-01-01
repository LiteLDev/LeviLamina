#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPos;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class ContainerOpenPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>           mContainerId;
    ::ll::TypedStorage<1, 1, ::ContainerType>         mType;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>         mEntityUniqueID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ContainerOpenPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerOpenPacket();

    MCAPI ContainerOpenPacket(
        ::ContainerID          containerId,
        ::ContainerType        type,
        ::BlockPos const&      pos,
        ::ActorUniqueID const& id
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::ContainerID containerId, ::ContainerType type, ::BlockPos const& pos, ::ActorUniqueID const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
