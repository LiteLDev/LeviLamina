#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationHoverComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONHOVERCOMPONENT
public:
    ScriptNavigationHoverComponent& operator=(ScriptNavigationHoverComponent const&) = delete;
    ScriptNavigationHoverComponent(ScriptNavigationHoverComponent const&)            = delete;
    ScriptNavigationHoverComponent()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONHOVERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationHoverComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptNavigationHoverComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptNavigationHoverComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationHoverComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationHoverComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
