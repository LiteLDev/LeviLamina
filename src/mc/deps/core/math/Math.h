#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCNAPI static float clamp(float v, float low, float high);

    MCNAPI static int clamp(int v, int low, int high);

    MCNAPI static float clampRotate(float current, float target, float maxDelta);

    MCNAPI static bool isNan(double d);

    MCNAPI static bool isNan(float f);

    MCNAPI static float lerpRotate(float from, float to, float a);

    MCNAPI static float wrapDegrees(float input);

    MCNAPI static float wrapRadians(float angle);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<float[]> mSin();

    MCNAPI static float const& mSinScale();
    // NOLINTEND
};

} // namespace mce
