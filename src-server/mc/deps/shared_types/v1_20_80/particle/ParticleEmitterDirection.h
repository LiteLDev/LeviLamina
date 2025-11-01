#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEmitterDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke315a8;
    ::ll::UntypedStorage<8, 152> mUnkb16ed8;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEmitterDirection& operator=(ParticleEmitterDirection const&);
    ParticleEmitterDirection(ParticleEmitterDirection const&);
    ParticleEmitterDirection();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
