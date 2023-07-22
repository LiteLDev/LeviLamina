/**
 * @file  SideBySideComparisonRateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideComparisonRateSystem.
 *
 */
class SideBySideComparisonRateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOMPARISONRATESYSTEM
public:
    class SideBySideComparisonRateSystem& operator=(class SideBySideComparisonRateSystem const &) = delete;
    SideBySideComparisonRateSystem(class SideBySideComparisonRateSystem const &) = delete;
    SideBySideComparisonRateSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@SideBySideComparisonRateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?tick\@SideBySideComparisonRateSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@VActorOwnerComponent\@\@VActorTickNeededComponent\@\@\@\@\@\@V?$OptionalGlobalT\@USideBySideComparisonRateTickComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UUsesSideBySideComparisonComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class ActorOwnerComponent, class ActorTickNeededComponent>>, class OptionalGlobalT<struct SideBySideComparisonRateTickComponent, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct UsesSideBySideComparisonComponent>);

private:

};