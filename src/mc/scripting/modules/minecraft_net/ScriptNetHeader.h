#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {

public:
    // prevent constructor by default
    ScriptNetHeader() = delete;

public:
    /**
     * @symbol ??0ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptNetHeader(struct ScriptModuleMinecraftNet::ScriptNetHeader const&); // NOLINT
    /**
     * @symbol ??4ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader&&); // NOLINT
    /**
     * @symbol ??4ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader const&); // NOLINT
    /**
     * @symbol ??1ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNetHeader(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptNetHeader\@ScriptModuleMinecraftNet\@\@SA?AV?$ClassBindingBuilder\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHeader>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraftNet
