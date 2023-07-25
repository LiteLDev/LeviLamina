#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class MinecartCanSnapOnRailSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCANSNAPONRAILSYSTEM
public:
    MinecartCanSnapOnRailSystem& operator=(MinecartCanSnapOnRailSystem const&) = delete;
    MinecartCanSnapOnRailSystem(MinecartCanSnapOnRailSystem const&)            = delete;
    MinecartCanSnapOnRailSystem()                                              = delete;
#endif

public:
    /**
     * @symbol
     * ?_checkCanSnapOnRail\@MinecartCanSnapOnRailSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USnapOnRailComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    _checkCanSnapOnRail(class StrictEntityContext const&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SnapOnRailComponent>, class IConstBlockSource const&);
    /**
     * @symbol ?createSystem\@MinecartCanSnapOnRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
