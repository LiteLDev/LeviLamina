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
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0SpawnClimateFinder\@\@QEAA\@V?$vector\@UClimateParameters\@\@V?$allocator\@UClimateParameters\@\@\@std\@\@\@std\@\@AEBUOverworldNoises3d\@\@AEBVDimensionHeightRange\@\@\@Z
     */
    MCAPI
    SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&);
    /**
     * @symbol ?findSpawnPosition\@SpawnClimateFinder\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol ??1SpawnClimateFinder\@\@QEAA\@XZ
     */
    MCAPI ~SpawnClimateFinder();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateClimateFitness\@SpawnClimateFinder\@\@AEBA_JVBlockPos\@\@\@Z
     */
    MCAPI int64_t _calculateClimateFitness(class BlockPos) const;
    /**
     * @symbol ?_radialSearch\@SpawnClimateFinder\@\@AEBA?AUResultDetails\@1\@U21\@HH\@Z
     */
    MCAPI struct SpawnClimateFinder::ResultDetails
    _radialSearch(struct SpawnClimateFinder::ResultDetails, int, int) const;
    // NOLINTEND
};
