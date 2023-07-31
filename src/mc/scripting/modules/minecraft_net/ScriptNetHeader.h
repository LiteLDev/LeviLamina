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
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptNetHeader(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);
    /**
     * @symbol ??4ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader&&);
    /**
     * @symbol ??4ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);
    /**
     * @symbol ??1ScriptNetHeader\@ScriptModuleMinecraftNet\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNetHeader();
    /**
     * @symbol
     * ?bind\@ScriptNetHeader\@ScriptModuleMinecraftNet\@\@SA?AV?$ClassBindingBuilder\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHeader> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
