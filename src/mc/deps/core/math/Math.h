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
MCNAPI_S ::mce::Radian atan2(float dy, float dx);

MCNAPI float clamp(float v, float low, float high);

MCNAPI int clamp(int v, int low, int high);

MCNAPI float clampRotate(float current, float target, float maxDelta);

MCNAPI float cos(float f);

MCNAPI float easeInBack(float from, float to, float alpha);

MCNAPI float easeInBounce(float from, float to, float alpha);

MCNAPI float easeInCirc(float from, float to, float alpha);

MCNAPI float easeInCubic(float from, float to, float alpha);

MCNAPI float easeInElastic(float from, float to, float alpha);

MCNAPI float easeInExpo(float from, float to, float alpha);

MCNAPI float easeInOutBack(float from, float to, float alpha);

MCNAPI float easeInOutBounce(float from, float to, float alpha);

MCNAPI float easeInOutCirc(float from, float to, float alpha);

MCNAPI float easeInOutCubic(float from, float to, float alpha);

MCNAPI float easeInOutElastic(float from, float to, float alpha);

MCNAPI float easeInOutExpo(float from, float to, float alpha);

MCNAPI float easeInOutQuad(float from, float to, float alpha);

MCNAPI float easeInOutQuart(float from, float to, float alpha);

MCNAPI float easeInOutQuint(float from, float to, float alpha);

MCNAPI float easeInOutSine(float from, float to, float alpha);

MCNAPI float easeInQuad(float from, float to, float alpha);

MCNAPI float easeInQuart(float from, float to, float alpha);

MCNAPI float easeInQuint(float from, float to, float alpha);

MCNAPI float easeInSine(float from, float to, float alpha);

MCNAPI float easeOutBack(float from, float to, float alpha);

MCNAPI float easeOutBounce(float from, float to, float alpha);

MCNAPI float easeOutCirc(float from, float to, float alpha);

MCNAPI float easeOutCubic(float from, float to, float alpha);

MCNAPI float easeOutElastic(float from, float to, float alpha);

MCNAPI float easeOutExpo(float from, float to, float alpha);

MCNAPI float easeOutQuad(float from, float to, float alpha);

MCNAPI float easeOutQuart(float from, float to, float alpha);

MCNAPI float easeOutQuint(float from, float to, float alpha);

MCNAPI float easeOutSine(float from, float to, float alpha);

MCNAPI float lerpRotate(float from, float to, float alpha);

MCNAPI_S float sin(float f);

MCNAPI float wrapDegrees(float input);

MCNAPI ::mce::Degree wrapDegrees(::mce::Degree input);

MCNAPI float wrapRadians(float angle);
// NOLINTEND

} // namespace mce::Math
