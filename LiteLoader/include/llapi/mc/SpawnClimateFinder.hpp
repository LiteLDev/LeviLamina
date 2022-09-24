/**
 * @file  SpawnClimateFinder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnClimateFinder.
 *
 */
class SpawnClimateFinder {

#define AFTER_EXTRA
// Add Member There
public:
struct ResultDetails {
    ResultDetails() = delete;
    ResultDetails(ResultDetails const&) = delete;
    ResultDetails(ResultDetails const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCLIMATEFINDER
public:
    class SpawnClimateFinder& operator=(class SpawnClimateFinder const &) = delete;
    SpawnClimateFinder(class SpawnClimateFinder const &) = delete;
    SpawnClimateFinder() = delete;
#endif

public:
    /**
     * @hash   1940216241
     * @symbol ??0SpawnClimateFinder@@QEAA@V?$vector@UClimateParameters@@V?$allocator@UClimateParameters@@@std@@@std@@AEBUOverworldNoises3d@@AEBVDimensionHeightRange@@@Z
     */
    MCAPI SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const &, class DimensionHeightRange const &);
    /**
     * @hash   1174432224
     * @symbol ?findSpawnPosition@SpawnClimateFinder@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   2041148346
     * @symbol ??1SpawnClimateFinder@@QEAA@XZ
     */
    MCAPI ~SpawnClimateFinder();

//private:
    /**
     * @hash   -765732290
     * @symbol ?_getSpawnPositionAndFitness@SpawnClimateFinder@@AEBA?AU?$pair@VBlockPos@@_J@std@@VBlockPos@@@Z
     */
    MCAPI struct std::pair<class BlockPos, __int64> _getSpawnPositionAndFitness(class BlockPos) const;
    /**
     * @hash   -1101623209
     * @symbol ?_radialSearch@SpawnClimateFinder@@AEBA?AUResultDetails@1@U21@HH@Z
     */
    MCAPI struct SpawnClimateFinder::ResultDetails _radialSearch(struct SpawnClimateFinder::ResultDetails, int, int) const;

private:

};