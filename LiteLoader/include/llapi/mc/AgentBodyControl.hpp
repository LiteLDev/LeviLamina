/**
 * @file  AgentBodyControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentBodyControl.
 *
 */
class AgentBodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTBODYCONTROL
public:
    class AgentBodyControl& operator=(class AgentBodyControl const &) = delete;
    AgentBodyControl(class AgentBodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@AgentBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob &);
    /**
     * @symbol ??0AgentBodyControl\@\@QEAA\@XZ
     */
    MCAPI AgentBodyControl();

};
