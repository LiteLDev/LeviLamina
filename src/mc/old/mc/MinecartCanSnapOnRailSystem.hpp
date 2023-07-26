/**
 * @file  MinecartCanSnapOnRailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartCanSnapOnRailSystem.
 *
 */
class MinecartCanSnapOnRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCANSNAPONRAILSYSTEM
public:
    class MinecartCanSnapOnRailSystem& operator=(class MinecartCanSnapOnRailSystem const &) = delete;
    MinecartCanSnapOnRailSystem(class MinecartCanSnapOnRailSystem const &) = delete;
    MinecartCanSnapOnRailSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_checkCanSnapOnRail\@MinecartCanSnapOnRailSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USnapOnRailComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _checkCanSnapOnRail(class StrictEntityContext const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SnapOnRailComponent>, class IConstBlockSource const &);
    /**
     * @symbol  ?createSystem\@MinecartCanSnapOnRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};