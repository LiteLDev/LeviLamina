#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorEquippedArmorEvent {
public:
    // prevent constructor by default
    ActorEquippedArmorEvent& operator=(ActorEquippedArmorEvent const&);
    ActorEquippedArmorEvent(ActorEquippedArmorEvent const&);
    ActorEquippedArmorEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorEquippedArmorEvent();

    // NOLINTEND
};
