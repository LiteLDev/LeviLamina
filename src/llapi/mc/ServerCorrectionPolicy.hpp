/**
 * @file  ServerCorrectionPolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ClientReplayStatePolicy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCorrectionPolicy.
 *
 */
class ServerCorrectionPolicy : public ClientReplayStatePolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCORRECTIONPOLICY
public:
    class ServerCorrectionPolicy& operator=(class ServerCorrectionPolicy const &) = delete;
    ServerCorrectionPolicy(class ServerCorrectionPolicy const &) = delete;
    ServerCorrectionPolicy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerCorrectionPolicy();
    /**
     * @vftbl  3
     * @symbol  ?shouldCorrectMovement\@ServerCorrectionPolicy\@\@UEAA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@_K\@Z
     */
    virtual struct MovementCorrection shouldCorrectMovement(struct IActorMovementProxy &, class PlayerAuthInputPacket const &, unsigned __int64);

};