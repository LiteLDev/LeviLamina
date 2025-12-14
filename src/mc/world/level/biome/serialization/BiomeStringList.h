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
    // BiomeStringList inner types define
    using BiomeStringIndex = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ushort>> mAllStrings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                mStrings;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeStringList& operator=(BiomeStringList const&);
    BiomeStringList(BiomeStringList const&);
    BiomeStringList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeStringList(::BiomeStringList&&);

    MCAPI ~BiomeStringList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeStringList> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeStringList&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
