/**
 * @file  PassengerNeedsPostPositioningSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PassengerNeedsPostPositioningSystem.
 *
 */
class PassengerNeedsPostPositioningSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERNEEDSPOSTPOSITIONINGSYSTEM
public:
    class PassengerNeedsPostPositioningSystem& operator=(class PassengerNeedsPostPositioningSystem const &) = delete;
    PassengerNeedsPostPositioningSystem(class PassengerNeedsPostPositioningSystem const &) = delete;
    PassengerNeedsPostPositioningSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_addPositionPassengerRequestComponent\@PassengerNeedsPostPositioningSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBUPendingRemovePassengersComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UServerPlayerComponentFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBoatFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@3V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _addPositionPassengerRequestComponent(class StrictEntityContext &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct PendingRemovePassengersComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ServerPlayerComponentFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>>, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct VehicleComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol  ?createSystem\@PassengerNeedsPostPositioningSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};