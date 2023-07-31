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
    Math& operator=(Math const&) = delete;
    Math(Math const&)            = delete;
    Math()                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?absMax\@Math\@mce\@\@SAMMM\@Z
     */
    MCAPI static float absMax(float, float);
    /**
     * @symbol ?approach\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float approach(float, float, float);
    /**
     * @symbol ?approachDegrees\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float approachDegrees(float, float, float);
    /**
     * @symbol ?atan\@Math\@mce\@\@SA?AURadian\@2\@M\@Z
     */
    MCAPI static struct mce::Radian atan(float);
    /**
     * @symbol ?atan2\@Math\@mce\@\@SA?AURadian\@2\@MM\@Z
     */
    MCAPI static struct mce::Radian atan2(float, float);
    /**
     * @symbol ?ceil\@Math\@mce\@\@SAHM\@Z
     */
    MCAPI static int ceil(float);
    /**
     * @symbol ?clamp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clamp(float, float, float);
    /**
     * @symbol ?clamp\@Math\@mce\@\@SAHHHH\@Z
     */
    MCAPI static int clamp(int, int, int);
    /**
     * @symbol ?clampRotate\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clampRotate(float, float, float);
    /**
     * @symbol ?clampedLerp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clampedLerp(float, float, float);
    /**
     * @symbol ?clampedMap\@Math\@mce\@\@SAMMMMMM\@Z
     */
    MCAPI static float clampedMap(float, float, float, float, float);
    /**
     * @symbol ?cos\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float cos(float);
    /**
     * @symbol ?cos\@Math\@mce\@\@SAMURadian\@2\@\@Z
     */
    MCAPI static float cos(struct mce::Radian);
    /**
     * @symbol ?degreesDifferenceAbs\@Math\@mce\@\@SAMMM\@Z
     */
    MCAPI static float degreesDifferenceAbs(float, float);
    /**
     * @symbol ?doubleEqualsEpsilon\@Math\@mce\@\@SA_NNN\@Z
     */
    MCAPI static bool doubleEqualsEpsilon(double, double);
    /**
     * @symbol ?fastInvSqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float fastInvSqrt(float);
    /**
     * @symbol ?fastRandom\@Math\@mce\@\@SAIXZ
     */
    MCAPI static unsigned int fastRandom();
    /**
     * @symbol ?floatEqualsEpsilon\@Math\@mce\@\@SA_NMMM\@Z
     */
    MCAPI static bool floatEqualsEpsilon(float, float, float);
    /**
     * @symbol ?floor\@Math\@mce\@\@SAHM\@Z
     */
    MCAPI static int floor(float);
    /**
     * @symbol ?hermiteBlend\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float hermiteBlend(float);
    /**
     * @symbol ?invSqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float invSqrt(float);
    /**
     * @symbol ?inverseLerp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float inverseLerp(float, float, float);
    /**
     * @symbol ?isNan\@Math\@mce\@\@SA_NN\@Z
     */
    MCAPI static bool isNan(double);
    /**
     * @symbol ?isNan\@Math\@mce\@\@SA_NM\@Z
     */
    MCAPI static bool isNan(float);
    /**
     * @symbol ?lerpRotate\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float lerpRotate(float, float, float);
    /**
     * @symbol ?map\@Math\@mce\@\@SAMMMMMM\@Z
     */
    MCAPI static float map(float, float, float, float, float);
    /**
     * @symbol ?safeIncrement\@Math\@mce\@\@SAXAEAH\@Z
     */
    MCAPI static void safeIncrement(int&);
    /**
     * @symbol ?signum\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float signum(float);
    /**
     * @symbol ?sin\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float sin(float);
    /**
     * @symbol ?sin\@Math\@mce\@\@SAMURadian\@2\@\@Z
     */
    MCAPI static float sin(struct mce::Radian);
    /**
     * @symbol ?snapRotationToCardinal\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float snapRotationToCardinal(float);
    /**
     * @symbol ?sqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float sqrt(float);
    /**
     * @symbol ?wrapDegrees\@Math\@mce\@\@SA?AUDegree\@2\@U32\@\@Z
     */
    MCAPI static struct mce::Degree wrapDegrees(struct mce::Degree);
    /**
     * @symbol ?wrapDegrees\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float wrapDegrees(float);
    /**
     * @symbol ?wrapRadians\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float wrapRadians(float);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mSinScale\@Math\@mce\@\@0MB
     */
    MCAPI static float const mSinScale;
    /**
     * @symbol ?mSin\@Math\@mce\@\@0PAMA
     */
    MCAPI static float mSin[];
    // NOLINTEND
};

}; // namespace mce
