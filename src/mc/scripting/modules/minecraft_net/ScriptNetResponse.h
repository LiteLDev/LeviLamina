#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // prevent constructor by default
    ScriptNetResponse& operator=(ScriptNetResponse const&);
    ScriptNetResponse();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptNetResponse@ScriptModuleMinecraftNet@@QEAA@$$QEAU01@@Z
    MCAPI ScriptNetResponse(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);

    // symbol: ??0ScriptNetResponse@ScriptModuleMinecraftNet@@QEAA@AEBU01@@Z
    MCAPI ScriptNetResponse(struct ScriptModuleMinecraftNet::ScriptNetResponse const&);

    // symbol:
    // ??0ScriptNetResponse@ScriptModuleMinecraftNet@@QEAA@AEBV?$vector@UScriptNetHeader@ScriptModuleMinecraftNet@@V?$allocator@UScriptNetHeader@ScriptModuleMinecraftNet@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@IAEBV?$StrongTypedObjectHandle@UScriptNetRequest@ScriptModuleMinecraftNet@@@Scripting@@@Z
    MCAPI
    ScriptNetResponse(std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const& headers, std::string const& body, uint status, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&);

    // symbol: ??4ScriptNetResponse@ScriptModuleMinecraftNet@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetResponse&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);

    // symbol: ??1ScriptNetResponse@ScriptModuleMinecraftNet@@QEAA@XZ
    MCAPI ~ScriptNetResponse();

    // symbol:
    // ?bind@ScriptNetResponse@ScriptModuleMinecraftNet@@SA?AV?$ClassBindingBuilder@UScriptNetResponse@ScriptModuleMinecraftNet@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetResponse> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
