#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk95cbc8;
    ::ll::UntypedStorage<8, 32> mUnkca7202;
    ::ll::UntypedStorage<8, 32> mUnk91de1d;
    ::ll::UntypedStorage<8, 32> mUnk4d745e;
    ::ll::UntypedStorage<8, 32> mUnk66df0a;
    ::ll::UntypedStorage<8, 32> mUnke45549;
    ::ll::UntypedStorage<1, 1> mUnk5b333f;
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

}
