/**
 * @file  SetPreviousPosRotSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SetPreviousPosRotSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSPOSROTSYSTEM
public:
    class SetPreviousPosRotSystem& operator=(class SetPreviousPosRotSystem const &) = delete;
    SetPreviousPosRotSystem(class SetPreviousPosRotSystem const &) = delete;
    SetPreviousPosRotSystem() = delete;
#endif

public:
    /**
     * @symbol ?_setPreviousPosRot@SetPreviousPosRotSystem@@SAXAEAVStrictEntityContext@@AEAUStateVectorComponent@@AEAUActorRotationComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UPosRotSetThisTickFlag@@@@@@@Z
     */
    MCAPI static void _setPreviousPosRot(class StrictEntityContext &, struct StateVectorComponent &, struct ActorRotationComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PosRotSetThisTickFlag>>);

};