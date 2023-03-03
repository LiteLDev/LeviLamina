/**
 * @file  AgentMoveCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~AgentMoveCommandSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@AgentMoveCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?cleanUp\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI static void cleanUp(class EntityContext &, float);
    /**
     * @symbol  ?initialize\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@AEAUActionDetails\@AgentComponents\@\@AEAVMove\@4\@\@Z
     */
    MCAPI static void initialize(class EntityContext &, struct AgentComponents::ActionDetails &, class AgentComponents::Move &);
    /**
     * @symbol  ?tickMove\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@AEAUActionDetails\@AgentComponents\@\@AEAVMove\@4\@\@Z
     */
    MCAPI static void tickMove(class EntityContext &, struct AgentComponents::ActionDetails &, class AgentComponents::Move &);

};