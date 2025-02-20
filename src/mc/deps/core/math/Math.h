#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
namespace mce { struct Radian; }
// clang-format on

namespace mce {

class Math {
public:
    // Math inner types declare
    // clang-format off
    struct PairHash;
    struct TupleHash;
    // clang-format on

    // Math inner types define
    struct PairHash {};

    struct TupleHash {};

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Radian atan2(float dy, float dx);

    MCAPI static float clamp(float v, float low, float high);

    MCAPI static int clamp(int v, int low, int high);

    MCAPI static float clampRotate(float current, float target, float maxDelta);

    MCAPI static bool isNan(double d);

    MCAPI static bool isNan(float f);

    MCAPI static float lerpRotate(float from, float to, float a);

    MCAPI static float wrapDegrees(float input);

    MCAPI static ::mce::Degree wrapDegrees(::mce::Degree input);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<float[]> mSin();

    MCAPI static float const& mSinScale();
    // NOLINTEND
};

} // namespace mce
