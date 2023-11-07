#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"
#include "mc/entity/components/ClientReplayStatePolicy.h"

class ServerCorrectionPolicy : public ::ClientReplayStatePolicy {
public:
    // prevent constructor by default
    ServerCorrectionPolicy& operator=(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerCorrectionPolicy@@UEAA@XZ
    virtual ~ServerCorrectionPolicy() = default;

    // vIndex: 3, symbol:
    // ?shouldCorrectMovement@ServerCorrectionPolicy@@UEAA?AUMovementCorrection@@AEAVEntityContext@@AEBVIConstBlockSource@@AEBVPlayerAuthInputPacket@@_K@Z
    virtual struct MovementCorrection shouldCorrectMovement(
        class EntityContext&,
        class IConstBlockSource const&,
        class PlayerAuthInputPacket const&,
        uint64
    );

    // NOLINTEND
};
