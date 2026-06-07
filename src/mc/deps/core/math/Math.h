#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Radian; }
// clang-format on

namespace mce::Math {
// functions
// NOLINTBEGIN
MCAPI float absMax(float a, float b);

MCAPI float approach(float current, float target, float increment);

MCAPI float approachDegrees(float current, float target, float increment);

MCAPI ::mce::Radian atan(float x);

MCAPI ::mce::Radian atan2(float dy, float dx);

MCAPI int ceil(float v);

MCAPI float clampRotate(float current, float target, float maxDelta);

MCAPI float clampedLerp(float from, float to, float alpha);

MCAPI float clampedMap(float value, float fromMin, float fromMax, float toMin, float toMax);

MCAPI float cos(float f);

MCAPI float cos(::mce::Radian x);

MCAPI float degreesDifference(float angleA, float angleB);

MCAPI float degreesDifferenceAbs(float angleA, float angleB);

MCAPI bool doubleEqualsEpsilon(double a, double b);

MCAPI float easeInBack(float from, float to, float alpha);

MCAPI float easeInBounce(float from, float to, float alpha);

MCAPI float easeInCirc(float from, float to, float alpha);

MCAPI float easeInCubic(float from, float to, float alpha);

MCAPI float easeInElastic(float from, float to, float alpha);

MCAPI float easeInExpo(float from, float to, float alpha);

MCAPI float easeInOutBack(float from, float to, float alpha);

MCAPI float easeInOutBounce(float from, float to, float alpha);

MCAPI float easeInOutCirc(float from, float to, float alpha);

MCAPI float easeInOutCubic(float from, float to, float alpha);

MCAPI float easeInOutElastic(float from, float to, float alpha);

MCAPI float easeInOutExpo(float from, float to, float alpha);

MCAPI float easeInOutQuad(float from, float to, float alpha);

MCAPI float easeInOutQuart(float from, float to, float alpha);

MCAPI float easeInOutQuint(float from, float to, float alpha);

MCAPI float easeInOutSine(float from, float to, float alpha);

MCAPI float easeInQuad(float from, float to, float alpha);

MCAPI float easeInQuart(float from, float to, float alpha);

MCAPI float easeInQuint(float from, float to, float alpha);

MCAPI float easeInSine(float from, float to, float alpha);

MCAPI float easeOutBack(float from, float to, float alpha);

MCAPI float easeOutBounce(float from, float to, float alpha);

MCAPI float easeOutCirc(float from, float to, float alpha);

MCAPI float easeOutCubic(float from, float to, float alpha);

MCAPI float easeOutElastic(float from, float to, float alpha);

MCAPI float easeOutExpo(float from, float to, float alpha);

MCAPI float easeOutQuad(float from, float to, float alpha);

MCAPI float easeOutQuart(float from, float to, float alpha);

MCAPI float easeOutQuint(float from, float to, float alpha);

MCAPI float easeOutSine(float from, float to, float alpha);

MCAPI float fastInvSqrt(float x);

MCAPI bool floatEqualsEpsilon(float a, float b, float limit);

MCAPI int floor(float v);

MCAPI float hermiteBlend(float t);

MCAPI float inverseLerp(float from, float to, float alpha);

MCAPI bool isNan(double d);

MCAPI bool isNan(float f);

MCAPI bool isWrappedRotationEpsilonEqual(float degreeA, float degreeB, float epsilon);

MCAPI float lerpRotate(float from, float to, float alpha);

MCAPI float map(float value, float fromMin, float fromMax, float toMin, float toMax);

MCAPI void safeIncrement(int& i);

MCAPI float signum(float a);

MCAPI float sin(float f);

MCAPI float sin(::mce::Radian x);

MCAPI float snapRotationToCardinal(float deg);

#ifdef LL_PLAT_C
MCAPI float wrap(float numer, float denom);
#endif

MCAPI float wrapDegrees(float input);

MCAPI float wrapRadians(float angle);
// NOLINTEND

} // namespace mce::Math
