#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"
#include "mc/common/wrapper/ReplayCorrectionResult.h"

class ReplayStateComponent {
public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ReplayStateComponent@@QEAA@$$QEAV0@@Z
    MCAPI ReplayStateComponent(class ReplayStateComponent&& rhs);

    // symbol:
    // ??0ReplayStateComponent@@QEAA@V?$unique_ptr@VActorHistory@@U?$default_delete@VActorHistory@@@std@@@std@@V?$unique_ptr@UIReplayStatePolicy@@U?$default_delete@UIReplayStatePolicy@@@std@@@2@@Z
    MCAPI ReplayStateComponent(
        std::unique_ptr<class ActorHistory>        history,
        std::unique_ptr<struct IReplayStatePolicy> policy
    );

    // symbol: ?addInputToFrontOfCurrentFrame@ReplayStateComponent@@QEBAXV?$shared_ptr@UIReplayableActorInput@@@std@@@Z
    MCAPI void addInputToFrontOfCurrentFrame(std::shared_ptr<struct IReplayableActorInput>) const;

    // symbol:
    // ?applyFrameCorrection@ReplayStateComponent@@QEAA?AW4ReplayCorrectionResult@@AEAVActor@@V?$shared_ptr@UIMovementCorrection@@@std@@_K@Z
    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(class Actor&, std::shared_ptr<struct IMovementCorrection>, uint64);

    // symbol: ?clearHistory@ReplayStateComponent@@QEAAXXZ
    MCAPI void clearHistory();

    // symbol:
    // ?enqueueInputSimulation@ReplayStateComponent@@QEAAXV?$unique_ptr@UIReplayableActorInput@@U?$default_delete@UIReplayableActorInput@@@std@@@std@@@Z
    MCAPI void enqueueInputSimulation(std::unique_ptr<struct IReplayableActorInput>);

    // symbol: ?getCurrentTick@ReplayStateComponent@@QEBA_KXZ
    MCAPI uint64 getCurrentTick() const;

    // symbol: ??4ReplayStateComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);

    // symbol:
    // ?shouldSendCorrectionToClient@ReplayStateComponent@@QEBA?AUMovementCorrection@@AEAVEntityContext@@AEBVPlayerAuthInputPacket@@@Z
    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(class EntityContext&, class PlayerAuthInputPacket const&) const;

    // symbol: ?tick@ReplayStateComponent@@QEAAXPEAVActor@@_KPEAVEntityRegistry@@@Z
    MCAPI void tick(class Actor* actor, uint64 currentTick, class EntityRegistry* registry);

    // symbol: ??1ReplayStateComponent@@QEAA@XZ
    MCAPI ~ReplayStateComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_applyCorrection@ReplayStateComponent@@AEBA?AW4AdvanceFrameResult@@V?$shared_ptr@UIMovementCorrection@@@std@@AEAVActor@@_K_N@Z
    MCAPI ::AdvanceFrameResult
    _applyCorrection(std::shared_ptr<struct IMovementCorrection>, class Actor&, uint64, bool) const;

    // NOLINTEND
};
