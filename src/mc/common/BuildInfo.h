#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string mGameVersion;
    ::std::string mBuildId;
    ::std::string mCommitId;
    ::std::string mBranchId;
    ::std::string mFlavor;
    ::std::string mMergeBaseSha;
    // NOLINTEND

public:
    // prevent constructor by default
    BuildInfo& operator=(BuildInfo const&);
    BuildInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuildInfo(::Common::BuildInfo const&);

    MCAPI ~BuildInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Common::BuildInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Common
