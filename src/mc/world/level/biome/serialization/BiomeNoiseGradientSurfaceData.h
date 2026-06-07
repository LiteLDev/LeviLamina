#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeNoiseGradientSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mGradientBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>        mNoiseSeedString;
    ::ll::TypedStorage<4, 4, int>                   mFirstOctave;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mAmplitudes;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeNoiseGradientSurfaceData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeNoiseGradientSurfaceData(::BiomeNoiseGradientSurfaceData const&);

    MCAPI ::BiomeNoiseGradientSurfaceData& operator=(::BiomeNoiseGradientSurfaceData&&);

    MCAPI ::BiomeNoiseGradientSurfaceData& operator=(::BiomeNoiseGradientSurfaceData const&);

    MCAPI bool operator==(::BiomeNoiseGradientSurfaceData const& other) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeNoiseGradientSurfaceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeNoiseGradientSurfaceData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeNoiseGradientSurfaceData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
