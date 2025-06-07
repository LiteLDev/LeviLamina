#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk947740;
    ::ll::UntypedStorage<8, 112> mUnk4922d2;
    ::ll::UntypedStorage<8, 24>  mUnkf90292;
    ::ll::UntypedStorage<8, 24>  mUnk735e26;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
