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
        ::ll::UntypedStorage<8, 24> mUnk402e1f;
        ::ll::UntypedStorage<8, 24> mUnkfc49c5;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Registry& operator=(Registry const&);
        Registry(Registry const&);
        Registry();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::vector<::Motif const*> _getBaseMotifs() const;
    
        MCNAPI ::std::vector<::Motif const*> _getR21Motifs() const;
    
        MCNAPI ::Motif const& getMotifByName(::std::string const& name) const;
    
        MCNAPI void init(::BaseGameVersion const& baseGameVersion);
        // NOLINTEND
    
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Motif::Registry& get();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke1aa42;
    ::ll::UntypedStorage<4, 4> mUnk6836f0;
    ::ll::UntypedStorage<4, 4> mUnkb22223;
    ::ll::UntypedStorage<4, 16> mUnkcaf965;
    ::ll::UntypedStorage<1, 1> mUnkf1ff0b;
    ::ll::UntypedStorage<1, 1> mUnk5d9ae9;
    // NOLINTEND

public:
    // prevent constructor by default
    Motif& operator=(Motif const&);
    Motif(Motif const&);
    Motif();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Motif const& mAlban();

    MCNAPI static ::Motif const& mAztec();

    MCNAPI static ::Motif const& mAztec2();

    MCNAPI static ::Motif const& mBackyard();

    MCNAPI static ::Motif const& mBaroque();

    MCNAPI static ::Motif const& mBomb();

    MCNAPI static ::Motif const& mBouquet();

    MCNAPI static ::Motif const& mBurningSkull();

    MCNAPI static ::Motif const& mBust();

    MCNAPI static ::Motif const& mCavebird();

    MCNAPI static ::Motif const& mChainging();

    MCNAPI static ::Motif const& mCotan();

    MCNAPI static ::Motif const& mCourbet();

    MCNAPI static ::Motif const& mCreebet();

    MCNAPI static ::Motif const&& mDefaultImage();

    MCNAPI static ::Motif const& mDennis();

    MCNAPI static ::Motif const& mDonkeyKong();

    MCNAPI static ::Motif const& mEarth();

    MCNAPI static ::Motif const& mEndboss();

    MCNAPI static ::Motif const& mFern();

    MCNAPI static ::Motif const& mFighters();

    MCNAPI static ::Motif const& mFinding();

    MCNAPI static ::Motif const& mFire();

    MCNAPI static ::Motif const& mGraham();

    MCNAPI static ::Motif const& mHumble();

    MCNAPI static ::Motif const& mKebab();

    MCNAPI static ::Motif const& mLowmist();

    MCNAPI static ::Motif const& mMatch();

    MCNAPI static ::Motif const& mMeditative();

    MCNAPI static ::Motif const& mOrb();

    MCNAPI static ::Motif const& mOwlemons();

    MCNAPI static ::Motif const& mPassage();

    MCNAPI static ::Motif const& mPigscene();

    MCNAPI static ::Motif const& mPlant();

    MCNAPI static ::Motif const& mPointer();

    MCNAPI static ::Motif const& mPond();

    MCNAPI static ::Motif const& mPool();

    MCNAPI static ::Motif const& mPrairieRide();

    MCNAPI static ::Motif const& mSea();

    MCNAPI static ::Motif const& mSkeleton();

    MCNAPI static ::Motif const& mSkullAndRoses();

    MCNAPI static ::Motif const& mStage();

    MCNAPI static ::Motif const& mSunflowers();

    MCNAPI static ::Motif const& mSunset();

    MCNAPI static ::Motif const& mTides();

    MCNAPI static ::Motif const& mUnpacked();

    MCNAPI static ::Motif const& mVoid();

    MCNAPI static ::Motif const& mWanderer();

    MCNAPI static ::Motif const& mWasteland();

    MCNAPI static ::Motif const& mWater();

    MCNAPI static ::Motif const& mWind();

    MCNAPI static ::Motif const& mWither();
    // NOLINTEND

};
