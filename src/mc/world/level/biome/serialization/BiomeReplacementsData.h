#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeReplacementsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdf058;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacementsData& operator=(BiomeReplacementsData const&);
    BiomeReplacementsData(BiomeReplacementsData const&);
    BiomeReplacementsData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeReplacementsData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeReplacementsData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
