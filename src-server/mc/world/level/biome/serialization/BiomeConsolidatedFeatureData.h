#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeConsolidatedFeatureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk713af5;
    ::ll::UntypedStorage<2, 2>  mUnke53c9d;
    ::ll::UntypedStorage<2, 2>  mUnk7ad97f;
    ::ll::UntypedStorage<2, 2>  mUnkea7e04;
    ::ll::UntypedStorage<1, 1>  mUnk5be7e3;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConsolidatedFeatureData& operator=(BiomeConsolidatedFeatureData const&);
    BiomeConsolidatedFeatureData(BiomeConsolidatedFeatureData const&);
    BiomeConsolidatedFeatureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeConsolidatedFeatureData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeConsolidatedFeatureData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
