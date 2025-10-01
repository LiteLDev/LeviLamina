#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class MesaSurfaceBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mClayBandsOffsetNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSurfaceNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarRoofNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBuilderNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MesaSurfaceBuilderNoises(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> clayBandsOffsetNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> surfaceNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> pillarNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> pillarRoofNoise
    );

    MCAPI ~MesaSurfaceBuilderNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MesaSurfaceBuilderNoises make(::XoroshiroPositionalRandomFactory const& positionalRandom);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> clayBandsOffsetNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> surfaceNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> pillarNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> pillarRoofNoise
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
