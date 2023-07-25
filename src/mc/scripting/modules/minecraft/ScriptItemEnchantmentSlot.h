#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentSlot {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMENCHANTMENTSLOT
public:
    ScriptItemEnchantmentSlot& operator=(ScriptItemEnchantmentSlot const&) = delete;
    ScriptItemEnchantmentSlot(ScriptItemEnchantmentSlot const&)            = delete;
    ScriptItemEnchantmentSlot()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentSlot\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentSlot> bind();
};

}; // namespace ScriptModuleMinecraft
