#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemEnchantments; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEnchantmentComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {

public:
    // prevent constructor by default
    ScriptItemEnchantmentComponent() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMENCHANTMENTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemEnchantmentComponent();
#endif
    /**
     * @symbol ??0ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptItemEnchantmentComponent(class ScriptModuleMinecraft::ScriptItemEnchantmentComponent const&);
    /**
     * @symbol
     * ?getEnchantments\@ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemEnchantments\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemEnchantments>>
    getEnchantments() const;
    /**
     * @symbol ??4ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemEnchantmentComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemEnchantmentComponent const&);
    /**
     * @symbol
     * ?removeAllEnchantments\@ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> removeAllEnchantments();
    /**
     * @symbol
     * ?setEnchantments\@ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemEnchantments\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> setEnchantments(class ScriptModuleMinecraft::ScriptItemEnchantments const&);
    /**
     * @symbol
     * ?bind\@ScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemEnchantmentComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemEnchantmentComponent>
    bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
