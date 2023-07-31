#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFoodComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {

public:
    // prevent constructor by default
    ScriptFoodComponent() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTFOODCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptFoodComponent();
#endif
    /**
     * @symbol
     * ??0ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA\@V?$WeakTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptFoodComponent(class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??0ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptFoodComponent(class ScriptModuleMinecraft::ScriptFoodComponent const&);
    /**
     * @symbol
     * ?bind\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptFoodComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptFoodComponent> bind();
    /**
     * @symbol ?getCanAlwaysEat\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getCanAlwaysEat();
    /**
     * @symbol ?getNutrition\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getNutrition();
    /**
     * @symbol ?getSaturationModifier\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getSaturationModifier();
    /**
     * @symbol
     * ?getTypeName\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string const& getTypeName();
    /**
     * @symbol
     * ?getUsingConvertsToItem\@ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getUsingConvertsToItem();
    /**
     * @symbol ??4ScriptFoodComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptFoodComponent&
    operator=(class ScriptModuleMinecraft::ScriptFoodComponent const&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
