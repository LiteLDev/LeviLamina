/**
 * @file  SideBySide.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SideBySideTrigger.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SideBySide.
 *
 */
namespace SideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?GLOBAL_MODE\@SideBySide\@\@3W4GlobalMode\@SideBySideTrigger\@\@A
     */
    MCAPI extern enum class SideBySideTrigger::GlobalMode GLOBAL_MODE;
    /**
     * @symbol  ?_collectVehiclesAndPassengersNotInView\@SideBySide\@\@YAXAEBVStrictEntityContext\@\@AEBUSideBySideValidationExceptionComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UUsesSideBySideComparisonComponent\@\@USideBySideExceptionVisitedFlagComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@AEAV?$vector\@U?$pair\@VStrictEntityContext\@\@USideBySideValidationExceptionComponent\@\@\@std\@\@V?$allocator\@U?$pair\@VStrictEntityContext\@\@USideBySideValidationExceptionComponent\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _collectVehiclesAndPassengersNotInView(class StrictEntityContext const &, struct SideBySideValidationExceptionComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent, struct SideBySideExceptionVisitedFlagComponent>> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, std::vector<struct std::pair<class StrictEntityContext, struct SideBySideValidationExceptionComponent>> &);
    /**
     * @symbol  ?_tryAddFailureComponent\@SideBySide\@\@YAXAEBVStrictEntityContext\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USideBySideValidationFailureComponent\@\@\@\@AEBUSideBySideValidationFailure\@\@\@Z
     */
    MCAPI void _tryAddFailureComponent(class StrictEntityContext const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SideBySideValidationFailureComponent> &, struct SideBySideValidationFailure const &);
    /**
     * @symbol  ?combineComparison\@SideBySide\@\@YA?AUSideBySidePartialComparison\@\@AEBU2\@0\@Z
     */
    MCAPI struct SideBySidePartialComparison combineComparison(struct SideBySidePartialComparison const &, struct SideBySidePartialComparison const &);
    /**
     * @symbol  ?tickExceptions\@SideBySide\@\@YAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UUsesSideBySideComparisonComponent\@\@\@\@$$CBUSideBySideValidationExceptionComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UUsesSideBySideComparisonComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UUsesSideBySideComparisonComponent\@\@USideBySideExceptionVisitedFlagComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USideBySideCopyComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USideBySideValidationExceptionComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSideBySideCopyComponent\@\@$$CBUVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USideBySideValidationExceptionComponent\@\@USideBySideExceptionVisitedFlagComponent\@\@\@\@V?$OptionalGlobalT\@USideBySideRemappingComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI void tickExceptions(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent>, struct SideBySideValidationExceptionComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent, class FlagComponent<struct CollidableMobNearFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent, struct SideBySideExceptionVisitedFlagComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideCopyComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideValidationExceptionComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SideBySideCopyComponent const, struct VehicleComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SideBySideValidationExceptionComponent, struct SideBySideExceptionVisitedFlagComponent>, class OptionalGlobalT<struct SideBySideRemappingComponent, class EntityRegistryBase>);

};