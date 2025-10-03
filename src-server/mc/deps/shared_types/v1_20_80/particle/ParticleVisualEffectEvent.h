#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 48> mUnk37423e;
    ::ll::UntypedStorage<4, 4>  mUnk7bcfc4;
    ::ll::UntypedStorage<8, 48> mUnk8d12c3;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleVisualEffectEvent& operator=(ParticleVisualEffectEvent const&);
    ParticleVisualEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleVisualEffectEvent(::SharedTypes::v1_20_80::ParticleVisualEffectEvent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleVisualEffectEvent&
    operator=(::SharedTypes::v1_20_80::ParticleVisualEffectEvent&&);

    MCNAPI ~ParticleVisualEffectEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleVisualEffectEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
