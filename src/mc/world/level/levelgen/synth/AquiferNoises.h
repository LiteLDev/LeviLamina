#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

class AquiferNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mBarrierNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mFluidLevelFloodednessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mLavaNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
                                                                        mFluidLevelSpreadNoise;
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mPositionalRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    AquiferNoises& operator=(AquiferNoises const&);
    AquiferNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AquiferNoises(::AquiferNoises const&);

    MCAPI AquiferNoises(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> barrierNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelFloodednessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> lavaNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelSpreadNoise,
        ::XoroshiroPositionalRandomFactory                                            positionalRandomFactory
    );

    MCAPI ~AquiferNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AquiferNoises make(::XoroshiroPositionalRandomFactory const& positionalRandom);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::AquiferNoises const&);

    MCFOLD void* $ctor(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> barrierNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelFloodednessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> lavaNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelSpreadNoise,
        ::XoroshiroPositionalRandomFactory                                            positionalRandomFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
