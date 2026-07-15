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
};
