#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeMultinoiseGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd35fc4;
    ::ll::UntypedStorage<4, 4> mUnkfb63c8;
    ::ll::UntypedStorage<4, 4> mUnk244fd5;
    ::ll::UntypedStorage<4, 4> mUnk31bf95;
    ::ll::UntypedStorage<4, 4> mUnkedb9f9;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeMultinoiseGenRulesData& operator=(BiomeMultinoiseGenRulesData const&);
    BiomeMultinoiseGenRulesData(BiomeMultinoiseGenRulesData const&);
    BiomeMultinoiseGenRulesData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeMultinoiseGenRulesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
