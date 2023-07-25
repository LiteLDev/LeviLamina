#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

namespace ScriptModuleMinecraft {

class ScriptBlockSnowContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKSNOWCONTAINERCOMPONENT
public:
    ScriptBlockSnowContainerComponent& operator=(ScriptBlockSnowContainerComponent const&) = delete;
    ScriptBlockSnowContainerComponent(ScriptBlockSnowContainerComponent const&)            = delete;
    ScriptBlockSnowContainerComponent()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKSNOWCONTAINERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockSnowContainerComponent();
#endif
    /**
     * @symbol ??4ScriptBlockSnowContainerComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent&&);
    /**
     * @symbol ?ComponentId\@ScriptBlockSnowContainerComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptBlockSnowContainerComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockSnowContainerComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
