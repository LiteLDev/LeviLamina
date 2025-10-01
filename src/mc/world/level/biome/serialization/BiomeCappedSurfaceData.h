#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCappedSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkda3ae2;
    ::ll::UntypedStorage<8, 24> mUnk22a136;
    ::ll::UntypedStorage<4, 8>  mUnk7bd1b7;
    ::ll::UntypedStorage<4, 8>  mUnkdda428;
    ::ll::UntypedStorage<4, 8>  mUnk6c7cf1;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeCappedSurfaceData& operator=(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeCappedSurfaceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeCappedSurfaceData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
