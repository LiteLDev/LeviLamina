#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentCommands {

class Command : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_COMMAND
public:
    Command& operator=(Command const&) = delete;
    Command(Command const&)            = delete;
    Command()                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 3
     * @symbol ?tick\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 4
     * @symbol ?fireCommandDoneEvent\@Command\@AgentCommands\@\@UEAAXXZ
     */
    virtual void fireCommandDoneEvent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTCOMMANDS_COMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Command();
#endif

    // protected:
    /**
     * @symbol ?_getNextPosFromDirection\@Command\@AgentCommands\@\@IEAA?AVVec3\@\@W4Direction\@AgentComponents\@\@\@Z
     */
    MCAPI class Vec3 _getNextPosFromDirection(enum class AgentComponents::Direction);

protected:
};

}; // namespace AgentCommands
