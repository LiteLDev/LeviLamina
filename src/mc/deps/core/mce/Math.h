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
    // prevent constructor by default
    Math& operator=(Math const&);
    Math(Math const&);
    Math();

public:
    // NOLINTBEGIN
    MCAPI static float absMax(float a, float b);

    MCAPI static float approach(float current, float target, float increment);

    MCAPI static float approachDegrees(float current, float target, float increment);

    MCAPI static struct mce::Radian atan(float x);

    MCAPI static struct mce::Radian atan2(float dy, float dx);

    MCAPI static int ceil(float v);

    MCAPI static float clamp(float, float, float);

    MCAPI static int clamp(int, int, int);

    MCAPI static float clampRotate(float current, float target, float maxDelta);

    MCAPI static float clampedLerp(float min, float max, float factor);

    MCAPI static double clampedMap(double, double, double, double, double);

    MCAPI static float clampedMap(float value, float, float, float, float);

    MCAPI static float cos(float f);

    MCAPI static float cos(struct mce::Radian x);

    MCAPI static float degreesDifferenceAbs(float angleA, float angleB);

    MCAPI static bool doubleEqualsEpsilon(double a, double b);

    MCAPI static float fastInvSqrt(float x);

    MCAPI static uint fastRandom();

    MCAPI static bool floatEqualsEpsilon(float a, float b, float limit);

    MCAPI static int floor(float v);

    MCAPI static float hermiteBlend(float t);

    MCAPI static float invSqrt(float x);

    MCAPI static float inverseLerp(float min, float max, float value);

    MCAPI static bool isNan(double d);

    MCAPI static bool isNan(float f);

    MCAPI static bool isWrappedRotationEpsilonEqual(float, float, float epsilon);

    MCAPI static float lerpRotate(float from, float to, float a);

    MCAPI static float map(float value, float, float, float, float);

    MCAPI static void safeIncrement(int& i);

    MCAPI static float signum(float a);

    MCAPI static float sin(float f);

    MCAPI static float sin(struct mce::Radian x);

    MCAPI static float snapRotationToCardinal(float deg);

    MCAPI static float sqrt(float x);

    MCAPI static float wrapDegrees(float input);

    MCAPI static struct mce::Degree wrapDegrees(struct mce::Degree input);

    MCAPI static float wrapRadians(float angle);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const mSinScale;

    MCAPI static float mSin[];

    // NOLINTEND
};

}; // namespace mce
