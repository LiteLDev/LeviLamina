#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

class ContainerSetDataPacket : public ::Packet {
public:
    int         mId;          // this+0x30
    int         mValue;       // this+0x34
    ContainerID mContainerId; // this+0x38

    // prevent constructor by default
    ContainerSetDataPacket& operator=(ContainerSetDataPacket const&);
    ContainerSetDataPacket(ContainerSetDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerSetDataPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ContainerSetDataPacket();

    MCAPI ContainerSetDataPacket(::ContainerID containerId, int id, int value);

    // NOLINTEND
};
