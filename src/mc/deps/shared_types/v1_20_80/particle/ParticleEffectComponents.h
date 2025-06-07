#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ComponentStorage.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectComponents : public ::cereal::ComponentStorage {
public:
    // prevent constructor by default
    ParticleEffectComponents(ParticleEffectComponents const&);
    ParticleEffectComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectComponents&
    operator=(::SharedTypes::v1_20_80::ParticleEffectComponents const&);

    MCNAPI ~ParticleEffectComponents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
