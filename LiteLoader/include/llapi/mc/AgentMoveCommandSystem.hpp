/**
 * @file  AgentMoveCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentMoveCommandSystem.
 *
 */
class AgentMoveCommandSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTMOVECOMMANDSYSTEM
public:
    class AgentMoveCommandSystem& operator=(class AgentMoveCommandSystem const &) = delete;
    AgentMoveCommandSystem(class AgentMoveCommandSystem const &) = delete;
    AgentMoveCommandSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AgentMoveCommandSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1898948964
     * @vftbl  2
     * @symbol ?tick@AgentMoveCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @hash   490109361
     * @symbol ?cleanUp@AgentMoveCommandSystem@@SAXAEAVEntityContext@@M@Z
     */
    MCAPI static void cleanUp(class EntityContext &, float);
    /**
     * @hash   1746068477
     * @symbol ?initialize@AgentMoveCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VAgent@AgentComponents@@UActionDetails@4@V?$FlagComponent@UInitializingFlag@AgentComponents@@@@VMove@4@@@@Z
     */
    MCAPI static void initialize(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::Agent, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::InitializingFlag>, class AgentComponents::Move> &);
    /**
     * @hash   395591367
     * @symbol ?tickMove@AgentMoveCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VAgent@AgentComponents@@UActionDetails@4@V?$FlagComponent@UExecutingFlag@AgentComponents@@@@VMove@4@@@@Z
     */
    MCAPI static void tickMove(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::Agent, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::ExecutingFlag>, class AgentComponents::Move> &);

};