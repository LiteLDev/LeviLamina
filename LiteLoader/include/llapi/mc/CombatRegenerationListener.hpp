/**
 * @file  CombatRegenerationListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CombatRegenerationListener.
 *
 */
class CombatRegenerationListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONLISTENER
public:
    class CombatRegenerationListener& operator=(class CombatRegenerationListener const &) = delete;
    CombatRegenerationListener(class CombatRegenerationListener const &) = delete;
    CombatRegenerationListener() = delete;
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
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const &);

};
