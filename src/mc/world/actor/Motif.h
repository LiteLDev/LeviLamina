#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"

class Motif {
public:
    // Motif inner types declare
    // clang-format off
    class Registry;
    // clang-format on

    // Motif inner types define
    class Registry {
    public:
        // prevent constructor by default
        Registry& operator=(Registry const&);
        Registry(Registry const&);
        Registry();

    public:
        // NOLINTBEGIN
        // symbol: ?clear@Registry@Motif@@QEAAXXZ
        MCAPI void clear();

        // symbol:
        // ?getMotifByName@Registry@Motif@@QEBAAEBV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI class Motif const& getMotifByName(std::string const&) const;

        // symbol: ?init@Registry@Motif@@QEAAXAEBVBaseGameVersion@@@Z
        MCAPI void init(class BaseGameVersion const&);

        // symbol: ?get@Registry@Motif@@SAAEAV12@XZ
        MCAPI static class Motif::Registry& get();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?_getBaseMotifs@Registry@Motif@@AEBA?AV?$vector@PEBVMotif@@V?$allocator@PEBVMotif@@@std@@@std@@XZ
        MCAPI std::vector<class Motif const*> _getBaseMotifs() const;

        // symbol: ?_getR21Motifs@Registry@Motif@@AEBA?AV?$vector@PEBVMotif@@V?$allocator@PEBVMotif@@@std@@@std@@XZ
        MCAPI std::vector<class Motif const*> _getR21Motifs() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Motif& operator=(Motif const&);
    Motif(Motif const&);
    Motif();

public:
    // NOLINTBEGIN
    // symbol: ??0Motif@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHU?$vec@$03M$0A@@glm@@_N2@Z
    MCAPI Motif(std::string, int, int, struct glm::vec<4, float, 0>, bool, bool);

    // symbol: ?getName@Motif@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const getName() const;

    // symbol: ?mAlban@Motif@@2V1@B
    MCAPI static class Motif const mAlban;

    // symbol: ?mAztec@Motif@@2V1@B
    MCAPI static class Motif const mAztec;

    // symbol: ?mAztec2@Motif@@2V1@B
    MCAPI static class Motif const mAztec2;

    // symbol: ?mBackyard@Motif@@2V1@B
    MCAPI static class Motif const mBackyard;

    // symbol: ?mBaroque@Motif@@2V1@B
    MCAPI static class Motif const mBaroque;

    // symbol: ?mBomb@Motif@@2V1@B
    MCAPI static class Motif const mBomb;

    // symbol: ?mBouquet@Motif@@2V1@B
    MCAPI static class Motif const mBouquet;

    // symbol: ?mBurningSkull@Motif@@2V1@B
    MCAPI static class Motif const mBurningSkull;

    // symbol: ?mBust@Motif@@2V1@B
    MCAPI static class Motif const mBust;

    // symbol: ?mCavebird@Motif@@2V1@B
    MCAPI static class Motif const mCavebird;

    // symbol: ?mChainging@Motif@@2V1@B
    MCAPI static class Motif const mChainging;

    // symbol: ?mCotan@Motif@@2V1@B
    MCAPI static class Motif const mCotan;

    // symbol: ?mCourbet@Motif@@2V1@B
    MCAPI static class Motif const mCourbet;

    // symbol: ?mCreebet@Motif@@2V1@B
    MCAPI static class Motif const mCreebet;

    // symbol: ?mDefaultImage@Motif@@2AEBV1@EB
    MCAPI static class Motif const& mDefaultImage;

    // symbol: ?mDonkeyKong@Motif@@2V1@B
    MCAPI static class Motif const mDonkeyKong;

    // symbol: ?mEarth@Motif@@2V1@B
    MCAPI static class Motif const mEarth;

    // symbol: ?mEndboss@Motif@@2V1@B
    MCAPI static class Motif const mEndboss;

    // symbol: ?mFern@Motif@@2V1@B
    MCAPI static class Motif const mFern;

    // symbol: ?mFighters@Motif@@2V1@B
    MCAPI static class Motif const mFighters;

    // symbol: ?mFinding@Motif@@2V1@B
    MCAPI static class Motif const mFinding;

    // symbol: ?mFire@Motif@@2V1@B
    MCAPI static class Motif const mFire;

    // symbol: ?mGraham@Motif@@2V1@B
    MCAPI static class Motif const mGraham;

    // symbol: ?mHumble@Motif@@2V1@B
    MCAPI static class Motif const mHumble;

    // symbol: ?mKebab@Motif@@2V1@B
    MCAPI static class Motif const mKebab;

    // symbol: ?mLowmist@Motif@@2V1@B
    MCAPI static class Motif const mLowmist;

    // symbol: ?mMatch@Motif@@2V1@B
    MCAPI static class Motif const mMatch;

    // symbol: ?mMeditative@Motif@@2V1@B
    MCAPI static class Motif const mMeditative;

    // symbol: ?mOrb@Motif@@2V1@B
    MCAPI static class Motif const mOrb;

    // symbol: ?mOwlemons@Motif@@2V1@B
    MCAPI static class Motif const mOwlemons;

    // symbol: ?mPassage@Motif@@2V1@B
    MCAPI static class Motif const mPassage;

    // symbol: ?mPigscene@Motif@@2V1@B
    MCAPI static class Motif const mPigscene;

    // symbol: ?mPlant@Motif@@2V1@B
    MCAPI static class Motif const mPlant;

    // symbol: ?mPointer@Motif@@2V1@B
    MCAPI static class Motif const mPointer;

    // symbol: ?mPond@Motif@@2V1@B
    MCAPI static class Motif const mPond;

    // symbol: ?mPool@Motif@@2V1@B
    MCAPI static class Motif const mPool;

    // symbol: ?mPrairieRide@Motif@@2V1@B
    MCAPI static class Motif const mPrairieRide;

    // symbol: ?mSea@Motif@@2V1@B
    MCAPI static class Motif const mSea;

    // symbol: ?mSkeleton@Motif@@2V1@B
    MCAPI static class Motif const mSkeleton;

    // symbol: ?mSkullAndRoses@Motif@@2V1@B
    MCAPI static class Motif const mSkullAndRoses;

    // symbol: ?mStage@Motif@@2V1@B
    MCAPI static class Motif const mStage;

    // symbol: ?mSunflowers@Motif@@2V1@B
    MCAPI static class Motif const mSunflowers;

    // symbol: ?mSunset@Motif@@2V1@B
    MCAPI static class Motif const mSunset;

    // symbol: ?mTides@Motif@@2V1@B
    MCAPI static class Motif const mTides;

    // symbol: ?mUnpacked@Motif@@2V1@B
    MCAPI static class Motif const mUnpacked;

    // symbol: ?mVoid@Motif@@2V1@B
    MCAPI static class Motif const mVoid;

    // symbol: ?mWanderer@Motif@@2V1@B
    MCAPI static class Motif const mWanderer;

    // symbol: ?mWasteland@Motif@@2V1@B
    MCAPI static class Motif const mWasteland;

    // symbol: ?mWater@Motif@@2V1@B
    MCAPI static class Motif const mWater;

    // symbol: ?mWind@Motif@@2V1@B
    MCAPI static class Motif const mWind;

    // symbol: ?mWither@Motif@@2V1@B
    MCAPI static class Motif const mWither;

    // NOLINTEND
};
