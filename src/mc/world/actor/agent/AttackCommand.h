#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class AttackCommand : public ::AgentCommands::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_ATTACKCOMMAND
public:
    AttackCommand& operator=(AttackCommand const&) = delete;
    AttackCommand(AttackCommand const&)            = delete;
    AttackCommand()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@AttackCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@AttackCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
};

}; // namespace AgentCommands
