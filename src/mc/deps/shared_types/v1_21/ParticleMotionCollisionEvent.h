#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ParticleMotionCollisionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2e28c2;
    ::ll::UntypedStorage<8, 48> mUnkcd8197;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionEvent& operator=(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent();
};

} // namespace SharedTypes::v1_21
