#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class DropAllCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    DropAllCommand& operator=(DropAllCommand const&) = delete;
    DropAllCommand(DropAllCommand const&)            = delete;
    DropAllCommand()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@DropAllCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isDone\@DropAllCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone(); // NOLINT
};

}; // namespace AgentCommands
