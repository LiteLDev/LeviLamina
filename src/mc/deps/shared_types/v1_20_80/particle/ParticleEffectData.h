#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk947740;
    ::ll::UntypedStorage<8, 56>  mUnk4922d2;
    ::ll::UntypedStorage<8, 24>  mUnkf90292;
    ::ll::UntypedStorage<8, 24>  mUnk735e26;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ParticleEffectData();

    MCNAPI_C ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCNAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCNAPI ~ParticleEffectData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
