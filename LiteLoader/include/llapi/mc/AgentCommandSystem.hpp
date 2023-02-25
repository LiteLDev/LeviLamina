/**
 * @file  AgentCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~AgentCommandSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@AgentCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?cleanUp\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI static void cleanUp(class EntityContext &, float);
    /**
     * @symbol  ?initialize\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initialize(class EntityContext &);
    /**
     * @symbol  ?tickAgentCooldown\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVCommandCooldown\@AgentComponents\@\@\@Z
     */
    MCAPI static void tickAgentCooldown(class EntityContext &, class AgentComponents::CommandCooldown &);
    /**
     * @symbol  ?tickLegacy\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVAgentCommandComponent\@\@\@Z
     */
    MCAPI static void tickLegacy(class EntityContext &, class AgentCommandComponent &);

};