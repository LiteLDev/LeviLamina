#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponents.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_20_80 { struct ParticleCurve; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::SharedTypes::v1_20_80::ParticleEffectDescription> mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_20_80::ParticleEffectComponents>   mComponents;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::SharedTypes::v1_20_80::ParticleCurve>>>
        mCurves;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::SharedTypes::v1_20_80::ParticleEventNode>>>
        mEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ParticleEffectData();

    MCAPI_C ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCAPI ~ParticleEffectData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
