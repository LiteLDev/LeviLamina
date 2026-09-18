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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BlockStateDefinition& operator=(BlockStateDefinition const&);
    BlockStateDefinition();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI BlockStateDefinition(::BlockStateDefinition const& rhs);
#endif

    MCAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::BlockStateDefinition const& rhs);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
