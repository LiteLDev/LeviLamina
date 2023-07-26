#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class TillCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    TillCommand& operator=(TillCommand const&) = delete;
    TillCommand(TillCommand const&)            = delete;
    TillCommand()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@TillCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isDone\@TillCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone(); // NOLINT
};

}; // namespace AgentCommands
