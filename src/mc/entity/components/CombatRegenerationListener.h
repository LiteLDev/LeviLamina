#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONLISTENER
public:
    CombatRegenerationListener& operator=(CombatRegenerationListener const&) = delete;
    CombatRegenerationListener(CombatRegenerationListener const&)            = delete;
    CombatRegenerationListener()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onEvent\@CombatRegenerationListener\@\@UEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&);
};
