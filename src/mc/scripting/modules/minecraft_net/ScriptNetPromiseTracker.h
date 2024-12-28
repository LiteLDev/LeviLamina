#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
// clang-format on

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
        ::ll::UntypedStorage<8, 80> mUnka50c39;
        ::ll::UntypedStorage<8, 32> mUnk6af6af;
        // NOLINTEND

    public:
        // prevent constructor by default
        InProgressRequest& operator=(InProgressRequest const&);
        InProgressRequest(InProgressRequest const&);
        InProgressRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~InProgressRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk77e70b;
    ::ll::UntypedStorage<8, 64> mUnke5d2b6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void handleFailure(uint requestId, ::std::string const& reason);

    MCAPI void handleResponse(
        uint                                                              requestId,
        ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const& headers,
        ::std::string const&                                              body,
        uint                                                              status
    );

    MCAPI void rejectAll(::std::string const& reason);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
