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

class ScriptMountTamingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOUNTTAMINGCOMPONENT
public:
    ScriptMountTamingComponent& operator=(ScriptMountTamingComponent const&) = delete;
    ScriptMountTamingComponent(ScriptMountTamingComponent const&)            = delete;
    ScriptMountTamingComponent()                                             = delete;
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
     * ?_isValid\@?$ECSScriptActorComponent\@VMountTamingComponent\@\@VMountTameableDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOUNTTAMINGCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMountTamingComponent();
#endif
    /**
     * @symbol
     * ??0ScriptMountTamingComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptMountTamingComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol ?setTamed\@ScriptMountTamingComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> setTamed(bool) const;
    /**
     * @symbol ?ComponentId\@ScriptMountTamingComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMountTamingComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMountTamingComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMountTamingComponent> bind();
};

}; // namespace ScriptModuleMinecraft
