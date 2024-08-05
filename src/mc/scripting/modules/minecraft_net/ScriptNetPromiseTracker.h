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
        // prevent constructor by default
        InProgressRequest& operator=(InProgressRequest const&);
        InProgressRequest(InProgressRequest const&);
        InProgressRequest();

    public:
        // NOLINTBEGIN
        MCAPI ~InProgressRequest();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker();

public:
    // NOLINTBEGIN
    MCAPI void handleFailure(uint requestId, std::string const& reason);

    MCAPI void handleResponse(
        uint                                                                 requestId,
        std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const& headers,
        std::string const&                                                   body,
        uint                                                                 status
    );

    MCAPI void rejectAll(std::string const& reason);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
