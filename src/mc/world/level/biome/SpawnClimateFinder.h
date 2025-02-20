#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DimensionHeightRange;
struct ClimateParameters;
struct OverworldNoises3d;
// clang-format on

class SpawnClimateFinder {
public:
    // SpawnClimateFinder inner types declare
    // clang-format off
    struct ResultDetails;
    // clang-format on

    // SpawnClimateFinder inner types define
    struct ResultDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk51c2d9;
        ::ll::UntypedStorage<4, 4>  mUnkee84af;
        ::ll::UntypedStorage<8, 8>  mUnkddab9c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResultDetails& operator=(ResultDetails const&);
        ResultDetails(ResultDetails const&);
        ResultDetails();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9e17ef;
    ::ll::UntypedStorage<8, 8>  mUnk849964;
    ::ll::UntypedStorage<8, 24> mUnk31f9ef;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnClimateFinder& operator=(SpawnClimateFinder const&);
    SpawnClimateFinder(SpawnClimateFinder const&);
    SpawnClimateFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnClimateFinder(
        ::std::vector<::ClimateParameters> targetClimates,
        ::OverworldNoises3d const&         noiseSampler,
        ::DimensionHeightRange const&      dimensionHeightRange
    );

    MCAPI int64 _calculateClimateMinFitness(::BlockPos pos) const;

    MCAPI ::SpawnClimateFinder::ResultDetails _findSpawnPositionDetailedResult() const;

    MCAPI ~SpawnClimateFinder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::ClimateParameters> targetClimates,
        ::OverworldNoises3d const&         noiseSampler,
        ::DimensionHeightRange const&      dimensionHeightRange
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
