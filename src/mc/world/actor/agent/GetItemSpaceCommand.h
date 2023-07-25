#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

namespace AgentCommands {

class GetItemSpaceCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_GETITEMSPACECOMMAND
public:
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&) = delete;
    GetItemSpaceCommand(GetItemSpaceCommand const&)            = delete;
    GetItemSpaceCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetItemSpaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@GetItemSpaceCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemSpaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
};

}; // namespace AgentCommands
