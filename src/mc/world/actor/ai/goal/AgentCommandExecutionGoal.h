#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentCommandExecutionGoal {

public:
    // prevent constructor by default
    AgentCommandExecutionGoal& operator=(AgentCommandExecutionGoal const&) = delete;
    AgentCommandExecutionGoal(AgentCommandExecutionGoal const&)            = delete;
    AgentCommandExecutionGoal()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@AgentCommandExecutionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@AgentCommandExecutionGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@AgentCommandExecutionGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@AgentCommandExecutionGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AgentCommandExecutionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0AgentCommandExecutionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AgentCommandExecutionGoal(class Mob&); // NOLINT
};
