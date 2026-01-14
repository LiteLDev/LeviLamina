#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleBasicRenderParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                          mIdentifier;
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_20_80::ParticleBasicRenderParameters> mBasicRenderParams;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectDescription& operator=(ParticleEffectDescription const&);
    ParticleEffectDescription(ParticleEffectDescription const&);
    ParticleEffectDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_80::ParticleEffectDescription&
    operator=(::SharedTypes::v1_20_80::ParticleEffectDescription&&);

    MCAPI ~ParticleEffectDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
