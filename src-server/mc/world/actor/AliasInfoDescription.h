#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

struct AliasInfoDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                                 mAliasName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>>> mAliasProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    AliasInfoDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AliasInfoDescription(::AliasInfoDescription const&);

    MCAPI ::AliasInfoDescription& operator=(::AliasInfoDescription const&);

    MCAPI ~AliasInfoDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AliasInfoDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
