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
    ::ll::UntypedStorage<8, 56> mUnk874752;
    ::ll::UntypedStorage<8, 56> mUnkfc41ae;
    ::ll::UntypedStorage<8, 56> mUnkcd02ba;
    ::ll::UntypedStorage<8, 56> mUnkfafae8;
    ::ll::UntypedStorage<8, 56> mUnk6628cf;
    ::ll::UntypedStorage<8, 56> mUnk3210d7;
    ::ll::UntypedStorage<8, 56> mUnkf107a9;
    ::ll::UntypedStorage<8, 56> mUnk9d0a55;
    ::ll::UntypedStorage<8, 56> mUnkd1f749;
    ::ll::UntypedStorage<8, 56> mUnkae28ef;
    ::ll::UntypedStorage<8, 56> mUnke471fd;
    ::ll::UntypedStorage<8, 56> mUnka972b6;
    ::ll::UntypedStorage<8, 56> mUnk5723bb;
    ::ll::UntypedStorage<8, 56> mUnkffb34d;
    ::ll::UntypedStorage<8, 56> mUnk7055a2;
    ::ll::UntypedStorage<8, 56> mUnk9ba9ad;
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
