#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
namespace mce { struct Radian; }
// clang-format on

namespace mce::Math {
// functions
// NOLINTBEGIN
MCAPI_S ::mce::Radian atan2(float dy, float dx);

MCAPI float clamp(float v, float low, float high);

MCAPI int clamp(int v, int low, int high);

MCAPI float clampRotate(float current, float target, float maxDelta);

MCAPI float cos(float f);

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

MCAPI float lerpRotate(float from, float to, float alpha);

MCAPI_S float sin(float f);

MCAPI float wrapDegrees(float input);

MCAPI ::mce::Degree wrapDegrees(::mce::Degree input);

MCAPI float wrapRadians(float angle);
// NOLINTEND

} // namespace mce::Math
