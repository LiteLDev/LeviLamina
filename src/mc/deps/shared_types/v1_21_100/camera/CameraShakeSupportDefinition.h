#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraShakeSupportDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFrequency;
    ::ll::TypedStorage<4, 4, float> mAmplitude;
    ::ll::TypedStorage<4, 4, float> mNoiseMultiplier;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& NAME();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
