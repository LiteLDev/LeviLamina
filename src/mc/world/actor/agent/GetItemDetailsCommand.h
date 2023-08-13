#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&) = delete;
    GetItemDetailsCommand(GetItemDetailsCommand const&)            = delete;
    GetItemDetailsCommand()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetItemDetailsCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@GetItemDetailsCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemDetailsCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
    // NOLINTEND
};

}; // namespace AgentCommands
