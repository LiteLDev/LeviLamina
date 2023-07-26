#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationListener {

public:
    // prevent constructor by default
    CombatRegenerationListener& operator=(CombatRegenerationListener const&) = delete;
    CombatRegenerationListener(CombatRegenerationListener const&)            = delete;
    CombatRegenerationListener()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?onEvent\@CombatRegenerationListener\@\@UEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&); // NOLINT
};
