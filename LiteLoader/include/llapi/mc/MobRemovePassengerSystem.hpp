/**
 * @file  MobRemovePassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2139328616
     * @symbol ?createSystem@MobRemovePassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @hash   -1740208975
     * @symbol ?removePassengerSystem@MobRemovePassengerSystem@@SAXAEAVStrictEntityContext@@AEBUStateVectorComponent@@V?$Optional@$$CBUVehicleComponent@@@@AEAUMobJumpComponent@@AEAUSynchedActorDataComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UParrotFlag@@@@@@$$CBUPassengerComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UExitFromPassengerFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
     */
    MCAPI static void removePassengerSystem(class StrictEntityContext &, struct StateVectorComponent const &, class Optional<struct VehicleComponent const>, struct MobJumpComponent &, struct SynchedActorDataComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>> &);

};