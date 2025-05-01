#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct ParticleSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk954a06;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSoundEffectEvent(ParticleSoundEffectEvent const&);
    ParticleSoundEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ParticleSoundEffectEvent&
    operator=(::SharedTypes::v1_20_80::ParticleSoundEffectEvent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleSoundEffectEvent&
    operator=(::SharedTypes::v1_20_80::ParticleSoundEffectEvent&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
