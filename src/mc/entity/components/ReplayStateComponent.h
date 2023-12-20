#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateComponent {
public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ReplayStateComponent@@QEAA@$$QEAV0@@Z
    MCAPI ReplayStateComponent(class ReplayStateComponent&&);

    // symbol:
    // ??0ReplayStateComponent@@QEAA@V?$unique_ptr@VActorHistory@@U?$default_delete@VActorHistory@@@std@@@std@@V?$unique_ptr@UIReplayStatePolicy@@U?$default_delete@UIReplayStatePolicy@@@std@@@2@@Z
    MCAPI ReplayStateComponent(std::unique_ptr<class ActorHistory>, std::unique_ptr<struct IReplayStatePolicy>);

    // symbol: ?addInputToCurrentFrame@ReplayStateComponent@@QEBAXV?$shared_ptr@UIReplayableActorInput@@@std@@@Z
    MCAPI void addInputToCurrentFrame(std::shared_ptr<struct IReplayableActorInput>) const;

    // symbol: ?addInputToFrontOfCurrentFrame@ReplayStateComponent@@QEBAXV?$shared_ptr@UIReplayableActorInput@@@std@@@Z
    MCAPI void addInputToFrontOfCurrentFrame(std::shared_ptr<struct IReplayableActorInput>) const;

    // symbol: ?getCurrentTick@ReplayStateComponent@@QEBA_KXZ
    MCAPI uint64 getCurrentTick() const;

    // symbol: ??4ReplayStateComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);

    // symbol:
    // ?shouldSendCorrectionToClient@ReplayStateComponent@@QEBA?AUMovementCorrection@@AEAVEntityContext@@AEBVIConstBlockSource@@AEBVPlayerAuthInputPacket@@@Z
    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(class EntityContext&, class IConstBlockSource const&, class PlayerAuthInputPacket const&)
        const;

    // symbol: ?tick@ReplayStateComponent@@QEAAXPEAVActor@@_KPEAVEntityRegistry@@@Z
    MCAPI void tick(class Actor*, uint64, class EntityRegistry*);

    // symbol: ??1ReplayStateComponent@@QEAA@XZ
    MCAPI ~ReplayStateComponent();

    // NOLINTEND
};
