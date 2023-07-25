#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationWalkComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONWALKCOMPONENT
public:
    ScriptNavigationWalkComponent& operator=(ScriptNavigationWalkComponent const&) = delete;
    ScriptNavigationWalkComponent(ScriptNavigationWalkComponent const&)            = delete;
    ScriptNavigationWalkComponent()                                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONWALKCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationWalkComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptNavigationWalkComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptNavigationWalkComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationWalkComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationWalkComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
