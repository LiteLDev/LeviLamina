#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class FrozenOceanBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk20daab;
    ::ll::UntypedStorage<8, 56> mUnk4c8abb;
    ::ll::UntypedStorage<8, 56> mUnk911d03;
    ::ll::UntypedStorage<8, 24> mUnkb53a66;
    // NOLINTEND

public:
    // prevent constructor by default
    FrozenOceanBuilderNoises& operator=(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrozenOceanBuilderNoises(
        ::XoroshiroPositionalRandomFactory                                            positionalRandomFactory,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergSurfaceNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarRoofNoise
    );

    MCNAPI ~FrozenOceanBuilderNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::FrozenOceanBuilderNoises make(::XoroshiroPositionalRandomFactory const& positionalRandom);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::XoroshiroPositionalRandomFactory                                            positionalRandomFactory,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergSurfaceNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> icebergPillarRoofNoise
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
