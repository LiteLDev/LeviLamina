#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct FloodCommitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkf6af2e;
    ::ll::UntypedStorage<8, 24> mUnka929ef;
    ::ll::UntypedStorage<4, 32> mUnkfe06a7;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodCommitResult& operator=(FloodCommitResult const&);
    FloodCommitResult(FloodCommitResult const&);
    FloodCommitResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FloodCommitResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::InteractiveTools
