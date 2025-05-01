#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct ReplaceRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>               mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReplaceRule(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);

    MCNAPI ~ReplaceRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
