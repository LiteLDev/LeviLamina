#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleMotionCollisionEvent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionCollisionEventVector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7ec098;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionEventVector& operator=(ParticleMotionCollisionEventVector const&);
    ParticleMotionCollisionEventVector(ParticleMotionCollisionEventVector const&);
    ParticleMotionCollisionEventVector();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromSingleEvent(::SharedTypes::v1_20_80::ParticleMotionCollisionEventVector& instance, ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const& event);
    // NOLINTEND

};

}
