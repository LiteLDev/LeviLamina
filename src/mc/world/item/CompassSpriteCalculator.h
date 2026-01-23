#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class CompassSpriteCalculator {
public:
    // CompassSpriteCalculator inner types define
    using IsPointingAtTargetFunction = bool (*)(::BlockSource const*, ::Actor*);

    using PointToTargetFunction = ::BlockPos (*)(::BlockSource const*, ::Actor*);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockPos (*)(::BlockSource const*, ::Actor*)> mTargetToPointTo;
    ::ll::TypedStorage<8, 8, bool (*)(::BlockSource const*, ::Actor*)>       mIsPointingAtTarget;
    ::ll::TypedStorage<4, 4, int>                                            mFrame;
    ::ll::TypedStorage<4, 4, float>                                          mRot;
    ::ll::TypedStorage<4, 4, float>                                          mRotA;
    ::ll::TypedStorage<4, 4, int>                                            mLastUpdatedAt;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int update(::Actor& actor, bool instant);

    MCAPI int updateFromPosition(
        ::BlockSource const* region,
        ::Actor*             actor,
        float                x,
        float                z,
        float                yRot,
        bool                 isZFlipped,
        bool                 instant
    );

    MCAPI int updateFromPosition(
        ::BlockSource const*,
        ::BlockPos const& lookTowards,
        float             x,
        float             z,
        float             yRot,
        bool              isZFlipped,
        bool              instant,
        bool              spin
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isInLastDeathDimension(::BlockSource const* region, ::Actor* actor);

    MCAPI static bool isInOverworldDimension(::BlockSource const* region, ::Actor*);

    MCAPI static ::BlockPos pointTowardsLastDeathLocation(::BlockSource const* region, ::Actor* actor);

    MCAPI static ::BlockPos pointTowardsSpawnPoint(::BlockSource const* region, ::Actor*);
    // NOLINTEND
};
