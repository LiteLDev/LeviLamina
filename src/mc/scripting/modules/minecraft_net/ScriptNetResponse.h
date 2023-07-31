#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {

public:
    // prevent constructor by default
    ScriptNetResponse& operator=(ScriptNetResponse const&) = delete;
    ScriptNetResponse(ScriptNetResponse const&)            = delete;
    ScriptNetResponse()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptNetResponse\@ScriptModuleMinecraftNet\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptNetResponse(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);
    /**
     * @symbol
     * ?bind\@ScriptNetResponse\@ScriptModuleMinecraftNet\@\@SA?AV?$ClassBindingBuilder\@UScriptNetResponse\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetResponse> bind();
    /**
     * @symbol ??4ScriptNetResponse\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetResponse&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);
    /**
     * @symbol ??1ScriptNetResponse\@ScriptModuleMinecraftNet\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNetResponse();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
