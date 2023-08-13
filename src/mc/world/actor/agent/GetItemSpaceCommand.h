#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class GetItemSpaceCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&) = delete;
    GetItemSpaceCommand(GetItemSpaceCommand const&)            = delete;
    GetItemSpaceCommand()                                      = delete;

public:
    // NOLINTBEGIN
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
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemSpaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
    // NOLINTEND
};

}; // namespace AgentCommands
