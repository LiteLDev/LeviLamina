/**
 * @file  MobRemovePassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobRemovePassengerSystem.
 *
 */
class MobRemovePassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBREMOVEPASSENGERSYSTEM
public:
    class MobRemovePassengerSystem& operator=(class MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem(class MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@MobRemovePassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?removePassengerSystem\@MobRemovePassengerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@AEAUMobJumpComponent\@\@AEAUSynchedActorDataComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void removePassengerSystem(class StrictEntityContext const &, struct StateVectorComponent const &, class Optional<struct VehicleComponent const>, struct MobJumpComponent &, struct SynchedActorDataComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>> &);

};