#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil::details {

struct BlockReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4566b6;
    ::ll::UntypedStorage<8, 24> mUnk6a3273;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockReference& operator=(BlockReference const&);
    BlockReference(BlockReference const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockReference();

    MCNAPI ~BlockReference();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil::details
