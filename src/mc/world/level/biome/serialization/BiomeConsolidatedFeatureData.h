#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeScatterParamData.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeConsolidatedFeatureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::BiomeScatterParamData> mScatter;
    ::ll::TypedStorage<2, 2, ushort>                   mFeature;
    ::ll::TypedStorage<2, 2, ushort>                   mIdentifier;
    ::ll::TypedStorage<2, 2, ushort>                   mPass;
    ::ll::TypedStorage<1, 1, bool>                     mCanUseInternalFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConsolidatedFeatureData& operator=(BiomeConsolidatedFeatureData const&);
    BiomeConsolidatedFeatureData(BiomeConsolidatedFeatureData const&);
    BiomeConsolidatedFeatureData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeConsolidatedFeatureData(::BiomeConsolidatedFeatureData&&);

    MCAPI ~BiomeConsolidatedFeatureData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeConsolidatedFeatureData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeConsolidatedFeatureData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
