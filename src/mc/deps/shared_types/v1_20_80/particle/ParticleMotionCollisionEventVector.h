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
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_80::ParticleMotionCollisionEvent>> mEventVector;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ~ParticleMotionCollisionEventVector();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void fromSingleEvent(
        ::SharedTypes::v1_20_80::ParticleMotionCollisionEventVector& instance,
        ::SharedTypes::v1_20_80::ParticleMotionCollisionEvent const& event
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
