#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct PlatformComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk15299e;
    ::ll::UntypedStorage<8, 16> mUnke5fb2e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformComponents& operator=(PlatformComponents const&);
    PlatformComponents(PlatformComponents const&);
    PlatformComponents();

};

}
