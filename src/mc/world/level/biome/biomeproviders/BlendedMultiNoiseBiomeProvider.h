#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/ParameterList.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class ChunkBlenderFactory;
struct GetBiomeOptions;
struct OverworldNoises3d;
// clang-format on

class BlendedMultiNoiseBiomeProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&> mOverworldNoises;
    ::ll::TypedStorage<8, 192, ::ParameterList>          mParameterList;
    ::ll::TypedStorage<8, 8, ::ChunkBlenderFactory&>     mAttenuationFactory;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&>     mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlendedMultiNoiseBiomeProvider(
        ::OverworldNoises3d const& overworldNoises,
        ::ParameterList            parameterList,
        ::ChunkBlenderFactory&     attenuatorFactory,
        ::BiomeRegistry const&     biomeRegistry
    );

    MCAPI ::Biome const* tryGetBiome(::GetBiomeOptions const& getBiomeOptions) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OverworldNoises3d const& overworldNoises,
        ::ParameterList            parameterList,
        ::ChunkBlenderFactory&     attenuatorFactory,
        ::BiomeRegistry const&     biomeRegistry
    );
    // NOLINTEND
};
