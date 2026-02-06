#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/events/ParticleSoundEffectEvent.h"
#include "mc/client/particlesystem/particle/events/ParticleVisualEffectEvent.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
// clang-format on

namespace ParticleSystem {

class ParticleEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ParticleSystem::ParticleVisualEffectEvent> mVisualEffect;
    ::ll::TypedStorage<4, 4, ::ParticleSystem::ParticleSoundEffectEvent>   mSoundEffect;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                            mEventExpression;
    ::ll::TypedStorage<8, 32, ::std::string>                               mLogMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ParticleEvent(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI ~ParticleEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConstDeserializeDataParams const& deserializeDataParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
