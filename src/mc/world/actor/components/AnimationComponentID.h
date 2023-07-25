#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationComponentID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTID
public:
    AnimationComponentID& operator=(AnimationComponentID const&) = delete;
    AnimationComponentID(AnimationComponentID const&)            = delete;
    AnimationComponentID()                                       = delete;
#endif

public:
    /**
     * @symbol ??0AnimationComponentID\@\@QEAA\@AEBUActorUniqueID\@\@GW4AttachableSlotIndex\@\@\@Z
     */
    MCAPI AnimationComponentID(struct ActorUniqueID const&, unsigned short, enum class AttachableSlotIndex);
};
