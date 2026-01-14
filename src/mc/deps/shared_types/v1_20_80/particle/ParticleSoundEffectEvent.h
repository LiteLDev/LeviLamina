#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct ParticleSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSoundEffectEvent& operator=(ParticleSoundEffectEvent const&);
    ParticleSoundEffectEvent(ParticleSoundEffectEvent const&);
    ParticleSoundEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_80::ParticleSoundEffectEvent&
    operator=(::SharedTypes::v1_20_80::ParticleSoundEffectEvent&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
