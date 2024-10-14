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
    MCAPI SpawnClimateFinder(
        std::vector<struct ClimateParameters> targetClimates,
        struct OverworldNoises3d const&       noiseSampler,
        class DimensionHeightRange const&     dimensionHeightRange
    );

    MCAPI class BlockPos findSpawnPosition() const;

    MCAPI ~SpawnClimateFinder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int64 _calculateClimateFitness(class BlockPos pos) const;

    MCAPI struct SpawnClimateFinder::ResultDetails
    _radialSearch(struct SpawnClimateFinder::ResultDetails workingData, int maxRadius, int radiusIncrement) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
