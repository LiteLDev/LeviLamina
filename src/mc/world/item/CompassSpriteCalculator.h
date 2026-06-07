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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CompassSpriteCalculator();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CompassSpriteCalculator(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompassSpriteCalculator(
        ::BlockPos (*targetToPointTo)(::BlockSource const*, ::Actor*),
        bool (*isPointingAtTarget)(::BlockSource const*, ::Actor*),
        float rot,
        float rotA
    );

    MCFOLD int getFrame() const;

#ifdef LL_PLAT_C
    MCAPI ::CompassSpriteCalculator& operator=(::CompassSpriteCalculator const& other);
#endif

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

#ifdef LL_PLAT_C
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
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isInLastDeathDimension(::BlockSource const* region, ::Actor* actor);

    MCAPI static bool isInOverworldDimension(::BlockSource const* region, ::Actor*);

    MCAPI static ::BlockPos pointTowardsLastDeathLocation(::BlockSource const* region, ::Actor* actor);

    MCAPI static ::BlockPos pointTowardsSpawnPoint(::BlockSource const* region, ::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockPos (*targetToPointTo)(::BlockSource const*, ::Actor*),
        bool (*isPointingAtTarget)(::BlockSource const*, ::Actor*),
        float rot,
        float rotA
    );
    // NOLINTEND
};
