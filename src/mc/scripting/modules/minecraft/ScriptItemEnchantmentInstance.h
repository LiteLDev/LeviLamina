#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMENCHANTMENTINSTANCE
public:
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&) = delete;
    ScriptItemEnchantmentInstance()                                     = delete;
#endif

public:
    /**
     * @symbol ??0ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAA\@AEBVEnchantmentInstance\@\@\@Z
     */
    MCAPI ScriptItemEnchantmentInstance(class EnchantmentInstance const&);
    /**
     * @symbol ??4ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);
    /**
     * @symbol ??1ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemEnchantmentInstance();
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>
    bind();
};

}; // namespace ScriptModuleMinecraft
