#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

class FrozenOceanBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const> mIcebergPillarNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const> mIcebergSurfaceNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const> mIcebergPillarRoofNoise;
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    FrozenOceanBuilderNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FrozenOceanBuilderNoises(::XoroshiroPositionalRandomFactory positionalRandomFactory, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarNoise, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergSurfaceNoise, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarRoofNoise);

    MCAPI ~FrozenOceanBuilderNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::FrozenOceanBuilderNoises make(::XoroshiroPositionalRandomFactory const& positionalRandom);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::XoroshiroPositionalRandomFactory positionalRandomFactory, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarNoise, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergSurfaceNoise, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarRoofNoise);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
