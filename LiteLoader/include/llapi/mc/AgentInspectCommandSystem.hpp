/**
 * @file  AgentInspectCommandSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AgentInspectCommandSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTINSPECTCOMMANDSYSTEM
public:
    class AgentInspectCommandSystem& operator=(class AgentInspectCommandSystem const &) = delete;
    AgentInspectCommandSystem(class AgentInspectCommandSystem const &) = delete;
    AgentInspectCommandSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@AgentInspectCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};
