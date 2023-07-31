#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class DropCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    DropCommand& operator=(DropCommand const&) = delete;
    DropCommand(DropCommand const&)            = delete;
    DropCommand()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DropCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@DropCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    // NOLINTEND
};

}; // namespace AgentCommands
