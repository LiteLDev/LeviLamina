#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"

class Motif {
public:
    // prevent constructor by default
    Motif& operator=(Motif const&);
    Motif(Motif const&);
    Motif();

public:
    // NOLINTBEGIN
    // symbol: ??0Motif@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHU?$vec@$03M$0A@@glm@@_N2@Z
    MCAPI Motif(std::string, int, int, struct glm::vec<4, float, 0>, bool, bool);

    // symbol: ?getHeight@Motif@@QEBAHXZ
    MCAPI int getHeight() const;

    // symbol: ?getName@Motif@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const getName() const;

    // symbol: ?getWidth@Motif@@QEBAHXZ
    MCAPI int getWidth() const;

    // symbol: ?isPublic@Motif@@QEBA_NXZ
    MCAPI bool isPublic() const;

    // symbol: ?getAllMotifsAsList@Motif@@SA?AV?$vector@PEBVMotif@@V?$allocator@PEBVMotif@@@std@@@std@@XZ
    MCAPI static std::vector<class Motif const*> getAllMotifsAsList();

    // symbol: ?getMotifByName@Motif@@SAAEBV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Motif const& getMotifByName(std::string const&);

    // symbol: ?mAlban@Motif@@2V1@B
    MCAPI static class Motif const mAlban;

    // symbol: ?mAztec@Motif@@2V1@B
    MCAPI static class Motif const mAztec;

    // symbol: ?mAztec2@Motif@@2V1@B
    MCAPI static class Motif const mAztec2;

    // symbol: ?mBomb@Motif@@2V1@B
    MCAPI static class Motif const mBomb;

    // symbol: ?mBurningSkull@Motif@@2V1@B
    MCAPI static class Motif const mBurningSkull;

    // symbol: ?mBust@Motif@@2V1@B
    MCAPI static class Motif const mBust;

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

    // symbol: ?mFighters@Motif@@2V1@B
    MCAPI static class Motif const mFighters;

    // symbol: ?mFire@Motif@@2V1@B
    MCAPI static class Motif const mFire;

    // symbol: ?mGraham@Motif@@2V1@B
    MCAPI static class Motif const mGraham;

    // symbol: ?mKebab@Motif@@2V1@B
    MCAPI static class Motif const mKebab;

    // symbol: ?mMatch@Motif@@2V1@B
    MCAPI static class Motif const mMatch;

    // symbol: ?mPigscene@Motif@@2V1@B
    MCAPI static class Motif const mPigscene;

    // symbol: ?mPlant@Motif@@2V1@B
    MCAPI static class Motif const mPlant;

    // symbol: ?mPointer@Motif@@2V1@B
    MCAPI static class Motif const mPointer;

    // symbol: ?mPool@Motif@@2V1@B
    MCAPI static class Motif const mPool;

    // symbol: ?mSea@Motif@@2V1@B
    MCAPI static class Motif const mSea;

    // symbol: ?mSkeleton@Motif@@2V1@B
    MCAPI static class Motif const mSkeleton;

    // symbol: ?mSkullAndRoses@Motif@@2V1@B
    MCAPI static class Motif const mSkullAndRoses;

    // symbol: ?mStage@Motif@@2V1@B
    MCAPI static class Motif const mStage;

    // symbol: ?mSunset@Motif@@2V1@B
    MCAPI static class Motif const mSunset;

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
