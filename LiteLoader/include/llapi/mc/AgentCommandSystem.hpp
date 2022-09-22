/**
 * @file  AgentCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentCommandSystem.
 *
 */
class AgentCommandSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDSYSTEM
public:
    class AgentCommandSystem& operator=(class AgentCommandSystem const &) = delete;
    AgentCommandSystem(class AgentCommandSystem const &) = delete;
    AgentCommandSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AgentCommandSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -432048043
     * @vftbl  2
     * @symbol ?tick@AgentCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @hash   1669119969
     * @symbol ?cleanUp@AgentCommandSystem@@SAXAEAVEntityContext@@M@Z
     */
    MCAPI static void cleanUp(class EntityContext &, float);
    /**
     * @hash   -449875618
     * @symbol ?initialize@AgentCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UInitializingFlag@AgentComponents@@@@V?$FlagComponent@ULegacyCommandFlag@AgentComponents@@@@@@@Z
     */
    MCAPI static void initialize(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct AgentComponents::InitializingFlag>, class FlagComponent<struct AgentComponents::LegacyCommandFlag>> &);
    /**
     * @hash   -1541495693
     * @symbol ?tickAgentCooldown@AgentCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VCommandCooldown@AgentComponents@@VActionQueue@4@@@@Z
     */
    MCAPI static void tickAgentCooldown(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentComponents::CommandCooldown, class AgentComponents::ActionQueue> &);
    /**
     * @hash   -1624722096
     * @symbol ?tickLegacy@AgentCommandSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@VAgentCommandComponent@@V?$FlagComponent@UExecutingFlag@AgentComponents@@@@V?$FlagComponent@ULegacyCommandFlag@AgentComponents@@@@@@@Z
     */
    MCAPI static void tickLegacy(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class AgentCommandComponent, class FlagComponent<struct AgentComponents::ExecutingFlag>, class FlagComponent<struct AgentComponents::LegacyCommandFlag>> &);

};