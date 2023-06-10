/**
 * @file  ServerMoveInputHandlerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerMoveInputHandlerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLERSYSTEM
public:
    class ServerMoveInputHandlerSystem& operator=(class ServerMoveInputHandlerSystem const &) = delete;
    ServerMoveInputHandlerSystem(class ServerMoveInputHandlerSystem const &) = delete;
    ServerMoveInputHandlerSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@ServerMoveInputHandlerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?digestPlayerInputPacket\@ServerMoveInputHandlerSystem\@\@SAXAEAUMoveInputComponent\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI static void digestPlayerInputPacket(struct MoveInputComponent &, class PlayerAuthInputPacket const &);

};
