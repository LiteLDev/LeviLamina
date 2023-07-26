#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

namespace AgentCommands {

class GetItemCountCommand : public ::Command {

public:
    // prevent constructor by default
    GetItemCountCommand& operator=(GetItemCountCommand const&) = delete;
    GetItemCountCommand(GetItemCountCommand const&)            = delete;
    GetItemCountCommand()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@GetItemCountCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isDone\@GetItemCountCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemCountCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent(); // NOLINT
};

}; // namespace AgentCommands
