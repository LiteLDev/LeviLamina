/**
 * @file  LiquidSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidSensingSystem.
 *
 */
class LiquidSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDSENSINGSYSTEM
public:
    class LiquidSensingSystem& operator=(class LiquidSensingSystem const &) = delete;
    LiquidSensingSystem(class LiquidSensingSystem const &) = delete;
    LiquidSensingSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createFlagResetSystem\@LiquidSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFlagResetSystem();
    /**
     * @symbol  ?createSensingSystem\@LiquidSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSensingSystem();

//private:
    /**
     * @symbol  ?_tickSensingSystem\@LiquidSensingSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UUpdateWaterStateRequestComponent\@\@$$CBUAABBShapeComponent\@\@$$CBUSubBBsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$OptionalGlobalT\@$$CBULocalConstBlockSourceFactoryComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void _tickSensingSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct UpdateWaterStateRequestComponent, struct AABBShapeComponent const, struct SubBBsComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct DimensionTypeComponent const>, class OptionalGlobalT<struct LocalConstBlockSourceFactoryComponent const, class EntityRegistryBase>);

private:

};