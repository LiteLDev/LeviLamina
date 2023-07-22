/**
 * @file  PlayerDamageEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerDamageEvent.
 *
 */
struct PlayerDamageEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDAMAGEEVENT
public:
    struct PlayerDamageEvent& operator=(struct PlayerDamageEvent const &) = delete;
    PlayerDamageEvent(struct PlayerDamageEvent const &) = delete;
    PlayerDamageEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0PlayerDamageEvent\@\@QEAA\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDamageEvent(class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class ActorDamageSource>);
    /**
     * @symbol  ??1PlayerDamageEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDamageEvent();

};