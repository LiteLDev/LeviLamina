#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeStringList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk3b6c84;
    ::ll::UntypedStorage<8, 24> mUnk41c6ec;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeStringList& operator=(BiomeStringList const&);
    BiomeStringList(BiomeStringList const&);
    BiomeStringList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeStringList(::BiomeStringList&&);

    MCNAPI ::BiomeStringList& operator=(::BiomeStringList&&);

    MCNAPI ~BiomeStringList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeStringList> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeStringList&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
