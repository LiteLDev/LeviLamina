#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

class ScriptNetPromiseTracker {
public:
    // ScriptNetPromiseTracker inner types declare
    // clang-format off
    struct InProgressRequest;
    // clang-format on

    // ScriptNetPromiseTracker inner types define
    struct InProgressRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk8292dc;
        ::ll::UntypedStorage<8, 32> mUnk6af6af;
        // NOLINTEND

    public:
        // prevent constructor by default
        InProgressRequest& operator=(InProgressRequest const&);
        InProgressRequest(InProgressRequest const&);
        InProgressRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk77e70b;
    ::ll::UntypedStorage<8, 64> mUnke5d2b6;
    ::ll::UntypedStorage<8, 24> mUnk50e0b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker();
};

} // namespace ScriptModuleMinecraftNet
