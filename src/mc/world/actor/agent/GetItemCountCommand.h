#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class GetItemCountCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    GetItemCountCommand& operator=(GetItemCountCommand const&) = delete;
    GetItemCountCommand(GetItemCountCommand const&)            = delete;
    GetItemCountCommand()                                      = delete;

public:
    // NOLINTBEGIN
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
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemCountCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
    // NOLINTEND
};

}; // namespace AgentCommands
