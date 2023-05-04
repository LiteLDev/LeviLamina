/**
 * @file  AgentTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AgentTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTTRAVELSYSTEM
public:
    class AgentTravelSystem& operator=(class AgentTravelSystem const &) = delete;
    AgentTravelSystem(class AgentTravelSystem const &) = delete;
    AgentTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createClientSystem\@AgentTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientSystem();
    /**
     * @symbol ?createServerSystem\@AgentTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerSystem();
    /**
     * @symbol ?tickClient\@AgentTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@UAgentFlag\@\@\@\@\@\@VActorMovementProxyComponent\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void tickClient(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct AgentFlag>>, class ActorMovementProxyComponent, class ActorOwnerComponent>);
    /**
     * @symbol ?tickServer\@AgentTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@UAgentFlag\@\@\@\@\@\@VActorMovementProxyComponent\@\@VActorOwnerComponent\@\@UStateVectorComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void tickServer(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct AgentFlag>>, class ActorMovementProxyComponent, class ActorOwnerComponent, struct StateVectorComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);

//private:
    /**
     * @symbol ?_doClientAgentTravelSystem\@AgentTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorMovementProxyComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doClientAgentTravelSystem(class StrictEntityContext const &, class ActorMovementProxyComponent &, class ActorOwnerComponent &);
    /**
     * @symbol ?_doServerAgentTravelSystem\@AgentTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorMovementProxyComponent\@\@AEAVActorOwnerComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _doServerAgentTravelSystem(class StrictEntityContext const &, class ActorMovementProxyComponent &, class ActorOwnerComponent &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);

private:

};
