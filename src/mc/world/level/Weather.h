#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/LevelEvent.h"

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
    ::ll::UntypedStorage<8, 40> mUnk96b8e1;
    ::ll::UntypedStorage<4, 4>  mUnk56a914;
    ::ll::UntypedStorage<4, 4>  mUnk77cd6e;
    ::ll::UntypedStorage<4, 4>  mUnk1b11d6;
    ::ll::UntypedStorage<4, 4>  mUnkf70e7c;
    ::ll::UntypedStorage<4, 4>  mUnkb0dc77;
    ::ll::UntypedStorage<4, 4>  mUnk551084;
    ::ll::UntypedStorage<4, 4>  mUnk9a8c08;
    ::ll::UntypedStorage<4, 4>  mUnkfbcc49;
    ::ll::UntypedStorage<4, 4>  mUnk4f36f7;
    ::ll::UntypedStorage<8, 8>  mUnka4c948;
    ::ll::UntypedStorage<8, 8>  mUnkc0cfcf;
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

    // vIndex: 25
    virtual void levelEvent(::LevelEvent, ::Vec3 const&, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Weather(::Dimension& d, ::IRandom& random);

    MCAPI int calcSnowBlockDepth(::BlockSource& region, ::BlockPos const& pos, int maxLayerDepth) const;

    MCAPI bool canPlaceTopSnow(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        bool              fromFallingSnow,
        bool              checkSnowDepthLevel,
        int*              newHeightAfterPlacement
    ) const;

    MCFOLD float getFogLevel() const;

    MCAPI float getLightningLevel(float a) const;

    MCAPI float getRainLevel(float a) const;

    MCAPI bool isLightning() const;

    MCAPI bool isPrecipitatingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool isRaining() const;

    MCAPI bool isRainingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool isSnowingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void serverTick();

    MCFOLD void setSkyFlashTime(int flash);

    MCFOLD void setTargetLightningLevel(float lightningLevel);

    MCAPI void setTargetRainLevel(float rainLevel);

    MCAPI void stop();

    MCAPI void tick();

    MCAPI bool
    tryToPlaceTopSnow(::BlockSource& region, ::BlockPos const& pos, bool fromFallingSnow, bool fillLowerNeighborsFirst);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static int calcLightningCycleTime(::IRandom& random);

    MCFOLD static int calcRainCycleTime(::IRandom& random);

    MCAPI static int calcRainDuration(::IRandom& random);

    MCAPI static void rebuildTopSnowToDepth(::BlockSource& region, ::BlockPos const& testPos, int desiredDepth);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& d, ::IRandom& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
