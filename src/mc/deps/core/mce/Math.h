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
    /**
     * @symbol ?absMax\@Math\@mce\@\@SAMMM\@Z
     */
    MCAPI static float absMax(float, float); // NOLINT
    /**
     * @symbol ?approach\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float approach(float, float, float); // NOLINT
    /**
     * @symbol ?approachDegrees\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float approachDegrees(float, float, float); // NOLINT
    /**
     * @symbol ?atan\@Math\@mce\@\@SA?AURadian\@2\@M\@Z
     */
    MCAPI static struct mce::Radian atan(float); // NOLINT
    /**
     * @symbol ?atan2\@Math\@mce\@\@SA?AURadian\@2\@MM\@Z
     */
    MCAPI static struct mce::Radian atan2(float, float); // NOLINT
    /**
     * @symbol ?ceil\@Math\@mce\@\@SAHM\@Z
     */
    MCAPI static int ceil(float); // NOLINT
    /**
     * @symbol ?clamp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clamp(float, float, float); // NOLINT
    /**
     * @symbol ?clamp\@Math\@mce\@\@SAHHHH\@Z
     */
    MCAPI static int clamp(int, int, int); // NOLINT
    /**
     * @symbol ?clampRotate\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clampRotate(float, float, float); // NOLINT
    /**
     * @symbol ?clampedLerp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float clampedLerp(float, float, float); // NOLINT
    /**
     * @symbol ?clampedMap\@Math\@mce\@\@SAMMMMMM\@Z
     */
    MCAPI static float clampedMap(float, float, float, float, float); // NOLINT
    /**
     * @symbol ?cos\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float cos(float); // NOLINT
    /**
     * @symbol ?cos\@Math\@mce\@\@SAMURadian\@2\@\@Z
     */
    MCAPI static float cos(struct mce::Radian); // NOLINT
    /**
     * @symbol ?degreesDifferenceAbs\@Math\@mce\@\@SAMMM\@Z
     */
    MCAPI static float degreesDifferenceAbs(float, float); // NOLINT
    /**
     * @symbol ?doubleEqualsEpsilon\@Math\@mce\@\@SA_NNN\@Z
     */
    MCAPI static bool doubleEqualsEpsilon(double, double); // NOLINT
    /**
     * @symbol ?fastInvSqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float fastInvSqrt(float); // NOLINT
    /**
     * @symbol ?fastRandom\@Math\@mce\@\@SAIXZ
     */
    MCAPI static unsigned int fastRandom(); // NOLINT
    /**
     * @symbol ?floatEqualsEpsilon\@Math\@mce\@\@SA_NMMM\@Z
     */
    MCAPI static bool floatEqualsEpsilon(float, float, float); // NOLINT
    /**
     * @symbol ?floor\@Math\@mce\@\@SAHM\@Z
     */
    MCAPI static int floor(float); // NOLINT
    /**
     * @symbol ?hermiteBlend\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float hermiteBlend(float); // NOLINT
    /**
     * @symbol ?invSqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float invSqrt(float); // NOLINT
    /**
     * @symbol ?inverseLerp\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float inverseLerp(float, float, float); // NOLINT
    /**
     * @symbol ?isNan\@Math\@mce\@\@SA_NN\@Z
     */
    MCAPI static bool isNan(double); // NOLINT
    /**
     * @symbol ?isNan\@Math\@mce\@\@SA_NM\@Z
     */
    MCAPI static bool isNan(float); // NOLINT
    /**
     * @symbol ?lerpRotate\@Math\@mce\@\@SAMMMM\@Z
     */
    MCAPI static float lerpRotate(float, float, float); // NOLINT
    /**
     * @symbol ?map\@Math\@mce\@\@SAMMMMMM\@Z
     */
    MCAPI static float map(float, float, float, float, float); // NOLINT
    /**
     * @symbol ?safeIncrement\@Math\@mce\@\@SAXAEAH\@Z
     */
    MCAPI static void safeIncrement(int&); // NOLINT
    /**
     * @symbol ?signum\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float signum(float); // NOLINT
    /**
     * @symbol ?sin\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float sin(float); // NOLINT
    /**
     * @symbol ?sin\@Math\@mce\@\@SAMURadian\@2\@\@Z
     */
    MCAPI static float sin(struct mce::Radian); // NOLINT
    /**
     * @symbol ?snapRotationToCardinal\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float snapRotationToCardinal(float); // NOLINT
    /**
     * @symbol ?sqrt\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float sqrt(float); // NOLINT
    /**
     * @symbol ?wrapDegrees\@Math\@mce\@\@SA?AUDegree\@2\@U32\@\@Z
     */
    MCAPI static struct mce::Degree wrapDegrees(struct mce::Degree); // NOLINT
    /**
     * @symbol ?wrapDegrees\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float wrapDegrees(float); // NOLINT
    /**
     * @symbol ?wrapRadians\@Math\@mce\@\@SAMM\@Z
     */
    MCAPI static float wrapRadians(float); // NOLINT

    // private:

private:
    /**
     * @symbol ?mSinScale\@Math\@mce\@\@0MB
     */
    MCAPI static float const mSinScale; // NOLINT
    /**
     * @symbol ?mSin\@Math\@mce\@\@0PAMA
     */
    MCAPI static float mSin[]; // NOLINT
};

}; // namespace mce
