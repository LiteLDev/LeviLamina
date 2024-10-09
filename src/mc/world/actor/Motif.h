#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        MCAPI void clear();

        MCAPI class Motif const& getMotifByName(std::string const& name) const;

        MCAPI void init(class BaseGameVersion const& baseGameVersion);

        MCAPI static class Motif::Registry& get();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI std::vector<class Motif const*> _getBaseMotifs() const;

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
    MCAPI Motif(std::string name, int w, int h, glm::vec4 UVs, bool isPublic, bool isSplitMeshPainting);

    MCAPI std::string const getName() const;

    MCAPI static class Motif const mAlban;

    MCAPI static class Motif const mAztec;

    MCAPI static class Motif const mAztec2;

    MCAPI static class Motif const mBackyard;

    MCAPI static class Motif const mBaroque;

    MCAPI static class Motif const mBomb;

    MCAPI static class Motif const mBouquet;

    MCAPI static class Motif const mBurningSkull;

    MCAPI static class Motif const mBust;

    MCAPI static class Motif const mCavebird;

    MCAPI static class Motif const mChainging;

    MCAPI static class Motif const mCotan;

    MCAPI static class Motif const mCourbet;

    MCAPI static class Motif const mCreebet;

    MCAPI static class Motif const& mDefaultImage;

    MCAPI static class Motif const mDonkeyKong;

    MCAPI static class Motif const mEarth;

    MCAPI static class Motif const mEndboss;

    MCAPI static class Motif const mFern;

    MCAPI static class Motif const mFighters;

    MCAPI static class Motif const mFinding;

    MCAPI static class Motif const mFire;

    MCAPI static class Motif const mGraham;

    MCAPI static class Motif const mHumble;

    MCAPI static class Motif const mKebab;

    MCAPI static class Motif const mLowmist;

    MCAPI static class Motif const mMatch;

    MCAPI static class Motif const mMeditative;

    MCAPI static class Motif const mOrb;

    MCAPI static class Motif const mOwlemons;

    MCAPI static class Motif const mPassage;

    MCAPI static class Motif const mPigscene;

    MCAPI static class Motif const mPlant;

    MCAPI static class Motif const mPointer;

    MCAPI static class Motif const mPond;

    MCAPI static class Motif const mPool;

    MCAPI static class Motif const mPrairieRide;

    MCAPI static class Motif const mSea;

    MCAPI static class Motif const mSkeleton;

    MCAPI static class Motif const mSkullAndRoses;

    MCAPI static class Motif const mStage;

    MCAPI static class Motif const mSunflowers;

    MCAPI static class Motif const mSunset;

    MCAPI static class Motif const mTides;

    MCAPI static class Motif const mUnpacked;

    MCAPI static class Motif const mVoid;

    MCAPI static class Motif const mWanderer;

    MCAPI static class Motif const mWasteland;

    MCAPI static class Motif const mWater;

    MCAPI static class Motif const mWind;

    MCAPI static class Motif const mWither;

    // NOLINTEND
};
