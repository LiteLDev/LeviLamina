#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class InspectDataCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    InspectDataCommand& operator=(InspectDataCommand const&) = delete;
    InspectDataCommand(InspectDataCommand const&)            = delete;
    InspectDataCommand()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@InspectDataCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@InspectDataCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@InspectDataCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
    // NOLINTEND
};

}; // namespace AgentCommands
