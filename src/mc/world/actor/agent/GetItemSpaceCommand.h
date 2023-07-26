#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

namespace AgentCommands {

class GetItemSpaceCommand : public ::Command {

public:
    // prevent constructor by default
    GetItemSpaceCommand& operator=(GetItemSpaceCommand const&) = delete;
    GetItemSpaceCommand(GetItemSpaceCommand const&)            = delete;
    GetItemSpaceCommand()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@GetItemSpaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isDone\@GetItemSpaceCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@GetItemSpaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent(); // NOLINT
};

}; // namespace AgentCommands
