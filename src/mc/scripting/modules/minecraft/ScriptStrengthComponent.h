#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptStrengthComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptStrengthComponent& operator=(ScriptStrengthComponent const&) = delete;
    ScriptStrengthComponent(ScriptStrengthComponent const&)            = delete;
    ScriptStrengthComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTSTRENGTHCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptStrengthComponent();
#endif
    /**
     * @symbol ?getMax\@ScriptStrengthComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getMax() const;
    /**
     * @symbol ?getValue\@ScriptStrengthComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getValue() const;
    /**
     * @symbol
     * ?bind\@ScriptStrengthComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptStrengthComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStrengthComponent> bind();
    /**
     * @symbol ?ComponentId\@ScriptStrengthComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
