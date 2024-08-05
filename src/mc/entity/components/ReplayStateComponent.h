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
    MCAPI ReplayStateComponent(class ReplayStateComponent&& rhs);

    MCAPI ReplayStateComponent(
        std::unique_ptr<class ActorHistory>        history,
        std::unique_ptr<struct IReplayStatePolicy> policy
    );

    MCAPI void addInputToFrontOfCurrentFrame(std::shared_ptr<struct IReplayableActorInput>) const;

    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(class Actor&, std::shared_ptr<struct IMovementCorrection>, uint64);

    MCAPI void clearHistory();

    MCAPI void enqueueInputSimulation(std::unique_ptr<struct IReplayableActorInput>);

    MCAPI uint64 getCurrentTick() const;

    MCAPI void notifyOfExternalCorrection() const;

    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);

    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(class EntityContext&, class PlayerAuthInputPacket const&) const;

    MCAPI void tick(class Actor* actor, uint64 currentTick, class EntityRegistry* registry);

    MCAPI ~ReplayStateComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::AdvanceFrameResult
    _applyCorrection(std::shared_ptr<struct IMovementCorrection>, class Actor&, uint64, bool) const;

    // NOLINTEND
};
