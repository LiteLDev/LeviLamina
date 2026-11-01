#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct ItemRegistryComplexAlias {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::HashedString(short)>>                        mCallback;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> mSplitNames;
    ::ll::TypedStorage<1, 1, bool>                                                           allowCommands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemRegistryComplexAlias();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
