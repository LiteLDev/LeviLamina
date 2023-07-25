#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentCommandExecutionGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDEXECUTIONGOAL
public:
    AgentCommandExecutionGoal& operator=(AgentCommandExecutionGoal const&) = delete;
    AgentCommandExecutionGoal(AgentCommandExecutionGoal const&)            = delete;
    AgentCommandExecutionGoal()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@AgentCommandExecutionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@AgentCommandExecutionGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@AgentCommandExecutionGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@AgentCommandExecutionGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AgentCommandExecutionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0AgentCommandExecutionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AgentCommandExecutionGoal(class Mob&);
};
