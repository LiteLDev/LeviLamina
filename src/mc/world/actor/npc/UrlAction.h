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
    // NOLINTBEGIN
    /**
     * @symbol ??9UrlAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct npc::UrlAction const&) const;
    /**
     * @symbol ??1UrlAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~UrlAction();
    // NOLINTEND
};

}; // namespace npc
