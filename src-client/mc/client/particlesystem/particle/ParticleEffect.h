#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace ParticleSystem { class EmitterInitialComponentBase; }
namespace ParticleSystem { class EmitterLifetimeComponentBase; }
namespace ParticleSystem { class EmitterRateComponentBase; }
namespace ParticleSystem { class EmitterShapeComponentBase; }
namespace ParticleSystem { class ParticleAppearanceComponentBase; }
namespace ParticleSystem { class ParticleCurveBase; }
namespace ParticleSystem { class ParticleEventNode; }
namespace ParticleSystem { class ParticleInitialComponentBase; }
namespace ParticleSystem { class ParticleLifetimeComponentBase; }
namespace ParticleSystem { class ParticleMotionComponentBase; }
// clang-format on

namespace ParticleSystem {

class ParticleEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::EmitterInitialComponentBase>>>
        mEmitterInitialComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::EmitterLifetimeComponentBase>>>
        mEmitterLifetimeComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::EmitterRateComponentBase>>>
        mEmitterRateComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::EmitterShapeComponentBase>>>
        mEmitterShapeComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleAppearanceComponentBase>>>
        mParticleAppearanceComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleInitialComponentBase>>>
        mParticleInitialComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleLifetimeComponentBase>>>
        mParticleLifetimeComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleMotionComponentBase>>>
        mParticleMotionComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleCurveBase>>> mParticleCurves;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleEventNode>>>
                                              mParticleEvents;
    ::ll::TypedStorage<8, 32, ::std::string>  mName;
    ::ll::TypedStorage<8, 32, ::std::string>  mContainerName;
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterialNameHash;
    ::ll::TypedStorage<8, 32, ::std::string>  mTextureName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isManualEmitter() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Random>& mRandomNumberGenerator();
    // NOLINTEND
};

} // namespace ParticleSystem
