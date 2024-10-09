#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/input/AdvanceFrameResult.h"

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

    MCAPI void addInputToFrontOfCurrentFrame(std::shared_ptr<struct IReplayableActorInput> input) const;

    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(class Actor& actor, std::shared_ptr<struct IMovementCorrection> correction, uint64 frame);

    MCAPI void clearHistory();

    MCAPI void enqueueInputSimulation(std::unique_ptr<struct IReplayableActorInput> input);

    MCAPI uint64 getCurrentTick() const;

    MCAPI void notifyOfExternalCorrection() const;

    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);

    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(class EntityContext& entity, class PlayerAuthInputPacket const& packet) const;

    MCAPI void tick(class Actor* actor, uint64 currentTick, class EntityRegistry* registry);

    MCAPI ~ReplayStateComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::AdvanceFrameResult _applyCorrection(
        std::shared_ptr<struct IMovementCorrection> correction,
        class Actor&                                actor,
        uint64                                      destinationTimestamp,
        bool                                        addInput
    ) const;

    // NOLINTEND
};
