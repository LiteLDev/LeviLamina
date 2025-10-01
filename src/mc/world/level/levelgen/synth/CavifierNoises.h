#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class CavifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarRarenessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DElevationModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DRarityModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DNoiseSource1;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DNoiseSource2;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DRarityModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghettiRoughnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghettiRoughnessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mBigEntranceNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mLayerNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mCheeseNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    CavifierNoises& operator=(CavifierNoises const&);
    CavifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CavifierNoises(::CavifierNoises const&);

    MCAPI CavifierNoises(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarRarenessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DElevationModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DRarityModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DNoiseSource1,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DNoiseSource2,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DRarityModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghettiRoughnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghettiRoughnessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mBigEntranceNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mLayerNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mCheeseNoise
    );

    MCAPI ~CavifierNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CavifierNoises make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CavifierNoises const&);

    MCAPI void* $ctor(
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarRarenessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mPillarThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DElevationModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DRarityModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti2DThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DNoiseSource1,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DNoiseSource2,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DRarityModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghetti3DThicknessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghettiRoughnessNoise,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mSpaghettiRoughnessModulator,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mBigEntranceNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mLayerNoiseSource,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> mCheeseNoise
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
