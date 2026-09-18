#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string> mBuildId;
    ::ll::TypedStorage<8, 32, ::std::string> mCommitId;
    ::ll::TypedStorage<8, 32, ::std::string> mBranchId;
    ::ll::TypedStorage<8, 32, ::std::string> mFlavor;
    ::ll::TypedStorage<8, 32, ::std::string> mMergeBaseSha;
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
