#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptPushThroughComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptPushThroughComponent& operator=(ScriptPushThroughComponent const&) = delete;
    ScriptPushThroughComponent(ScriptPushThroughComponent const&)            = delete;
    ScriptPushThroughComponent()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTPUSHTHROUGHCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPushThroughComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptPushThroughComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName; // NOLINT
    /**
     * @symbol ?sComponentId\@ScriptPushThroughComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
