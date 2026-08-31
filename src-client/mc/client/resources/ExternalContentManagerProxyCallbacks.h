#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke48a13;
    ::ll::UntypedStorage<8, 64> mUnk7c4519;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManagerProxyCallbacks& operator=(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks();
};
