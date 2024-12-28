#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class OreVeinifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk1a89af;
    ::ll::UntypedStorage<8, 56> mUnk7a0c84;
    ::ll::UntypedStorage<8, 56> mUnk925041;
    ::ll::UntypedStorage<8, 56> mUnk8daedd;
    ::ll::UntypedStorage<8, 24> mUnk1f4bbd;
    // NOLINTEND

public:
    // prevent constructor by default
    OreVeinifierNoises& operator=(OreVeinifierNoises const&);
    OreVeinifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OreVeinifierNoises(::OreVeinifierNoises const&);

    MCAPI OreVeinifierNoises(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeininessNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeinNoiseSourceA,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeinNoiseSourceB,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mGapNoiseSource,
        ::XoroshiroPositionalRandomFactory                                            mPositionalRandomFactory
    );

    MCAPI ~OreVeinifierNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreVeinifierNoises make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreVeinifierNoises const&);

    MCAPI void* $ctor(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeininessNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeinNoiseSourceA,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mVeinNoiseSourceB,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mGapNoiseSource,
        ::XoroshiroPositionalRandomFactory                                            mPositionalRandomFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
