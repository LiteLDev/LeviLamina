#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Include;
// clang-format on

namespace GetControllingPlayerUtility {
// NOLINTBEGIN
/**
 * @symbol
 * ?hasControllingPassenger\@GetControllingPlayerUtility\@\@YA_NAEBUSynchedActorDataComponent\@\@AEBUVehicleComponent\@\@\@Z
 */
MCAPI bool hasControllingPassenger(struct SynchedActorDataComponent const&, struct VehicleComponent const&);
/**
 * @symbol
 * ?isPassengerControllingVehicle\@GetControllingPlayerUtility\@\@YA_NAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@AEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool
isPassengerControllingVehicle(class StrictEntityContext const&, struct VehicleComponent const&, struct SynchedActorDataComponent const&);
/**
 * @symbol ?isWASDControlled\@GetControllingPlayerUtility\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool isWASDControlled(struct SynchedActorDataComponent const&);
/**
 * @symbol
 * ?tryGetControllingPlayerContext\@GetControllingPlayerUtility\@\@YA?AV?$optional\@VStrictEntityContext\@\@\@std\@\@VStrictEntityContext\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UServerPlayerComponentFlag\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBoatFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@\@Z
 */
MCAPI std::optional<class StrictEntityContext> tryGetControllingPlayerContext(class StrictEntityContext, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ServerPlayerComponentFlag> const>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>>, struct VehicleComponent const>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct VehicleComponent const, struct SynchedActorDataComponent const>*);
// NOLINTEND

}; // namespace GetControllingPlayerUtility
