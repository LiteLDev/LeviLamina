#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

struct BlockStateDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<1, 1, ::Tag::Type>                  mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mEnumValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _copy(::BlockStateDefinition const& rhs);

    MCAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
