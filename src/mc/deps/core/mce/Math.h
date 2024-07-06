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
    // symbol: ?absMax@Math@mce@@SAMMM@Z
    MCAPI static float absMax(float a, float b);

    // symbol: ?approach@Math@mce@@SAMMMM@Z
    MCAPI static float approach(float current, float target, float increment);

    // symbol: ?approachDegrees@Math@mce@@SAMMMM@Z
    MCAPI static float approachDegrees(float current, float target, float increment);

    // symbol: ?atan@Math@mce@@SA?AURadian@2@M@Z
    MCAPI static struct mce::Radian atan(float x);

    // symbol: ?atan2@Math@mce@@SA?AURadian@2@MM@Z
    MCAPI static struct mce::Radian atan2(float dy, float dx);

    // symbol: ?ceil@Math@mce@@SAHM@Z
    MCAPI static int ceil(float v);

    // symbol: ?clamp@Math@mce@@SAMMMM@Z
    MCAPI static float clamp(float, float, float);

    // symbol: ?clamp@Math@mce@@SAHHHH@Z
    MCAPI static int clamp(int, int, int);

    // symbol: ?clampRotate@Math@mce@@SAMMMM@Z
    MCAPI static float clampRotate(float current, float target, float maxDelta);

    // symbol: ?clampedLerp@Math@mce@@SAMMMM@Z
    MCAPI static float clampedLerp(float min, float max, float factor);

    // symbol: ?clampedMap@Math@mce@@SANNNNNN@Z
    MCAPI static double clampedMap(double, double, double, double, double);

    // symbol: ?clampedMap@Math@mce@@SAMMMMMM@Z
    MCAPI static float clampedMap(float value, float, float, float, float);

    // symbol: ?cos@Math@mce@@SAMM@Z
    MCAPI static float cos(float f);

    // symbol: ?cos@Math@mce@@SAMURadian@2@@Z
    MCAPI static float cos(struct mce::Radian x);

    // symbol: ?degreesDifferenceAbs@Math@mce@@SAMMM@Z
    MCAPI static float degreesDifferenceAbs(float angleA, float angleB);

    // symbol: ?doubleEqualsEpsilon@Math@mce@@SA_NNN@Z
    MCAPI static bool doubleEqualsEpsilon(double a, double b);

    // symbol: ?fastInvSqrt@Math@mce@@SAMM@Z
    MCAPI static float fastInvSqrt(float x);

    // symbol: ?fastRandom@Math@mce@@SAIXZ
    MCAPI static uint fastRandom();

    // symbol: ?floatEqualsEpsilon@Math@mce@@SA_NMMM@Z
    MCAPI static bool floatEqualsEpsilon(float a, float b, float limit);

    // symbol: ?floor@Math@mce@@SAHM@Z
    MCAPI static int floor(float v);

    // symbol: ?hermiteBlend@Math@mce@@SAMM@Z
    MCAPI static float hermiteBlend(float t);

    // symbol: ?invSqrt@Math@mce@@SAMM@Z
    MCAPI static float invSqrt(float x);

    // symbol: ?inverseLerp@Math@mce@@SAMMMM@Z
    MCAPI static float inverseLerp(float min, float max, float value);

    // symbol: ?isNan@Math@mce@@SA_NN@Z
    MCAPI static bool isNan(double d);

    // symbol: ?isNan@Math@mce@@SA_NM@Z
    MCAPI static bool isNan(float f);

    // symbol: ?isWrappedRotationEpsilonEqual@Math@mce@@SA_NMMM@Z
    MCAPI static bool isWrappedRotationEpsilonEqual(float, float, float epsilon);

    // symbol: ?lerpRotate@Math@mce@@SAMMMM@Z
    MCAPI static float lerpRotate(float from, float to, float a);

    // symbol: ?map@Math@mce@@SAMMMMMM@Z
    MCAPI static float map(float value, float, float, float, float);

    // symbol: ?safeIncrement@Math@mce@@SAXAEAH@Z
    MCAPI static void safeIncrement(int& i);

    // symbol: ?signum@Math@mce@@SAMM@Z
    MCAPI static float signum(float a);

    // symbol: ?sin@Math@mce@@SAMM@Z
    MCAPI static float sin(float f);

    // symbol: ?sin@Math@mce@@SAMURadian@2@@Z
    MCAPI static float sin(struct mce::Radian x);

    // symbol: ?snapRotationToCardinal@Math@mce@@SAMM@Z
    MCAPI static float snapRotationToCardinal(float deg);

    // symbol: ?sqrt@Math@mce@@SAMM@Z
    MCAPI static float sqrt(float x);

    // symbol: ?wrapDegrees@Math@mce@@SAMM@Z
    MCAPI static float wrapDegrees(float input);

    // symbol: ?wrapDegrees@Math@mce@@SA?AUDegree@2@U32@@Z
    MCAPI static struct mce::Degree wrapDegrees(struct mce::Degree input);

    // symbol: ?wrapRadians@Math@mce@@SAMM@Z
    MCAPI static float wrapRadians(float angle);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mSinScale@Math@mce@@0MB
    MCAPI static float const mSinScale;

    // symbol: ?mSin@Math@mce@@0PAMA
    MCAPI static float mSin[];

    // NOLINTEND
};

}; // namespace mce
