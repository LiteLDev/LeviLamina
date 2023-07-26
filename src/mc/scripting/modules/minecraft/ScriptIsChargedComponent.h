#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptIsChargedComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptIsChargedComponent& operator=(ScriptIsChargedComponent const&) = delete;
    ScriptIsChargedComponent(ScriptIsChargedComponent const&)            = delete;
    ScriptIsChargedComponent()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTISCHARGEDCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptIsChargedComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptIsChargedComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName; // NOLINT
    /**
     * @symbol ?sComponentId\@ScriptIsChargedComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
