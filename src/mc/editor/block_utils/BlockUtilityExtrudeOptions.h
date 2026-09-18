#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

struct BlockUtilityExtrudeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc73cac;
    ::ll::UntypedStorage<4, 4>  mUnka040fd;
    ::ll::UntypedStorage<1, 1>  mUnkc1863b;
    ::ll::UntypedStorage<4, 4>  mUnkc7faf0;
    ::ll::UntypedStorage<1, 1>  mUnk682e00;
    ::ll::UntypedStorage<4, 4>  mUnk5bb12b;
    ::ll::UntypedStorage<1, 1>  mUnkbb5a93;
    ::ll::UntypedStorage<1, 1>  mUnk9134d1;
    ::ll::UntypedStorage<8, 24> mUnke9a5b6;
    ::ll::UntypedStorage<8, 24> mUnk2f7e74;
    ::ll::UntypedStorage<4, 4>  mUnk7132bb;
    ::ll::UntypedStorage<1, 1>  mUnk1c1ba0;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityExtrudeOptions& operator=(BlockUtilityExtrudeOptions const&);
    BlockUtilityExtrudeOptions(BlockUtilityExtrudeOptions const&);
    BlockUtilityExtrudeOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockUtilityExtrudeOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
