#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

namespace ParticleSystem {

class ParticleVisualEffectEvent {
public:
    // ParticleVisualEffectEvent inner types define
    enum class ParticleEffectType : int {
        None                 = 0,
        Particle             = 1,
        ParticleWithVelocity = 2,
        Emitter              = 3,
        EmitterBound         = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleSystem::ParticleVisualEffectEvent::ParticleEffectType> mParticleEffectType;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                 mEffect;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                               mEffectExpression;
    // NOLINTEND
};

} // namespace ParticleSystem
