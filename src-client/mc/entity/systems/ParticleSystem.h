#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { struct ParticleEffectData_Legacy; }
namespace Puv { class Input; }
namespace Puv { class Logger; }
// clang-format on

namespace ParticleSystem {
// functions
// NOLINTBEGIN
MCAPI ::ParticleSystem::ParticleEffectData_Legacy parseParticleEffect(
    ::Puv::Input const&                                      input,
    ::Puv::Logger&                                           logger,
    ::MinEngineVersion                                       minEngineVersion,
    ::ParticleSystem::ParticleEffectComponentRegistry const* particleComponentRegistry
);
// NOLINTEND

} // namespace ParticleSystem
