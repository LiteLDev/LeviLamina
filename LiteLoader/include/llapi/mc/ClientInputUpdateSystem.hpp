/**
 * @file  ClientInputUpdateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientInputUpdateSystem.
 *
 */
class ClientInputUpdateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINPUTUPDATESYSTEM
public:
    class ClientInputUpdateSystem& operator=(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?createAntiCheatApplySystem\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAntiCheatApplySystem();
    /**
     * @symbol ?createAntiCheatExtractSystem\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAntiCheatExtractSystem();
    /**
     * @symbol ?extractRawHIDInput\@ClientInputUpdateSystem\@\@SAXAEBVLayeredAbilities\@\@AEBVSynchedActorData\@\@_NAEAURawMoveInputComponent\@\@AEBVMoveInputHandler\@\@PEBUSneakingComponent\@\@\@Z
     */
    MCAPI static void extractRawHIDInput(class LayeredAbilities const &, class SynchedActorData const &, bool, struct RawMoveInputComponent &, class MoveInputHandler const &, struct SneakingComponent const *);

};
