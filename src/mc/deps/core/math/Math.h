#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCNAPI static ::mce::Radian atan2(float dy, float dx);

    MCNAPI static float clamp(float v, float low, float high);

    MCNAPI static int clamp(int v, int low, int high);

    MCNAPI static float clampRotate(float current, float target, float maxDelta);

    MCNAPI static bool isNan(double d);

    MCNAPI static bool isNan(float f);

    MCNAPI static float lerpRotate(float from, float to, float a);

    MCNAPI static float sqrt(float x);

    MCNAPI static float wrapDegrees(float input);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<float[]> mSin();

    MCAPI static float const& mSinScale();
    // NOLINTEND
};

} // namespace mce
