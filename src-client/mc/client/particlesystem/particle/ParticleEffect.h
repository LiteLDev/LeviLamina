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
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { class ParticleEventNode; }
namespace ParticleSystem { class ParticleInitialComponentBase; }
namespace ParticleSystem { class ParticleLifetimeComponentBase; }
namespace ParticleSystem { class ParticleMotionComponentBase; }
namespace SharedTypes::v1_20_80 { struct ParticleCurve; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponents; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
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
    // prevent constructor by default
    ParticleEffect();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleEffect(
        ::SharedTypes::v1_20_80::ParticleEffectData&             data,
        ::ParticleSystem::ParticleEffectComponentRegistry const* particleComponentRegistry
    );

    MCAPI void
    _addEffectCurveFromData(::HashedString const& curveName, ::SharedTypes::v1_20_80::ParticleCurve& curveData);

    MCAPI void _generateEffectComponents(
        ::SharedTypes::v1_20_80::ParticleEffectComponents&       componentData,
        ::ParticleSystem::ParticleEffectComponentRegistry const* particleComponentRegistry
    );

    MCAPI void _generateEffectCurves(
        ::std::optional<::std::map<::std::string, ::SharedTypes::v1_20_80::ParticleCurve>>& curveData
    );

    MCAPI ~ParticleEffect();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Random>& mRandomNumberGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SharedTypes::v1_20_80::ParticleEffectData&             data,
        ::ParticleSystem::ParticleEffectComponentRegistry const* particleComponentRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
