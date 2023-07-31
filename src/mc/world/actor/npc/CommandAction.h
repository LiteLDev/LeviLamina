#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct CommandAction {

public:
    // prevent constructor by default
    CommandAction& operator=(CommandAction const&) = delete;
    CommandAction(CommandAction const&)            = delete;
    CommandAction()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??9CommandAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct npc::CommandAction const&) const;
    /**
     * @symbol ??1CommandAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~CommandAction();
    // NOLINTEND
};

}; // namespace npc
