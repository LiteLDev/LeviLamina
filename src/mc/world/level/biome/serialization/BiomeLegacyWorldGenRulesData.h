#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeLegacyWorldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk28342a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeLegacyWorldGenRulesData& operator=(BiomeLegacyWorldGenRulesData const&);
    BiomeLegacyWorldGenRulesData(BiomeLegacyWorldGenRulesData const&);
    BiomeLegacyWorldGenRulesData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeLegacyWorldGenRulesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeLegacyWorldGenRulesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
