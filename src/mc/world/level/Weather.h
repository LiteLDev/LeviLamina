#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class IRandom;
class Vec3;
// clang-format on

class Weather : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise> mNoise;
    ::ll::TypedStorage<4, 4, int>                   mTick;
    ::ll::TypedStorage<4, 4, float>                 mOldRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mTargetRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mOldLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mTargetLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mFogLevel;
    ::ll::TypedStorage<4, 4, int>                   mSkyFlashTime;
    ::ll::TypedStorage<8, 8, ::Dimension&>          mDimension;
    ::ll::TypedStorage<8, 8, ::IRandom&>            mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    Weather& operator=(Weather const&);
    Weather(Weather const&);
    Weather();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Weather() /*override*/ = default;

    // vIndex: 26
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const&, int data) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int calcSnowBlockDepth(::BlockSource& region, ::BlockPos const& pos, int maxLayerDepth) const;

    MCAPI bool canPlaceTopSnow(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        bool              fromFallingSnow,
        bool              checkSnowDepthLevel,
        int*              newHeightAfterPlacement
    ) const;

    MCAPI bool isPrecipitatingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool isRainingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void serverTick();

    MCAPI void stop();

    MCAPI bool
    tryToPlaceTopSnow(::BlockSource& region, ::BlockPos const& pos, bool fromFallingSnow, bool fillLowerNeighborsFirst);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static int calcLightningCycleTime(::IRandom& random);

    MCFOLD static int calcRainCycleTime(::IRandom& random);

    MCAPI static void rebuildTopSnowToDepth(::BlockSource& region, ::BlockPos const& testPos, int desiredDepth);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const&, int data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
