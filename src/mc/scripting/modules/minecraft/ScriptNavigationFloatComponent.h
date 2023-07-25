#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationFloatComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONFLOATCOMPONENT
public:
    ScriptNavigationFloatComponent& operator=(ScriptNavigationFloatComponent const&) = delete;
    ScriptNavigationFloatComponent(ScriptNavigationFloatComponent const&)            = delete;
    ScriptNavigationFloatComponent()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONFLOATCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationFloatComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptNavigationFloatComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptNavigationFloatComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationFloatComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationFloatComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
