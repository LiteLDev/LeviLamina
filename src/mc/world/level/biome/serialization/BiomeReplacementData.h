#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeReplacementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkaad449;
    ::ll::UntypedStorage<2, 2>  mUnk1cc353;
    ::ll::UntypedStorage<8, 24> mUnk2eda6a;
    ::ll::UntypedStorage<4, 4>  mUnk183706;
    ::ll::UntypedStorage<4, 4>  mUnk708bd2;
    ::ll::UntypedStorage<4, 4>  mUnkd77b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacementData& operator=(BiomeReplacementData const&);
    BiomeReplacementData(BiomeReplacementData const&);
    BiomeReplacementData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeReplacementData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeReplacementData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
