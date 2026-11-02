#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleBasicRenderParameters.h"

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
    ParticleEffectDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectDescription(::SharedTypes::v1_20_80::ParticleEffectDescription const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectDescription&
    operator=(::SharedTypes::v1_20_80::ParticleEffectDescription&&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEffectDescription const&) const;

    MCNAPI ~ParticleEffectDescription();
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
