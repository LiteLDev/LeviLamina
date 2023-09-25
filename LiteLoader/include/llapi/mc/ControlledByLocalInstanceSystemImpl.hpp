/**
 * @file  ControlledByLocalInstanceSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ControlledByLocalInstanceSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_calculateBoatControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@P6AX0AEBV?$optional\@VStrictEntityContext\@\@\@std\@\@2V5\@\@Z\@Z
     */
    MCAPI void _calculateBoatControlledByLocalInstanceSystem(class StrictEntityContext const &, struct VehicleComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>, void (__cdecl *)(class StrictEntityContext const &, class std::optional<class StrictEntityContext> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>));
    /**
     * @symbol ?_calculateHorseControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@AEBUSynchedActorDataComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@P6AX0AEBV?$optional\@VStrictEntityContext\@\@\@std\@\@3V6\@\@Z\@Z
     */
    MCAPI void _calculateHorseControlledByLocalInstanceSystem(class StrictEntityContext const &, struct VehicleComponent const &, struct SynchedActorDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>, void (__cdecl *)(class StrictEntityContext const &, class std::optional<class StrictEntityContext> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>));
    /**
     * @symbol ?setControlledByLocalInstanceClient\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void setControlledByLocalInstanceClient(class StrictEntityContext const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>);
    /**
     * @symbol ?setControlledByLocalInstanceServer\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void setControlledByLocalInstanceServer(class StrictEntityContext const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>);
    /**
     * @symbol ?setVehicleControlledByLocalInstanceClient\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$optional\@VStrictEntityContext\@\@\@std\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void setVehicleControlledByLocalInstanceClient(class StrictEntityContext const &, class std::optional<class StrictEntityContext> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>);
    /**
     * @symbol ?setVehicleControlledByLocalInstanceServer\@ControlledByLocalInstanceSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$optional\@VStrictEntityContext\@\@\@std\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void setVehicleControlledByLocalInstanceServer(class StrictEntityContext const &, class std::optional<class StrictEntityContext> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ControlledByLocalInstanceFlag>>);

};