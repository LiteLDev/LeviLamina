#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnClimateFinder {
public:
    // SpawnClimateFinder inner types declare
    // clang-format off
    struct ResultDetails;
    // clang-format on

    // SpawnClimateFinder inner types define
    struct ResultDetails {
    public:
        // prevent constructor by default
        ResultDetails& operator=(ResultDetails const&);
        ResultDetails(ResultDetails const&);
        ResultDetails();
    };

public:
    // prevent constructor by default
    SpawnClimateFinder& operator=(SpawnClimateFinder const&);
    SpawnClimateFinder(SpawnClimateFinder const&);
    SpawnClimateFinder();

public:
    // NOLINTBEGIN
    MCAPI
    SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&);

    MCAPI class BlockPos findSpawnPosition() const;

    MCAPI ~SpawnClimateFinder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int64 _calculateClimateFitness(class BlockPos pos) const;

    MCAPI struct SpawnClimateFinder::ResultDetails
    _radialSearch(struct SpawnClimateFinder::ResultDetails workingData, int, int) const;

    // NOLINTEND
};
