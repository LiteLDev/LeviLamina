#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateComponent {

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&) = delete;
    ReplayStateComponent(ReplayStateComponent const&)            = delete;
    ReplayStateComponent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ReplayStateComponent\@\@QEAA\@V?$unique_ptr\@VActorHistory\@\@U?$default_delete\@VActorHistory\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UIReplayStatePolicy\@\@U?$default_delete\@UIReplayStatePolicy\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI ReplayStateComponent(std::unique_ptr<class ActorHistory>, std::unique_ptr<struct IReplayStatePolicy>);
    /**
     * @symbol ??0ReplayStateComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ReplayStateComponent(class ReplayStateComponent&&);
    /**
     * @symbol ?getCurrentTick\@ReplayStateComponent\@\@QEBA_KXZ
     */
    MCAPI uint64_t getCurrentTick() const;
    /**
     * @symbol ??4ReplayStateComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);
    /**
     * @symbol
     * ?shouldSendCorrectionToClient\@ReplayStateComponent\@\@QEBA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI struct MovementCorrection
    shouldSendCorrectionToClient(struct IActorMovementProxy&, class PlayerAuthInputPacket const&) const;
    /**
     * @symbol ?tick\@ReplayStateComponent\@\@QEAAXPEAUIActorMovementProxy\@\@_KPEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tick(struct IActorMovementProxy*, uint64_t, class EntityRegistry*);
    /**
     * @symbol ??1ReplayStateComponent\@\@QEAA\@XZ
     */
    MCAPI ~ReplayStateComponent();
    // NOLINTEND
};
