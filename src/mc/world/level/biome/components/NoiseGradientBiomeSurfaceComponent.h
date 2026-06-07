#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct NoiseGradientBiomeSurfaceComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mGradientBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>                 mNoiseSeedString;
    ::ll::TypedStorage<4, 4, int>                            mFirstOctave;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>          mAmplitudes;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>>>>
        mNoise;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeNoise(uint seed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
