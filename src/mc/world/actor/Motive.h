#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Motive {

public:
    // prevent constructor by default
    Motive& operator=(Motive const&) = delete;
    Motive(Motive const&)            = delete;
    Motive()                         = delete;

public:
    /**
     * @symbol ?getName\@Motive\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getName() const; // NOLINT
    /**
     * @symbol
     * ?getAllMotivesAsList\@Motive\@\@SA?AV?$vector\@PEBVMotive\@\@V?$allocator\@PEBVMotive\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<class Motive const*> getAllMotivesAsList(); // NOLINT
    /**
     * @symbol
     * ?getMotiveByName\@Motive\@\@SAAEBV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Motive const& getMotiveByName(std::string const&); // NOLINT
    /**
     * @symbol ?mAlban\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAlban; // NOLINT
    /**
     * @symbol ?mAztec\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAztec; // NOLINT
    /**
     * @symbol ?mAztec2\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAztec2; // NOLINT
    /**
     * @symbol ?mBomb\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBomb; // NOLINT
    /**
     * @symbol ?mBurningSkull\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBurningSkull; // NOLINT
    /**
     * @symbol ?mBust\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBust; // NOLINT
    /**
     * @symbol ?mCourbet\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mCourbet; // NOLINT
    /**
     * @symbol ?mCreebet\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mCreebet; // NOLINT
    /**
     * @symbol ?mDefaultImage\@Motive\@\@2AEBV1\@EB
     */
    MCAPI static class Motive const& mDefaultImage; // NOLINT
    /**
     * @symbol ?mDonkeyKong\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mDonkeyKong; // NOLINT
    /**
     * @symbol ?mEarth\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mEarth; // NOLINT
    /**
     * @symbol ?mFighters\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mFighters; // NOLINT
    /**
     * @symbol ?mFire\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mFire; // NOLINT
    /**
     * @symbol ?mGraham\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mGraham; // NOLINT
    /**
     * @symbol ?mKebab\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mKebab; // NOLINT
    /**
     * @symbol ?mMatch\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mMatch; // NOLINT
    /**
     * @symbol ?mPigscene\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPigscene; // NOLINT
    /**
     * @symbol ?mPlant\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPlant; // NOLINT
    /**
     * @symbol ?mPointer\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPointer; // NOLINT
    /**
     * @symbol ?mPool\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPool; // NOLINT
    /**
     * @symbol ?mSea\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSea; // NOLINT
    /**
     * @symbol ?mSkeleton\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSkeleton; // NOLINT
    /**
     * @symbol ?mSkullAndRoses\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSkullAndRoses; // NOLINT
    /**
     * @symbol ?mStage\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mStage; // NOLINT
    /**
     * @symbol ?mSunset\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSunset; // NOLINT
    /**
     * @symbol ?mVoid\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mVoid; // NOLINT
    /**
     * @symbol ?mWanderer\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWanderer; // NOLINT
    /**
     * @symbol ?mWasteland\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWasteland; // NOLINT
    /**
     * @symbol ?mWater\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWater; // NOLINT
    /**
     * @symbol ?mWind\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWind; // NOLINT
    /**
     * @symbol ?mWither\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWither; // NOLINT
};
