#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeTagsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd3dcba;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeTagsData& operator=(BiomeTagsData const&);
    BiomeTagsData(BiomeTagsData const&);
    BiomeTagsData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeTagsData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeTagsData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
