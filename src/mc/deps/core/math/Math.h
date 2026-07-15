#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::Math {
// functions
// NOLINTBEGIN
MCAPI float clampRotate(float current, float target, float maxDelta);

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
// NOLINTEND

} // namespace mce::Math
