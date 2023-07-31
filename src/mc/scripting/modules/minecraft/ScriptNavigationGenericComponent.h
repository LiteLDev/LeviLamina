#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationGenericComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

public:
    // prevent constructor by default
    ScriptNavigationGenericComponent& operator=(ScriptNavigationGenericComponent const&) = delete;
    ScriptNavigationGenericComponent(ScriptNavigationGenericComponent const&)            = delete;
    ScriptNavigationGenericComponent()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONGENERICCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationGenericComponent();
#endif
    /**
     * @symbol
     * ?bind\@ScriptNavigationGenericComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationGenericComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationGenericComponent>
    bind();
    /**
     * @symbol ?ComponentId\@ScriptNavigationGenericComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
