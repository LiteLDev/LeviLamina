#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

struct PlayerDamageEvent {

public:
    // prevent constructor by default
    PlayerDamageEvent& operator=(PlayerDamageEvent const&) = delete;
    PlayerDamageEvent(PlayerDamageEvent const&)            = delete;
    PlayerDamageEvent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0PlayerDamageEvent\@\@QEAA\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDamageEvent(class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class ActorDamageSource>);
    /**
     * @symbol ??1PlayerDamageEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDamageEvent();
    // NOLINTEND
};
