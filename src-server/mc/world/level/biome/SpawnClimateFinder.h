#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
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
        ::ll::TypedStorage<4, 12, ::BlockPos> position;
        ::ll::TypedStorage<4, 4, int> iterations;
        ::ll::TypedStorage<8, 8, int64> fitness;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&> mNoiseSampler;
    ::ll::TypedStorage<8, 8, ::DimensionHeightRange const&> mDimensionHeightRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClimateParameters> const> mTargetClimates;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnClimateFinder& operator=(SpawnClimateFinder const&);
    SpawnClimateFinder(SpawnClimateFinder const&);
    SpawnClimateFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnClimateFinder(::std::vector<::ClimateParameters> targetClimates, ::OverworldNoises3d const& noiseSampler, ::DimensionHeightRange const& dimensionHeightRange);

    MCAPI int64 _calculateClimateMinFitness(::BlockPos pos) const;

    MCAPI ::SpawnClimateFinder::ResultDetails _findSpawnPositionDetailedResult() const;

    MCAPI ~SpawnClimateFinder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::ClimateParameters> targetClimates, ::OverworldNoises3d const& noiseSampler, ::DimensionHeightRange const& dimensionHeightRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
