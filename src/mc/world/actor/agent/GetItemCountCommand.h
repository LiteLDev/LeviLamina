#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

namespace AgentCommands {

class GetItemCountCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_GETITEMCOUNTCOMMAND
public:
    GetItemCountCommand& operator=(GetItemCountCommand const&) = delete;
    GetItemCountCommand(GetItemCountCommand const&)            = delete;
    GetItemCountCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetItemCountCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@GetItemCountCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemCountCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
};

}; // namespace AgentCommands
