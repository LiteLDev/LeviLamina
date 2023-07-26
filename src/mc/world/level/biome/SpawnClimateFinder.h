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
        ResultDetails& operator=(ResultDetails const&) = delete;
        ResultDetails(ResultDetails const&)            = delete;
        ResultDetails()                                = delete;
    };

public:
    // prevent constructor by default
    SpawnClimateFinder& operator=(SpawnClimateFinder const&) = delete;
    SpawnClimateFinder(SpawnClimateFinder const&)            = delete;
    SpawnClimateFinder()                                     = delete;

public:
    /**
     * @symbol
     * ??0SpawnClimateFinder\@\@QEAA\@V?$vector\@UClimateParameters\@\@V?$allocator\@UClimateParameters\@\@\@std\@\@\@std\@\@AEBUOverworldNoises3d\@\@AEBVDimensionHeightRange\@\@\@Z
     */
    MCAPI
    SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&); // NOLINT
    /**
     * @symbol ?findSpawnPosition\@SpawnClimateFinder\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos findSpawnPosition() const; // NOLINT
    /**
     * @symbol ??1SpawnClimateFinder\@\@QEAA\@XZ
     */
    MCAPI ~SpawnClimateFinder(); // NOLINT

    // private:
    /**
     * @symbol ?_calculateClimateFitness\@SpawnClimateFinder\@\@AEBA_JVBlockPos\@\@\@Z
     */
    MCAPI __int64 _calculateClimateFitness(class BlockPos) const; // NOLINT
    /**
     * @symbol ?_radialSearch\@SpawnClimateFinder\@\@AEBA?AUResultDetails\@1\@U21\@HH\@Z
     */
    MCAPI struct SpawnClimateFinder::ResultDetails
    _radialSearch(struct SpawnClimateFinder::ResultDetails, int, int) const; // NOLINT

private:
};
