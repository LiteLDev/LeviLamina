#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

class ContainerOpenPacket : public ::Packet {
public:
    ContainerID          mContainerId;    // this+0x30
    ContainerType        mType;           // this+0x31
    NetworkBlockPosition mPos;            // this+0x34
    ActorUniqueID        mEntityUniqueID; // this+0x40

    // prevent constructor by default
    ContainerOpenPacket& operator=(ContainerOpenPacket const&);
    ContainerOpenPacket(ContainerOpenPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerOpenPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ContainerOpenPacket();

    MCAPI ContainerOpenPacket(
        ::ContainerID               containerId,
        ::ContainerType             type,
        class BlockPos const&       pos,
        struct ActorUniqueID const& id
    );

    // NOLINTEND
};
