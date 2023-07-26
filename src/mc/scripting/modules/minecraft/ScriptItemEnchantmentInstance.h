#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {

public:
    // prevent constructor by default
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&) = delete;
    ScriptItemEnchantmentInstance()                                     = delete;

public:
    /**
     * @symbol ??0ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAA\@AEBVEnchantmentInstance\@\@\@Z
     */
    MCAPI ScriptItemEnchantmentInstance(class EnchantmentInstance const&); // NOLINT
    /**
     * @symbol ??4ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&); // NOLINT
    /**
     * @symbol ??1ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemEnchantmentInstance(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentInstance\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
