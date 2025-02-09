#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

class BlockListEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBlockDescriptors;
    ::ll::TypedStorage<8, 32, ::std::string>                    mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockListEventMap& operator=(BlockListEventMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockListEventMap(::BlockListEventMap const&);

    MCAPI ~BlockListEventMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockListEventMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
