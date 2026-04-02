#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

class SoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mSoundEvent;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SoundDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
