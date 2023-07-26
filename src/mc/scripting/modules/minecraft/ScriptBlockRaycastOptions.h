#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions {

public:
    // prevent constructor by default
    ScriptBlockRaycastOptions& operator=(ScriptBlockRaycastOptions const&) = delete;
    ScriptBlockRaycastOptions(ScriptBlockRaycastOptions const&)            = delete;
    ScriptBlockRaycastOptions()                                            = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
