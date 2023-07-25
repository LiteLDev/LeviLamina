#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptIsHiddenWhenInvisibleComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTISHIDDENWHENINVISIBLECOMPONENT
public:
    ScriptIsHiddenWhenInvisibleComponent& operator=(ScriptIsHiddenWhenInvisibleComponent const&) = delete;
    ScriptIsHiddenWhenInvisibleComponent(ScriptIsHiddenWhenInvisibleComponent const&)            = delete;
    ScriptIsHiddenWhenInvisibleComponent()                                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTISHIDDENWHENINVISIBLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptIsHiddenWhenInvisibleComponent();
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptIsHiddenWhenInvisibleComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName;
    /**
     * @symbol ?sComponentId\@ScriptIsHiddenWhenInvisibleComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId;
};

}; // namespace ScriptModuleMinecraft
