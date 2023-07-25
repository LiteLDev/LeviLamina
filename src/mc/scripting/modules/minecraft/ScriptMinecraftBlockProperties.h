#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptMinecraftBlockProperties {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMINECRAFTBLOCKPROPERTIES
public:
    ScriptMinecraftBlockProperties& operator=(ScriptMinecraftBlockProperties const&) = delete;
    ScriptMinecraftBlockProperties(ScriptMinecraftBlockProperties const&)            = delete;
    ScriptMinecraftBlockProperties()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptMinecraftBlockProperties\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMinecraftBlockProperties\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMinecraftBlockProperties>
    bind();
};

}; // namespace ScriptModuleMinecraft
