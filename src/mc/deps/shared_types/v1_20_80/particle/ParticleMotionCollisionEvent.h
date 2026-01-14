#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionCollisionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>           mMinSpeed;
    ::ll::TypedStorage<8, 48, ::HashedString> mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionEvent& operator=(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent(ParticleMotionCollisionEvent const&);
    ParticleMotionCollisionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
