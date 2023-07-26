/**
 * @file  InitialTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?blockFilterTickEntity\@InitialTickFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void blockFilterTickEntity(class StrictEntityContext const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>> &, class IConstBlockSource const &);
    /**
     * @symbol  ?createBlockFilterSystem\@InitialTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockFilterSystem();
    /**
     * @symbol  ?createTickingAreaFilterSystem\@InitialTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTickingAreaFilterSystem();
    /**
     * @symbol  ?tickingAreaFilterTickEntity\@InitialTickFilterSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVTickWorldComponent\@\@AEBUCurrentTickComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickingAreaFilterTickEntity(class StrictEntityContext &, class TickWorldComponent &, struct CurrentTickComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>> &);

//private:
    /**
     * @symbol  ?_blockFilterTickView\@InitialTickFilterSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@$$CBUStateVectorComponent\@\@U?$Exclude\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UGlobalActorFlag\@\@\@\@USideBySideSimulatorComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$OptionalGlobalT\@$$CBULocalConstBlockSourceFactoryComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _blockFilterTickView(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent const, struct Exclude<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct GlobalActorFlag>, struct SideBySideSimulatorComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct DimensionTypeComponent const>, class OptionalGlobalT<struct LocalConstBlockSourceFactoryComponent const, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>>);

private:

};