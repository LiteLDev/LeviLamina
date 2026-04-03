#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk91bfc1;
    ::ll::UntypedStorage<8, 32> mUnk9fc24e;
    ::ll::UntypedStorage<8, 32> mUnk2feb4d;
    ::ll::UntypedStorage<8, 32> mUnk4636d8;
    ::ll::UntypedStorage<8, 32> mUnk4a17cb;
    ::ll::UntypedStorage<8, 32> mUnke61579;
    ::ll::UntypedStorage<1, 1>  mUnk5b333f;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformBuildInfo& operator=(PlatformBuildInfo const&);
    PlatformBuildInfo(PlatformBuildInfo const&);
    PlatformBuildInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlatformBuildInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
