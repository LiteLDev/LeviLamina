#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    ParticleMotionCollisionEvent& operator=(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
