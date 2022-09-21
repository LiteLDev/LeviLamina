/**
 * @file  MC/ReplayStateComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1925637914
     * @symbol ??0ReplayStateComponent@@QEAA@V?$unique_ptr@VActorHistory@@U?$default_delete@VActorHistory@@@std@@@std@@V?$unique_ptr@UIReplayStatePolicy@@U?$default_delete@UIReplayStatePolicy@@@std@@@2@@Z
     */
    MCAPI ReplayStateComponent(std::unique_ptr<class ActorHistory>, std::unique_ptr<struct IReplayStatePolicy>);
    /**
     * @hash   1862123551
     * @symbol ??0ReplayStateComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ReplayStateComponent(class ReplayStateComponent &&);
    /**
     * @hash   7545059
     * @symbol ?getCurrentTick@ReplayStateComponent@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentTick() const;
    /**
     * @hash   -110966878
     * @symbol ??4ReplayStateComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ReplayStateComponent & operator=(class ReplayStateComponent &&);
    /**
     * @hash   -1115374582
     * @symbol ?shouldSendCorrectionToClient@ReplayStateComponent@@QEBA?AUMovementCorrection@@AEAUIActorMovementProxy@@AEBVPlayerAuthInputPacket@@@Z
     */
    MCAPI struct MovementCorrection shouldSendCorrectionToClient(struct IActorMovementProxy &, class PlayerAuthInputPacket const &) const;
    /**
     * @hash   1109757653
     * @symbol ?tick@ReplayStateComponent@@QEAAXPEAUIActorMovementProxy@@_K@Z
     */
    MCAPI void tick(struct IActorMovementProxy *, unsigned __int64);
    /**
     * @hash   1361196717
     * @symbol ??1ReplayStateComponent@@QEAA@XZ
     */
    MCAPI ~ReplayStateComponent();

};