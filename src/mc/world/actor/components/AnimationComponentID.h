#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationComponentID {

public:
    // prevent constructor by default
    AnimationComponentID& operator=(AnimationComponentID const&) = delete;
    AnimationComponentID(AnimationComponentID const&)            = delete;
    AnimationComponentID()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AnimationComponentID\@\@QEAA\@AEBUActorUniqueID\@\@GW4AttachableSlotIndex\@\@\@Z
     */
    MCAPI AnimationComponentID(struct ActorUniqueID const&, unsigned short, enum class AttachableSlotIndex);
    // NOLINTEND
};
