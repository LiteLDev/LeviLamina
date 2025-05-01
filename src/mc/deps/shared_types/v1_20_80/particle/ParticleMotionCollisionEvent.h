#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct ParticleMotionCollisionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfab88d;
    ::ll::UntypedStorage<8, 48> mUnk917e6e;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleMotionCollisionEvent(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
