#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"

namespace JsonUtil::details {

struct BlockReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBlockType;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockReference();

    MCAPI ~BlockReference();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
