#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CameraPacket : public ::Packet {
public:
    ActorUniqueID mCameraId;       // this+0x30
    ActorUniqueID mTargetPlayerId; // this+0x38

    // prevent constructor by default
    CameraPacket& operator=(CameraPacket const&);
    CameraPacket(CameraPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CameraPacket();

    MCAPI CameraPacket(struct ActorUniqueID cameraId, struct ActorUniqueID targetPlayerId);

    // NOLINTEND
};
