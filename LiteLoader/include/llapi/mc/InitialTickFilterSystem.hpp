/**
 * @file  InitialTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InitialTickFilterSystem.
 *
 */
class InitialTickFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INITIALTICKFILTERSYSTEM
public:
    class InitialTickFilterSystem& operator=(class InitialTickFilterSystem const &) = delete;
    InitialTickFilterSystem(class InitialTickFilterSystem const &) = delete;
    InitialTickFilterSystem() = delete;
#endif

public:
    /**
     * @hash   -1361574403
     * @symbol ?blockFilterTickEntity@InitialTickFilterSystem@@SAXAEAVStrictEntityContext@@AEBV?$FlagComponent@UUsesECSMovementFlag@@@@AEBV?$FlagComponent@UActorMovementTickNeededFlag@@@@AEBUConstBlockSourceComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@Z
     */
    MCAPI static void blockFilterTickEntity(class StrictEntityContext &, class FlagComponent<struct UsesECSMovementFlag> const &, class FlagComponent<struct ActorMovementTickNeededFlag> const &, struct ConstBlockSourceComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>> &);
    /**
     * @hash   51509804
     * @symbol ?createBlockFilterSystem@InitialTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockFilterSystem();
    /**
     * @hash   -1737372580
     * @symbol ?createTickingAreaFilterSystem@InitialTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTickingAreaFilterSystem();
    /**
     * @hash   1279181385
     * @symbol ?tickingAreaFilterTickEntity@InitialTickFilterSystem@@SAXAEAVStrictEntityContext@@AEBV?$FlagComponent@UUsesECSMovementFlag@@@@AEBV?$FlagComponent@UActorMovementTickNeededFlag@@@@AEAVTickWorldComponent@@AEBUCurrentTickComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@Z
     */
    MCAPI static void tickingAreaFilterTickEntity(class StrictEntityContext &, class FlagComponent<struct UsesECSMovementFlag> const &, class FlagComponent<struct ActorMovementTickNeededFlag> const &, class TickWorldComponent &, struct CurrentTickComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>> &);

};