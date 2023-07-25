#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTISDYEABLECOMPONENT
public:
    ScriptIsDyeableComponent& operator=(ScriptIsDyeableComponent const&) = delete;
    ScriptIsDyeableComponent(ScriptIsDyeableComponent const&)            = delete;
    ScriptIsDyeableComponent()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTISDYEABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptIsDyeableComponent();
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptIsDyeableComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName;
    /**
     * @symbol ?sComponentId\@ScriptIsDyeableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId;
};

}; // namespace ScriptModuleMinecraft
