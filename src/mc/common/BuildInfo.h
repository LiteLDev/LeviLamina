#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBuildId;
    ::ll::TypedStorage<8, 32, ::std::string> mCommitId;
    ::ll::TypedStorage<8, 32, ::std::string> mBranchId;
    ::ll::TypedStorage<8, 32, ::std::string> mFlavor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BuildInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Common
