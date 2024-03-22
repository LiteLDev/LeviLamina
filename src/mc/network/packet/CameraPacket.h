#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CameraPacket : public ::Packet {
public:
    ActorUniqueID mCameraId;       // this+0x30
    ActorUniqueID mTargetPlayerId; // this+0x38

    // prevent constructor by default
    CameraPacket& operator=(CameraPacket const&);
    CameraPacket(CameraPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CameraPacket@@UEAA@XZ
    virtual ~CameraPacket();

    // vIndex: 1, symbol: ?getId@CameraPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@CameraPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CameraPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@CameraPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CameraPacket@@QEAA@XZ
    MCAPI CameraPacket();

    // symbol: ??0CameraPacket@@QEAA@UActorUniqueID@@0@Z
    MCAPI CameraPacket(struct ActorUniqueID cameraId, struct ActorUniqueID targetPlayerId);

    // NOLINTEND
};
