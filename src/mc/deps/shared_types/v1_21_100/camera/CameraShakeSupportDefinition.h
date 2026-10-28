#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
