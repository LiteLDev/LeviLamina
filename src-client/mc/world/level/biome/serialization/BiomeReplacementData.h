#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeReplacementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                 mReplacementBiome;
    ::ll::TypedStorage<2, 2, ushort>                 mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                  mAmount;
    ::ll::TypedStorage<4, 4, float>                  mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                   mReplacementIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeReplacementData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeReplacementData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
