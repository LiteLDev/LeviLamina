#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentSlot {

public:
    // prevent constructor by default
    ScriptItemEnchantmentSlot& operator=(ScriptItemEnchantmentSlot const&) = delete;
    ScriptItemEnchantmentSlot(ScriptItemEnchantmentSlot const&)            = delete;
    ScriptItemEnchantmentSlot()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentSlot\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentSlot> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
