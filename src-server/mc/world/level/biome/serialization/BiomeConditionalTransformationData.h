#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
struct BiomeWeightedData;
// clang-format on

struct BiomeConditionalTransformationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mTransformsInto;
    ::ll::TypedStorage<2, 2, ushort>                              mConditionJson;
    ::ll::TypedStorage<4, 4, uint>                                mMinPassingNeighbors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeConditionalTransformationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeConditionalTransformationData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
