#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorEquippedArmorEvent {

public:
    // prevent constructor by default
    ActorEquippedArmorEvent& operator=(ActorEquippedArmorEvent const&) = delete;
    ActorEquippedArmorEvent(ActorEquippedArmorEvent const&)            = delete;
    ActorEquippedArmorEvent()                                          = delete;

public:
    /**
     * @symbol ??1ActorEquippedArmorEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorEquippedArmorEvent(); // NOLINT
};
