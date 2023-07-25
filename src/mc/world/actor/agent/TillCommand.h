#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class TillCommand : public ::AgentCommands::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_TILLCOMMAND
public:
    TillCommand& operator=(TillCommand const&) = delete;
    TillCommand(TillCommand const&)            = delete;
    TillCommand()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TillCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@TillCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
};

}; // namespace AgentCommands
