/**
 * @file  AgentDetectCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentDetectCommandSystem.
 *
 */
class AgentDetectCommandSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTDETECTCOMMANDSYSTEM
public:
    class AgentDetectCommandSystem& operator=(class AgentDetectCommandSystem const &) = delete;
    AgentDetectCommandSystem(class AgentDetectCommandSystem const &) = delete;
    AgentDetectCommandSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AgentDetectCommandSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@AgentDetectCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?initializeObstacle\@AgentDetectCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVDetectObstacle\@AgentComponents\@\@\@Z
     */
    MCAPI static void initializeObstacle(class EntityContext &, class AgentComponents::DetectObstacle &);
    /**
     * @symbol  ?initializeRedstone\@AgentDetectCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVDetectRedstone\@AgentComponents\@\@\@Z
     */
    MCAPI static void initializeRedstone(class EntityContext &, class AgentComponents::DetectRedstone &);

};