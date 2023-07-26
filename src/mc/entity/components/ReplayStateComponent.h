#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateComponent {

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&) = delete;
    ReplayStateComponent(ReplayStateComponent const&)            = delete;
    ReplayStateComponent()                                       = delete;

public:
    /**
     * @symbol ??0ReplayStateComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ReplayStateComponent(class ReplayStateComponent&&); // NOLINT
    /**
     * @symbol
     * ??0ReplayStateComponent\@\@QEAA\@V?$unique_ptr\@VActorHistory\@\@U?$default_delete\@VActorHistory\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UIReplayStatePolicy\@\@U?$default_delete\@UIReplayStatePolicy\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI
        ReplayStateComponent(std::unique_ptr<class ActorHistory>, std::unique_ptr<struct IReplayStatePolicy>); // NOLINT
    /**
     * @symbol ?getCurrentTick\@ReplayStateComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentTick() const; // NOLINT
    /**
     * @symbol ??4ReplayStateComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&); // NOLINT
    /**
     * @symbol
     * ?shouldSendCorrectionToClient\@ReplayStateComponent\@\@QEBA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(struct IActorMovementProxy&, class PlayerAuthInputPacket const&) const; // NOLINT
    /**
     * @symbol ?tick\@ReplayStateComponent\@\@QEAAXPEAUIActorMovementProxy\@\@_KPEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tick(struct IActorMovementProxy*, unsigned __int64, class EntityRegistry*); // NOLINT
    /**
     * @symbol ??1ReplayStateComponent\@\@QEAA\@XZ
     */
    MCAPI ~ReplayStateComponent(); // NOLINT
};
