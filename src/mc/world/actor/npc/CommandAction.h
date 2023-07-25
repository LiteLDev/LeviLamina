#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct CommandAction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_COMMANDACTION
public:
    CommandAction& operator=(CommandAction const&) = delete;
    CommandAction(CommandAction const&)            = delete;
    CommandAction()                                = delete;
#endif

public:
    /**
     * @symbol ??9CommandAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct npc::CommandAction const&) const;
    /**
     * @symbol ??1CommandAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~CommandAction();
};

}; // namespace npc
