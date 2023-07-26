#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptIsTamedComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptIsTamedComponent& operator=(ScriptIsTamedComponent const&) = delete;
    ScriptIsTamedComponent(ScriptIsTamedComponent const&)            = delete;
    ScriptIsTamedComponent()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTISTAMEDCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptIsTamedComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptIsTamedComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName; // NOLINT
    /**
     * @symbol ?sComponentId\@ScriptIsTamedComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
