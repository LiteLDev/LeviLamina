#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class Motif {
public:
    // Motif inner types declare
    // clang-format off
    class Registry;
    // clang-format on

    // Motif inner types define
    class Registry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mMotifs;
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mSplitMeshMotifs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::vector<::Motif const*> _getBaseMotifs() const;

        MCAPI ::std::vector<::Motif const*> _getR21Motifs() const;

        MCAPI ::Motif const& getMotifByName(::std::string const& name) const;

        MCAPI void init(::BaseGameVersion const& baseGameVersion);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Motif::Registry& get();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
    ::ll::TypedStorage<4, 4, int const>            mWidth;
    ::ll::TypedStorage<4, 4, int const>            mHeight;
    ::ll::TypedStorage<4, 16, ::glm::vec4 const>   mUVs;
    ::ll::TypedStorage<1, 1, bool const>           mIsPublic;
    ::ll::TypedStorage<1, 1, bool const>           mIsSplitMeshPainting;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Motif const& mAlban();

    MCAPI static ::Motif const& mAztec();

    MCAPI static ::Motif const& mAztec2();

    MCAPI static ::Motif const& mBackyard();

    MCAPI static ::Motif const& mBaroque();

    MCAPI static ::Motif const& mBomb();

    MCAPI static ::Motif const& mBouquet();

    MCAPI static ::Motif const& mBurningSkull();

    MCAPI static ::Motif const& mBust();

    MCAPI static ::Motif const& mCavebird();

    MCAPI static ::Motif const& mChainging();

    MCAPI static ::Motif const& mCotan();

    MCAPI static ::Motif const& mCourbet();

    MCAPI static ::Motif const& mCreebet();

    MCAPI static ::Motif const&& mDefaultImage();

    MCAPI static ::Motif const& mDennis();

    MCAPI static ::Motif const& mDonkeyKong();

    MCAPI static ::Motif const& mEarth();

    MCAPI static ::Motif const& mEndboss();

    MCAPI static ::Motif const& mFern();

    MCAPI static ::Motif const& mFighters();

    MCAPI static ::Motif const& mFinding();

    MCAPI static ::Motif const& mFire();

    MCAPI static ::Motif const& mGraham();

    MCAPI static ::Motif const& mHumble();

    MCAPI static ::Motif const& mKebab();

    MCAPI static ::Motif const& mLowmist();

    MCAPI static ::Motif const& mMatch();

    MCAPI static ::Motif const& mMeditative();

    MCAPI static ::Motif const& mOrb();

    MCAPI static ::Motif const& mOwlemons();

    MCAPI static ::Motif const& mPassage();

    MCAPI static ::Motif const& mPigscene();

    MCAPI static ::Motif const& mPlant();

    MCAPI static ::Motif const& mPointer();

    MCAPI static ::Motif const& mPond();

    MCAPI static ::Motif const& mPool();

    MCAPI static ::Motif const& mPrairieRide();

    MCAPI static ::Motif const& mSea();

    MCAPI static ::Motif const& mSkeleton();

    MCAPI static ::Motif const& mSkullAndRoses();

    MCAPI static ::Motif const& mStage();

    MCAPI static ::Motif const& mSunflowers();

    MCAPI static ::Motif const& mSunset();

    MCAPI static ::Motif const& mTides();

    MCAPI static ::Motif const& mUnpacked();

    MCAPI static ::Motif const& mVoid();

    MCAPI static ::Motif const& mWanderer();

    MCAPI static ::Motif const& mWasteland();

    MCAPI static ::Motif const& mWater();

    MCAPI static ::Motif const& mWind();

    MCAPI static ::Motif const& mWither();
    // NOLINTEND
};
