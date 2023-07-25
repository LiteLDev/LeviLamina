#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class TransferToCommand : public ::AgentCommands::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_TRANSFERTOCOMMAND
public:
    TransferToCommand& operator=(TransferToCommand const&) = delete;
    TransferToCommand(TransferToCommand const&)            = delete;
    TransferToCommand()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TransferToCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@TransferToCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
};

}; // namespace AgentCommands
