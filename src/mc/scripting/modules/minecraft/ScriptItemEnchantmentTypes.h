#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {

public:
    // prevent constructor by default
    ScriptItemEnchantmentTypes& operator=(ScriptItemEnchantmentTypes const&) = delete;
    ScriptItemEnchantmentTypes(ScriptItemEnchantmentTypes const&)            = delete;

public:
    /**
     * @symbol ??0ScriptItemEnchantmentTypes\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ScriptItemEnchantmentTypes(); // NOLINT
    /**
     * @symbol
     * ?getEnchantmentHandle\@ScriptItemEnchantmentTypes\@ScriptModuleMinecraft\@\@QEAA?AV?$optional\@V?$StrongTypedObjectHandle\@UScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@AEAVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>>
    getEnchantmentHandle(class Scripting::WeakLifetimeScope&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentTypes\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentTypes\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentTypes>
    bind(); // NOLINT

    // private:
    /**
     * @symbol
     * ?add\@ScriptItemEnchantmentTypes\@ScriptModuleMinecraft\@\@AEAA?AV?$StrongTypedObjectHandle\@UScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAVWeakLifetimeScope\@4\@W4Type\@Enchant\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>
    add(class Scripting::WeakLifetimeScope&, enum class Enchant::Type); // NOLINT
};

}; // namespace ScriptModuleMinecraft
