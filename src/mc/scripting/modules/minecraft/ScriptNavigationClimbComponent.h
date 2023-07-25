#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationClimbComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONCLIMBCOMPONENT
public:
    ScriptNavigationClimbComponent& operator=(ScriptNavigationClimbComponent const&) = delete;
    ScriptNavigationClimbComponent(ScriptNavigationClimbComponent const&)            = delete;
    ScriptNavigationClimbComponent()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONCLIMBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationClimbComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptNavigationClimbComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptNavigationClimbComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationClimbComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationClimbComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
