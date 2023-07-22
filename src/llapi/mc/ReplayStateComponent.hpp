/**
 * @file  ReplayStateComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReplayStateComponent.
 *
 */
class ReplayStateComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATECOMPONENT
public:
    class ReplayStateComponent& operator=(class ReplayStateComponent const &) = delete;
    ReplayStateComponent(class ReplayStateComponent const &) = delete;
    ReplayStateComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0ReplayStateComponent\@\@QEAA\@V?$unique_ptr\@VActorHistory\@\@U?$default_delete\@VActorHistory\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UIReplayStatePolicy\@\@U?$default_delete\@UIReplayStatePolicy\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI ReplayStateComponent(std::unique_ptr<class ActorHistory>, std::unique_ptr<struct IReplayStatePolicy>);
    /**
     * @symbol  ??0ReplayStateComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ReplayStateComponent(class ReplayStateComponent &&);
    /**
     * @symbol  ?getCurrentTick\@ReplayStateComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentTick() const;
    /**
     * @symbol  ??4ReplayStateComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ReplayStateComponent & operator=(class ReplayStateComponent &&);
    /**
     * @symbol  ?shouldSendCorrectionToClient\@ReplayStateComponent\@\@QEBA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI struct MovementCorrection shouldSendCorrectionToClient(struct IActorMovementProxy &, class PlayerAuthInputPacket const &) const;
    /**
     * @symbol  ?tick\@ReplayStateComponent\@\@QEAAXPEAUIActorMovementProxy\@\@_KPEAVEntityRegistry\@\@\@Z
     */
    MCAPI void tick(struct IActorMovementProxy *, unsigned __int64, class EntityRegistry *);
    /**
     * @symbol  ??1ReplayStateComponent\@\@QEAA\@XZ
     */
    MCAPI ~ReplayStateComponent();

};