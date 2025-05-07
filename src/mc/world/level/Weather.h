#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
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

    // vIndex: 26
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int calcSnowBlockDepth(::BlockSource& region, ::BlockPos const& pos, int maxLayerDepth) const;

    MCNAPI bool canPlaceTopSnow(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        bool              checkSnowDepthLevel,
        bool              newHeightAfterPlacement,
        int*              fromFallingSnow
    ) const;

    MCNAPI bool isPrecipitatingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool isRainingAt(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void serverTick();

    MCNAPI void stop();

    MCNAPI bool
    tryToPlaceTopSnow(::BlockSource& region, ::BlockPos const& pos, bool fromFallingSnow, bool fillLowerNeighborsFirst);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int calcLightningCycleTime(::IRandom& random);

    MCNAPI static int calcRainCycleTime(::IRandom& random);

    MCNAPI static void rebuildTopSnowToDepth(::BlockSource& region, ::BlockPos const& testPos, int desiredDepth);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
