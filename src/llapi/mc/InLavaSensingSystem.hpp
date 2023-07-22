/**
 * @file  InLavaSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InLavaSensingSystem.
 *
 */
class InLavaSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INLAVASENSINGSYSTEM
public:
    class InLavaSensingSystem& operator=(class InLavaSensingSystem const &) = delete;
    InLavaSensingSystem(class InLavaSensingSystem const &) = delete;
    InLavaSensingSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@InLavaSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?doInLavaSensing\@InLavaSensingSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UInLavaFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doInLavaSensing(class StrictEntityContext const &, struct UpdateWaterStateRequestComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct InLavaFlag>>);

};