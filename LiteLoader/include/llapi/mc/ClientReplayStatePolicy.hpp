/**
 * @file  MC/ClientReplayStatePolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientReplayStatePolicy.
 *
 */
class ClientReplayStatePolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTREPLAYSTATEPOLICY
public:
    class ClientReplayStatePolicy& operator=(class ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy(class ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientReplayStatePolicy();
    /**
     * @hash   997315037
     * @vftbl  1
     * @symbol ?isReplayNeeded@ClientReplayStatePolicy@@UEBA_NW4AdvanceFrameResult@@@Z
     */
    virtual bool isReplayNeeded(enum AdvanceFrameResult) const;
    /**
     * @hash   914835045
     * @vftbl  2
     * @symbol ?canRewindToFrame@ClientReplayStatePolicy@@UEAA_NAEAUIActorMovementProxy@@_K1@Z
     */
    virtual bool canRewindToFrame(struct IActorMovementProxy &, unsigned __int64, unsigned __int64);
    /**
     * @hash   -1238219717
     * @vftbl  3
     * @symbol ?shouldCorrectMovement@ClientReplayStatePolicy@@UEAA?AUMovementCorrection@@AEAUIActorMovementProxy@@AEBVPlayerAuthInputPacket@@_K@Z
     */
    virtual struct MovementCorrection shouldCorrectMovement(struct IActorMovementProxy &, class PlayerAuthInputPacket const &, unsigned __int64);
    /**
     * @hash   1949583782
     * @vftbl  4
     * @symbol ?flagUnsupportedMovement@ClientReplayStatePolicy@@UEAAX_K@Z
     */
    virtual void flagUnsupportedMovement(unsigned __int64);
    /**
     * @hash   1829532967
     * @vftbl  5
     * @symbol ?storeCurrentFrameSupported@ClientReplayStatePolicy@@UEAAX_KAEAUIActorMovementProxy@@@Z
     */
    virtual void storeCurrentFrameSupported(unsigned __int64, struct IActorMovementProxy &);
    /**
     * @hash   1625182629
     * @symbol ?_checkSupportedFrame@ClientReplayStatePolicy@@QEBA_NAEAUIActorMovementProxy@@@Z
     */
    MCAPI bool _checkSupportedFrame(struct IActorMovementProxy &) const;
    /**
     * @hash   -861809913
     * @symbol ?_isSupportedMovementMode@ClientReplayStatePolicy@@QEBA_NAEBUIMobMovementProxy@@@Z
     */
    MCAPI bool _isSupportedMovementMode(struct IMobMovementProxy const &) const;

};