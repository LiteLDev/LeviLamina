#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleBasicRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkcab594;
    ::ll::UntypedStorage<8, 32> mUnk122986;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleBasicRenderParameters& operator=(ParticleBasicRenderParameters const&);
    ParticleBasicRenderParameters(ParticleBasicRenderParameters const&);
    ParticleBasicRenderParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ParticleBasicRenderParameters&
    operator=(::SharedTypes::v1_20_80::ParticleBasicRenderParameters&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
