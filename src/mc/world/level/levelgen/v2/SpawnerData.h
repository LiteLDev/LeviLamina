#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/level/levelgen/v2/OverrideState.h"

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
        ::ll::UntypedStorage<2, 2> mUnk4d3755;
        ::ll::UntypedStorage<2, 2> mUnk228b7a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Population& operator=(Population const&);
        Population(Population const&);
        Population();
    };

    struct Brightness {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk8a1ed4;
        ::ll::UntypedStorage<2, 2> mUnkc0d5be;
        ::ll::UntypedStorage<1, 1> mUnk410fa1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Brightness& operator=(Brightness const&);
        Brightness(Brightness const&);
        Brightness();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk28f776;
    ::ll::UntypedStorage<2, 2>   mUnkd48826;
    ::ll::UntypedStorage<2, 2>   mUnk53d93b;
    ::ll::UntypedStorage<1, 1>   mUnk9ee63e;
    ::ll::UntypedStorage<1, 1>   mUnk82e983;
    ::ll::UntypedStorage<1, 1>   mUnk3a8c6f;
    ::ll::UntypedStorage<2, 6>   mUnk77c063;
    ::ll::UntypedStorage<2, 8>   mUnkbe1424;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnerData& operator=(SpawnerData const&);
    SpawnerData();

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
