#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class InLavaSensingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INLAVASENSINGSYSTEM
public:
    InLavaSensingSystem& operator=(InLavaSensingSystem const&) = delete;
    InLavaSensingSystem(InLavaSensingSystem const&)            = delete;
    InLavaSensingSystem()                                      = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@InLavaSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?doInLavaSensing\@InLavaSensingSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UInLavaFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doInLavaSensing(class StrictEntityContext const&, struct UpdateWaterStateRequestComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct InLavaFlag>>);
    /**
     * @symbol
     * ?tickSystem\@InLavaSensingSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUUpdateWaterStateRequestComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UInLavaFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct UpdateWaterStateRequestComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct InLavaFlag>>);
};
