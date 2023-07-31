#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/world/item/enchanting/Enchant.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentType {

public:
    // prevent constructor by default
    ScriptItemEnchantmentType(ScriptItemEnchantmentType const&) = delete;
    ScriptItemEnchantmentType()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@QEAA\@AEBW4Type\@Enchant\@\@\@Z
     */
    MCAPI ScriptItemEnchantmentType(enum class Enchant::Type const&);
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentType> bind();
    /**
     * @symbol
     * ?getName\@ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ??4ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentType&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentType const&);
    /**
     * @symbol ??8ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptItemEnchantmentType const&) const;
    /**
     * @symbol ??1ScriptItemEnchantmentType\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemEnchantmentType();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
