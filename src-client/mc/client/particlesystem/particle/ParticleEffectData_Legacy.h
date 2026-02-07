#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ConstDeserializeDataParams;
namespace Json { class Value; }
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
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
// clang-format on

namespace ParticleSystem {

struct ParticleEffectData_Legacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::EmitterInitialComponentBase>>>
        mEmitterInitialComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::EmitterLifetimeComponentBase>>>
        mEmitterLifetimeComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::EmitterRateComponentBase>>>
        mEmitterRateComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::EmitterShapeComponentBase>>>
        mEmitterShapeComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleAppearanceComponentBase>>>
        mParticleAppearanceComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleInitialComponentBase>>>
        mParticleInitialComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleLifetimeComponentBase>>>
        mParticleLifetimeComponents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleMotionComponentBase>>>
        mParticleMotionComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleCurveBase>>> mParticleCurves;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::std::unique_ptr<::ParticleSystem::ParticleEventNode>>>
                                              mParticleEvents;
    ::ll::TypedStorage<8, 32, ::std::string>  mName;
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterialNameHash;
    ::ll::TypedStorage<8, 32, ::std::string>  mTextureName;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectData_Legacy& operator=(ParticleEffectData_Legacy const&);
    ParticleEffectData_Legacy(ParticleEffectData_Legacy const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleEffectData_Legacy();

    MCAPI ParticleEffectData_Legacy(::ParticleSystem::ParticleEffectData_Legacy&&);

    MCAPI bool _extractBasicRenderParameters(::Json::Value const& node);

    MCAPI void _extractComponents(
        ::ConstDeserializeDataParams const&                      deserializeDataParams,
        ::ParticleSystem::ParticleEffectComponentRegistry const& particleComponentRegistry
    );

    MCAPI void _extractCurves(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void _extractEvents(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI bool parseJson(
        ::ConstDeserializeDataParams const&                      deserializeDataParams,
        ::ParticleSystem::ParticleEffectComponentRegistry const& particleComponentRegistry
    );

    MCAPI ~ParticleEffectData_Legacy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_20_80::ParticleEffectData
    upgrade(::ParticleSystem::ParticleEffectData_Legacy&& legacyData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ParticleSystem::ParticleEffectData_Legacy&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
