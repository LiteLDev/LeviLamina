#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/level/levelgen/v2/OverrideState.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionIdentifier;
// clang-format on

namespace br::worldgen {

struct SpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // SpawnerData inner types declare
    // clang-format off
    struct Brightness;
    struct Population;
    // clang-format on

    // SpawnerData inner types define
    struct Population {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> surface;
        ::ll::TypedStorage<2, 2, short> underground;
        // NOLINTEND
    };

    struct Brightness {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> min;
        ::ll::TypedStorage<2, 2, short> max;
        ::ll::TypedStorage<1, 1, bool>  raw;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                            entity;
    ::ll::TypedStorage<2, 2, short>                                                    minCount;
    ::ll::TypedStorage<2, 2, short>                                                    maxCount;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            surface;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            underground;
    ::ll::TypedStorage<1, 1, ::br::worldgen::OverrideState>                            underwater;
    ::ll::TypedStorage<2, 6, ::std::optional<::br::worldgen::SpawnerData::Population>> population;
    ::ll::TypedStorage<2, 8, ::std::optional<::br::worldgen::SpawnerData::Brightness>> brightness;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnerData& operator=(SpawnerData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnerData(::br::worldgen::SpawnerData const&);

    MCAPI SpawnerData(::br::worldgen::SpawnerData&&);

    MCAPI ::br::worldgen::SpawnerData inRawBrightness(short minBrightness, short maxBrightness) const;

    MCAPI ::br::worldgen::SpawnerData spawnsOnSurface(::br::worldgen::OverrideState state) const;

    MCAPI ::br::worldgen::SpawnerData spawnsUnderground(::br::worldgen::OverrideState state) const;

    MCAPI ::br::worldgen::SpawnerData withPopulation(short surfacePop, short undergroundPop) const;

    MCAPI ~SpawnerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::SpawnerData const&);

    MCAPI void* $ctor(::br::worldgen::SpawnerData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
