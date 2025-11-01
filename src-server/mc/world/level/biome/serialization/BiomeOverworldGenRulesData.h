#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct BiomeConditionalTransformationData;
struct BiomeWeightedData;
struct BiomeWeightedTemperatureData;
// clang-format on

struct BiomeOverworldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mHillsTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mMutateTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mRiverTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mShoreTransformations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConditionalTransformationData>> mPreHillsEdge;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeConditionalTransformationData>> mPostShoreEdge;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedTemperatureData>> mClimate;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeOverworldGenRulesData& operator=(BiomeOverworldGenRulesData const&);
    BiomeOverworldGenRulesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData const&);

    MCAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData&&);

    MCAPI ::BiomeOverworldGenRulesData& operator=(::BiomeOverworldGenRulesData&&);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeOverworldGenRulesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeOverworldGenRulesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeOverworldGenRulesData const&);

    MCFOLD void* $ctor(::BiomeOverworldGenRulesData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
