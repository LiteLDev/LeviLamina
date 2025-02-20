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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka643b6;
    ::ll::UntypedStorage<8, 8> mUnk46d9d2;
    ::ll::UntypedStorage<4, 4> mUnk16b4e4;
    ::ll::UntypedStorage<4, 4> mUnkc84c5a;
    ::ll::UntypedStorage<4, 4> mUnkdb8cd3;
    // NOLINTEND

public:
    // prevent constructor by default
    CompassSpriteCalculator& operator=(CompassSpriteCalculator const&);
    CompassSpriteCalculator(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

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
        ::BlockSource const* lookTowards,
        ::BlockPos const&    x,
        float                z,
        float                yRot,
        float                isZFlipped,
        bool                 spin,
        bool,
        bool instant
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
