#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

class ContainerClosePacket : public ::Packet {
public:
    ContainerID mContainerId;          // this+0x30
    bool        mServerInitiatedClose; // this+0x31

    // prevent constructor by default
    ContainerClosePacket& operator=(ContainerClosePacket const&);
    ContainerClosePacket(ContainerClosePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerClosePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ContainerClosePacket();

    MCAPI ContainerClosePacket(::ContainerID containerId, ::ContainerType containerType, bool serverInitiated);

    // NOLINTEND
};
