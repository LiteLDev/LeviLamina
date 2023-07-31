#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {

public:
    // prevent constructor by default
    ScriptHealthComponent& operator=(ScriptHealthComponent const&) = delete;
    ScriptHealthComponent(ScriptHealthComponent const&)            = delete;
    ScriptHealthComponent()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?setCurrent\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@AEBM\@Z
     */
    virtual class Scripting::Result<bool> setCurrent(float const&) const;
    /**
     * @vftbl 7
     * @symbol ?resetToMinValue\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<void> resetToMinValue() const;
    /**
     * @vftbl 8
     * @symbol ?resetToMaxValue\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<void> resetToMaxValue() const;
    /**
     * @vftbl 9
     * @symbol ?resetToDefaultValue\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<void> resetToDefaultValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTHEALTHCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptHealthComponent();
#endif
    /**
     * @symbol
     * ?bind\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptHealthComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealthComponent> bind();
    /**
     * @symbol ?ComponentId\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?notifyHealthChange\@ScriptHealthComponent\@ScriptModuleMinecraft\@\@AEBAXMM\@Z
     */
    MCAPI void notifyHealthChange(float, float) const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
