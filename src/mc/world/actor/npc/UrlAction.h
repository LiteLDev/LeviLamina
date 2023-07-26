#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct UrlAction {

public:
    // prevent constructor by default
    UrlAction& operator=(UrlAction const&) = delete;
    UrlAction(UrlAction const&)            = delete;
    UrlAction()                            = delete;

public:
    /**
     * @symbol ??9UrlAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct npc::UrlAction const&) const; // NOLINT
    /**
     * @symbol ??1UrlAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~UrlAction(); // NOLINT
};

}; // namespace npc
