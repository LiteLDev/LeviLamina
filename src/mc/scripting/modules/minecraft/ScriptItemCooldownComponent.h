#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCooldownComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {

public:
    // prevent constructor by default
    ScriptItemCooldownComponent() = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMCOOLDOWNCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemCooldownComponent(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptItemCooldownComponent(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&); // NOLINT
    /**
     * @symbol
     * ?getCooldownCategory\@ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getCooldownCategory(); // NOLINT
    /**
     * @symbol
     * ?getCooldownTicks\@ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getCooldownTicks(); // NOLINT
    /**
     * @symbol ??4ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemCooldownComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemCooldownComponent const&); // NOLINT
    /**
     * @symbol
     * ?startCooldown\@ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEAVScriptPlayer\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> startCooldown(class ScriptModuleMinecraft::ScriptPlayer&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemCooldownComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemCooldownComponent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
