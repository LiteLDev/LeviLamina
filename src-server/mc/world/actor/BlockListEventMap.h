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
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockListEventMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
