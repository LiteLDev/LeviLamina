#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEvalStackState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mContinueIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mBreakIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mDataStackSize;
    ::ll::TypedStorage<8, 8, uint64> mMissingVariableOrActorIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mPublicAccessModeStackSize;
    // NOLINTEND

};
