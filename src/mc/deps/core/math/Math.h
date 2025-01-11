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
    MCAPI static float absMax(float a, float b);

    MCAPI static float approach(float current, float target, float increment);

    MCAPI static float approachDegrees(float current, float target, float increment);

    MCAPI static ::mce::Radian atan(float x);

    MCAPI static ::mce::Radian atan2(float dy, float dx);

    MCAPI static int ceil(float v);

    MCAPI static float clamp(float v, float low, float high);

    MCAPI static int clamp(int v, int low, int high);

    MCAPI static float clampRotate(float current, float target, float maxDelta);

    MCAPI static float clampedLerp(float min, float max, float factor);

    MCAPI static double clampedMap(double value, double fromMin, double fromMax, double toMin, double toMax);

    MCAPI static float clampedMap(float value, float fromMin, float fromMax, float toMin, float toMax);

    MCAPI static float cos(float f);

    MCAPI static float cos(::mce::Radian x);

    MCAPI static float degreesDifferenceAbs(float angleA, float angleB);

    MCAPI static bool doubleEqualsEpsilon(double a, double b);

    MCAPI static float fastInvSqrt(float x);

    MCAPI static uint fastRandom();

    MCAPI static bool floatEqualsEpsilon(float a, float b, float limit);

    MCAPI static int floor(float v);

    MCAPI static float hermiteBlend(float t);

    MCAPI static float inverseLerp(float min, float max, float value);

    MCAPI static bool isNan(double d);

    MCAPI static bool isNan(float f);

    MCAPI static bool isWrappedRotationEpsilonEqual(float degreeA, float degreeB, float epsilon);

    MCAPI static float lerpRotate(float from, float to, float a);

    MCAPI static float map(float value, float fromMin, float fromMax, float toMin, float toMax);

    MCAPI static void safeIncrement(int& i);

    MCAPI static float signum(float a);

    MCAPI static float sin(float f);

    MCAPI static float sin(::mce::Radian x);

    MCAPI static float snapRotationToCardinal(float deg);

    MCAPI static float sqrt(float x);

    MCAPI static float wrapDegrees(float input);

    MCAPI static ::mce::Degree wrapDegrees(::mce::Degree input);

    MCAPI static float wrapRadians(float angle);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<float[]> mSin();

    MCAPI static float const& mSinScale();
    // NOLINTEND
};

} // namespace mce
