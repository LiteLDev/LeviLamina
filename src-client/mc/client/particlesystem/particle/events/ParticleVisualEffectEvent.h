#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleVisualEffectEvent; }
// clang-format on

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

public:
    // prevent constructor by default
    ParticleVisualEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ParticleVisualEffectEvent(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleVisualEffectEvent& data);

    MCAPI ~ParticleVisualEffectEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConstDeserializeDataParams const& deserializeDataParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
