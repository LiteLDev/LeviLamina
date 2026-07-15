#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/registry/WellKnownTagID.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

struct WellKnownBiomeTags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> OCEAN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> PLAINS_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> DESERT_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> JUNGLE_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> TAIGA_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> EXTREME_HILLS_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> FROZEN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> COLD_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> SWAMP_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> FLOWER_FOREST_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> FOREST_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> BIRCH_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> HILLS_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> MUTATED_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> DEEP_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> MESA_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> ICE_PLAINS_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> ICE_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> MOUNTAIN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> RARE_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> NO_LEGACY_WORLDGEN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> OVERWORLD_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> FOREST_GEN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> PALE_GARDEN_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> MEADOW_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> SLIME_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> SWAMP_WATER_HUGE_MUSHROOM_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> FAST_FISHING_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> HIGH_SEAS_TAG_ID;
    ::ll::TypedStorage<8, 24, ::WellKnownTagID> SURFACE_MINESHAFT_TAG_ID;
    // NOLINTEND

public:
    // prevent constructor by default
    WellKnownBiomeTags();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WellKnownBiomeTags(
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& FAST_FISHING_TAG_HASH();

    MCAPI static ::HashedString const& HIGH_SEAS_TAG_HASH();

    MCAPI static ::HashedString const& OCEAN_TAG_HASH();

    MCAPI static ::HashedString const& SLIME_TAG_HASH();

    MCAPI static ::HashedString const& SURFACE_MINESHAFT_TAG_HASH();

    MCAPI static ::HashedString const& SWAMP_WATER_HUGE_MUSHROOM_TAG_HASH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry);
    // NOLINTEND
};
