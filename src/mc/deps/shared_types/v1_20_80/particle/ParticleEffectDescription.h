#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk254726;
    ::ll::UntypedStorage<8, 80> mUnkaafc49;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectDescription(::SharedTypes::v1_20_80::ParticleEffectDescription const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectDescription&
    operator=(::SharedTypes::v1_20_80::ParticleEffectDescription&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectDescription&
    operator=(::SharedTypes::v1_20_80::ParticleEffectDescription const&);

    MCNAPI ~ParticleEffectDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
