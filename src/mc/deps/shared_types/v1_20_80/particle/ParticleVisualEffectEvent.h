#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // prevent constructor by default
    ParticleVisualEffectEvent& operator=(ParticleVisualEffectEvent const&);
    ParticleVisualEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleVisualEffectEvent(::SharedTypes::v1_20_80::ParticleVisualEffectEvent const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleVisualEffectEvent&
    operator=(::SharedTypes::v1_20_80::ParticleVisualEffectEvent&&);

    MCAPI ~ParticleVisualEffectEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleVisualEffectEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
