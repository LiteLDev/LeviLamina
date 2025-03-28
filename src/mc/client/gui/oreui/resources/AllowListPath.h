#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class AllowListPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd5cb06;
    ::ll::UntypedStorage<8, 32> mUnk939663;
    ::ll::UntypedStorage<8, 32> mUnk161201;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListPath& operator=(AllowListPath const&);
    AllowListPath(AllowListPath const&);
    AllowListPath();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AllowListPath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
