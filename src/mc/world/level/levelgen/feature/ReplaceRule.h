#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

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
    MCAPI ReplaceRule(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);

    MCAPI ~ReplaceRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockDescriptor block, ::std::vector<::BlockDescriptor> mayReplace);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
