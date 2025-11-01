#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
struct BiomeConsolidatedFeatureData;
// clang-format on

struct BiomeConsolidatedFeaturesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConsolidatedFeatureData>> mFeatures;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConsolidatedFeaturesData& operator=(BiomeConsolidatedFeaturesData const&);
    BiomeConsolidatedFeaturesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeConsolidatedFeaturesData(::BiomeConsolidatedFeaturesData const&);

    MCAPI ~BiomeConsolidatedFeaturesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeConsolidatedFeaturesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeConsolidatedFeaturesData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
