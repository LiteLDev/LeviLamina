#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace SharedTypes::v1_20_80 { struct ParticleSoundEffectEvent; }
// clang-format on

namespace ParticleSystem {

class ParticleSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSoundEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ParticleSoundEffectEvent(::Json::Value const& eventData);

    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleSoundEffectEvent& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value const& eventData);
    // NOLINTEND
};

} // namespace ParticleSystem
