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
    ParticleMotionCollisionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleMotionCollisionEvent(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);

    MCFOLD ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
