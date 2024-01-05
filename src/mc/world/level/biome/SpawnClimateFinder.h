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
    // symbol:
    // ??0SpawnClimateFinder@@QEAA@V?$vector@UClimateParameters@@V?$allocator@UClimateParameters@@@std@@@std@@AEBUOverworldNoises3d@@AEBVDimensionHeightRange@@@Z
    MCAPI
    SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&);

    // symbol: ?findSpawnPosition@SpawnClimateFinder@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos findSpawnPosition() const;

    // symbol: ??1SpawnClimateFinder@@QEAA@XZ
    MCAPI ~SpawnClimateFinder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateClimateFitness@SpawnClimateFinder@@AEBA_JVBlockPos@@@Z
    MCAPI int64 _calculateClimateFitness(class BlockPos pos) const;

    // symbol: ?_radialSearch@SpawnClimateFinder@@AEBA?AUResultDetails@1@U21@HH@Z
    MCAPI struct SpawnClimateFinder::ResultDetails
    _radialSearch(struct SpawnClimateFinder::ResultDetails workingData, int, int) const;

    // NOLINTEND
};
