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
    BlockReference();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockReference();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil::details
