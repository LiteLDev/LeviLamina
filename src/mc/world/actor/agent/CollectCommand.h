#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class CollectCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    CollectCommand& operator=(CollectCommand const&) = delete;
    CollectCommand(CollectCommand const&)            = delete;
    CollectCommand()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@CollectCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@CollectCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    // NOLINTEND
};

}; // namespace AgentCommands
