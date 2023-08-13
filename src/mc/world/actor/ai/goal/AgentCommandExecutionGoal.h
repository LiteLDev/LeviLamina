#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AgentCommandExecutionGoal : public ::Goal {

public:
    // prevent constructor by default
    AgentCommandExecutionGoal& operator=(AgentCommandExecutionGoal const&) = delete;
    AgentCommandExecutionGoal(AgentCommandExecutionGoal const&)            = delete;
    AgentCommandExecutionGoal()                                            = delete;

public:
    // NOLINTBEGIN
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
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AgentCommandExecutionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0AgentCommandExecutionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AgentCommandExecutionGoal(class Mob&);
    // NOLINTEND
};
