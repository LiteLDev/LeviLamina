#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

namespace SharedTypes::v1_20_80 {

struct ParticleVisualEffectEvent {
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
    ::ll::TypedStorage<8, 48, ::HashedString>                                                        mEffectName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent::ParticleEffectType> mEffectType;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                                 mEffectExpression;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ParticleVisualEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
