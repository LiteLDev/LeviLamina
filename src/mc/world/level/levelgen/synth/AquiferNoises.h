#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class AquiferNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkaec99b;
    ::ll::UntypedStorage<8, 56> mUnk5035c7;
    ::ll::UntypedStorage<8, 56> mUnk5f57c3;
    ::ll::UntypedStorage<8, 56> mUnk24710e;
    ::ll::UntypedStorage<8, 24> mUnk2421f5;
    // NOLINTEND

public:
    // prevent constructor by default
    AquiferNoises& operator=(AquiferNoises const&);
    AquiferNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AquiferNoises(::AquiferNoises const&);

    MCNAPI AquiferNoises(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> barrierNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelFloodednessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> lavaNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> fluidLevelSpreadNoise,
        ::XoroshiroPositionalRandomFactory                                            positionalRandomFactory
    );

    MCNAPI ~AquiferNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AquiferNoises make(::XoroshiroPositionalRandomFactory const& positionalRandom);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AquiferNoises const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
