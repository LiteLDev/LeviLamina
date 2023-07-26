#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {

public:
    // prevent constructor by default
    ScriptPlayAnimationOptions() = delete;

public:
    /**
     * @symbol ??0ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&); // NOLINT
    /**
     * @symbol ??0ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&); // NOLINT
    /**
     * @symbol ??4ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&); // NOLINT
    /**
     * @symbol ??4ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&); // NOLINT
    /**
     * @symbol ??1ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayAnimationOptions(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
