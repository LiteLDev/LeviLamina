#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Motive {

public:
    // prevent constructor by default
    Motive& operator=(Motive const&) = delete;
    Motive(Motive const&)            = delete;
    Motive()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getAllMotivesAsList\@Motive\@\@SA?AV?$vector\@PEBVMotive\@\@V?$allocator\@PEBVMotive\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<class Motive const*> getAllMotivesAsList();
    /**
     * @symbol
     * ?getMotiveByName\@Motive\@\@SAAEBV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Motive const& getMotiveByName(std::string const&);
    /**
     * @symbol ?getName\@Motive\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getName() const;
    /**
     * @symbol ?mAlban\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAlban;
    /**
     * @symbol ?mAztec\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAztec;
    /**
     * @symbol ?mAztec2\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mAztec2;
    /**
     * @symbol ?mBomb\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBomb;
    /**
     * @symbol ?mBurningSkull\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBurningSkull;
    /**
     * @symbol ?mBust\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mBust;
    /**
     * @symbol ?mCourbet\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mCourbet;
    /**
     * @symbol ?mCreebet\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mCreebet;
    /**
     * @symbol ?mDefaultImage\@Motive\@\@2AEBV1\@EB
     */
    MCAPI static class Motive const& mDefaultImage;
    /**
     * @symbol ?mDonkeyKong\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mDonkeyKong;
    /**
     * @symbol ?mEarth\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mEarth;
    /**
     * @symbol ?mFighters\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mFighters;
    /**
     * @symbol ?mFire\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mFire;
    /**
     * @symbol ?mGraham\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mGraham;
    /**
     * @symbol ?mKebab\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mKebab;
    /**
     * @symbol ?mMatch\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mMatch;
    /**
     * @symbol ?mPigscene\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPigscene;
    /**
     * @symbol ?mPlant\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPlant;
    /**
     * @symbol ?mPointer\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPointer;
    /**
     * @symbol ?mPool\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mPool;
    /**
     * @symbol ?mSea\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSea;
    /**
     * @symbol ?mSkeleton\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSkeleton;
    /**
     * @symbol ?mSkullAndRoses\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSkullAndRoses;
    /**
     * @symbol ?mStage\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mStage;
    /**
     * @symbol ?mSunset\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mSunset;
    /**
     * @symbol ?mVoid\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mVoid;
    /**
     * @symbol ?mWanderer\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWanderer;
    /**
     * @symbol ?mWasteland\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWasteland;
    /**
     * @symbol ?mWater\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWater;
    /**
     * @symbol ?mWind\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWind;
    /**
     * @symbol ?mWither\@Motive\@\@2V1\@B
     */
    MCAPI static class Motive const mWither;
    // NOLINTEND
};
