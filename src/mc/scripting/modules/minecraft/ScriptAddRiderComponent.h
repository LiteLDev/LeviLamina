#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTADDRIDERCOMPONENT
public:
    ScriptAddRiderComponent& operator=(ScriptAddRiderComponent const&) = delete;
    ScriptAddRiderComponent(ScriptAddRiderComponent const&)            = delete;
    ScriptAddRiderComponent()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_isValid\@?$ECSScriptActorComponent\@VAddRiderComponent\@\@VAddRiderDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTADDRIDERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptAddRiderComponent();
#endif
    /**
     * @symbol
     * ??0ScriptAddRiderComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptAddRiderComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol
     * ?getEntityType\@ScriptAddRiderComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getEntityType() const;
    /**
     * @symbol
     * ?getSpawnEvent\@ScriptAddRiderComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getSpawnEvent() const;
    /**
     * @symbol ?ComponentId\@ScriptAddRiderComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptAddRiderComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptAddRiderComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptAddRiderComponent> bind();
};

}; // namespace ScriptModuleMinecraft
