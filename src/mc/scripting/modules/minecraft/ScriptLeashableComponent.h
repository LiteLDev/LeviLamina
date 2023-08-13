#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLeashableComponent {

public:
    // prevent constructor by default
    ScriptLeashableComponent& operator=(ScriptLeashableComponent const&) = delete;
    ScriptLeashableComponent(ScriptLeashableComponent const&)            = delete;
    ScriptLeashableComponent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_isValid\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTLEASHABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptLeashableComponent();
#endif
    /**
     * @symbol
     * ??0ScriptLeashableComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptLeashableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol ?getSoftDistance\@ScriptLeashableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getSoftDistance() const;
    /**
     * @symbol
     * ?leash\@ScriptLeashableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEAVScriptActor\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> leash(class ScriptModuleMinecraft::ScriptActor&) const;
    /**
     * @symbol ?unleash\@ScriptLeashableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> unleash() const;
    /**
     * @symbol
     * ?bind\@ScriptLeashableComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptLeashableComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLeashableComponent> bind();
    /**
     * @symbol ?ComponentId\@ScriptLeashableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
