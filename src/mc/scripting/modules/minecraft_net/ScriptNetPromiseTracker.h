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
        // symbol: ??1InProgressRequest@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAA@XZ
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
    // symbol:
    // ?handleFailure@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAXIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void handleFailure(uint, std::string const&);

    // symbol:
    // ?handleResponse@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAXIAEBV?$vector@UScriptNetHeader@ScriptModuleMinecraftNet@@V?$allocator@UScriptNetHeader@ScriptModuleMinecraftNet@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@I@Z
    MCAPI void handleResponse(
        uint,
        std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const&,
        std::string const&,
        uint
    );

    // symbol:
    // ?rejectAll@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void rejectAll(std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
