#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeConditionalTransformationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk22864f;
    ::ll::UntypedStorage<2, 2>  mUnk67a5e0;
    ::ll::UntypedStorage<4, 4>  mUnk367620;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConditionalTransformationData& operator=(BiomeConditionalTransformationData const&);
    BiomeConditionalTransformationData(BiomeConditionalTransformationData const&);
    BiomeConditionalTransformationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeConditionalTransformationData(::BiomeConditionalTransformationData&&);

    MCNAPI ~BiomeConditionalTransformationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeConditionalTransformationData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeConditionalTransformationData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
