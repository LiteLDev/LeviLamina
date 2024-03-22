#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MotionPredictionHintsPacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId; // this+0x30
    Vec3           mMotion;    // this+0x38
    bool           mOnGround;  // this+0x44

    // prevent constructor by default
    MotionPredictionHintsPacket& operator=(MotionPredictionHintsPacket const&);
    MotionPredictionHintsPacket(MotionPredictionHintsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MotionPredictionHintsPacket@@UEAA@XZ
    virtual ~MotionPredictionHintsPacket();

    // vIndex: 1, symbol: ?getId@MotionPredictionHintsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MotionPredictionHintsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MotionPredictionHintsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MotionPredictionHintsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MotionPredictionHintsPacket@@QEAA@XZ
    MCAPI MotionPredictionHintsPacket();

    // symbol: ??0MotionPredictionHintsPacket@@QEAA@AEBVActor@@@Z
    MCAPI explicit MotionPredictionHintsPacket(class Actor const& entity);

    // NOLINTEND
};
