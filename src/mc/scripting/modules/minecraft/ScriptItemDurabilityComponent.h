#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
struct FloatRange;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemDurabilityComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {

public:
    // prevent constructor by default
    ScriptItemDurabilityComponent() = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMDURABILITYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemDurabilityComponent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptItemDurabilityComponent(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&); // NOLINT
    /**
     * @symbol
     * ?getCurrentDamage\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getCurrentDamage(); // NOLINT
    /**
     * @symbol
     * ?getDamageChance\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<int> getDamageChance(int); // NOLINT
    /**
     * @symbol
     * ?getDamageRange\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@UFloatRange\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<struct FloatRange> getDamageRange(); // NOLINT
    /**
     * @symbol
     * ?getMaxDurability\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getMaxDurability(); // NOLINT
    /**
     * @symbol ??4ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemDurabilityComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemDurabilityComponent const&); // NOLINT
    /**
     * @symbol
     * ?setCurrentDamage\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> setCurrentDamage(int); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemDurabilityComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemDurabilityComponent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
