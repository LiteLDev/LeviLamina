#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/NavigationScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptNavigationFlyComponent : public ::ScriptModuleMinecraft::NavigationScriptActorComponent {

public:
    // prevent constructor by default
    ScriptNavigationFlyComponent& operator=(ScriptNavigationFlyComponent const&) = delete;
    ScriptNavigationFlyComponent(ScriptNavigationFlyComponent const&)            = delete;
    ScriptNavigationFlyComponent()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTNAVIGATIONFLYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptNavigationFlyComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?bind\@ScriptNavigationFlyComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptNavigationFlyComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNavigationFlyComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptNavigationFlyComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
