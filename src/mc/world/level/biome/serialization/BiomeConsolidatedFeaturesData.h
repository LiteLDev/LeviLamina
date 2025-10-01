#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeConsolidatedFeaturesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk98fcb4;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConsolidatedFeaturesData& operator=(BiomeConsolidatedFeaturesData const&);
    BiomeConsolidatedFeaturesData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeConsolidatedFeaturesData(::BiomeConsolidatedFeaturesData const&);

    MCNAPI ~BiomeConsolidatedFeaturesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeConsolidatedFeaturesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeConsolidatedFeaturesData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
