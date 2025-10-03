#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeScatterParamData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8b3dbb;
    ::ll::UntypedStorage<4, 4>  mUnk98acea;
    ::ll::UntypedStorage<2, 2>  mUnk86065f;
    ::ll::UntypedStorage<2, 2>  mUnke357cc;
    ::ll::UntypedStorage<4, 4>  mUnkb7c5b3;
    ::ll::UntypedStorage<4, 4>  mUnkf64191;
    ::ll::UntypedStorage<2, 2>  mUnk42b79f;
    ::ll::UntypedStorage<2, 2>  mUnka84676;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeScatterParamData& operator=(BiomeScatterParamData const&);
    BiomeScatterParamData(BiomeScatterParamData const&);
    BiomeScatterParamData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~BiomeScatterParamData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeScatterParamData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
