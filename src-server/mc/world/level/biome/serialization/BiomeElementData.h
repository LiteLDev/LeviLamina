#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk65692a;
    ::ll::UntypedStorage<4, 4>  mUnkf6df2a;
    ::ll::UntypedStorage<4, 4>  mUnk445cd1;
    ::ll::UntypedStorage<2, 2>  mUnk22196b;
    ::ll::UntypedStorage<2, 2>  mUnk8e9108;
    ::ll::UntypedStorage<2, 2>  mUnkee8d42;
    ::ll::UntypedStorage<2, 2>  mUnk9c8d09;
    ::ll::UntypedStorage<4, 24> mUnk304f19;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeElementData& operator=(BiomeElementData const&);
    BiomeElementData(BiomeElementData const&);
    BiomeElementData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeElementData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
