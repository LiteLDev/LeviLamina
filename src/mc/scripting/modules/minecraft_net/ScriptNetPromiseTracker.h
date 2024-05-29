#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { struct Error; }
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
    MCAPI void handleFailure(uint requestId, std::string const& reason);

    // symbol:
    // ?handleResponse@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAXIAEBV?$vector@UScriptNetHeader@ScriptModuleMinecraftNet@@V?$allocator@UScriptNetHeader@ScriptModuleMinecraftNet@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@I@Z
    MCAPI void handleResponse(
        uint                                                                 requestId,
        std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const& headers,
        std::string const&                                                   body,
        uint                                                                 status
    );

    // symbol:
    // ?rejectAll@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void rejectAll(std::string const& reason);

    // symbol:
    // ?track@ScriptNetPromiseTracker@ScriptModuleMinecraftNet@@QEAAIAEBV?$Promise@V?$StrongTypedObjectHandle@UScriptNetResponse@ScriptModuleMinecraftNet@@@Scripting@@UError@2@X@Scripting@@AEBV?$StrongTypedObjectHandle@UScriptNetRequest@ScriptModuleMinecraftNet@@@4@@Z
    MCAPI uint
    track(class Scripting::Promise<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>, struct Scripting::Error, void> const&, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
