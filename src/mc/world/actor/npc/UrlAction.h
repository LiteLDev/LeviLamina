#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct UrlAction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_URLACTION
public:
    UrlAction& operator=(UrlAction const&) = delete;
    UrlAction(UrlAction const&)            = delete;
    UrlAction()                            = delete;
#endif

public:
    /**
     * @symbol ??9UrlAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct npc::UrlAction const&) const;
    /**
     * @symbol ??1UrlAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~UrlAction();
};

}; // namespace npc
