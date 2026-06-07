#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ushort addStringAndGetIndex(::std::string const& value);

    MCAPI ::std::string const& getStringOrEmpty(ushort index) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeStringList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeStringList> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
