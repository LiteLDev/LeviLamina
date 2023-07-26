#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

namespace AgentCommands {

class InspectDataCommand : public ::Command {

public:
    // prevent constructor by default
    InspectDataCommand& operator=(InspectDataCommand const&) = delete;
    InspectDataCommand(InspectDataCommand const&)            = delete;
    InspectDataCommand()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@InspectDataCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isDone\@InspectDataCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@InspectDataCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent(); // NOLINT
};

}; // namespace AgentCommands
