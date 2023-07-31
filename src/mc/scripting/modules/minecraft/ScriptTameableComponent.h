#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class TameableComponent;
class TameableDefinition;
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent {

public:
    // prevent constructor by default
    ScriptTameableComponent& operator=(ScriptTameableComponent const&) = delete;
    ScriptTameableComponent(ScriptTameableComponent const&)            = delete;
    ScriptTameableComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_isValid\@?$ECSScriptActorComponent\@VTameableComponent\@\@VTameableDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTTAMEABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptTameableComponent();
#endif
    /**
     * @symbol
     * ??0ScriptTameableComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptTameableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol ?getProbability\@ScriptTameableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getProbability() const;
    /**
     * @symbol
     * ?getTameItems\@ScriptTameableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<std::string>> getTameItems() const;
    /**
     * @symbol ?tame\@ScriptTameableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> tame() const;
    /**
     * @symbol
     * ?bind\@ScriptTameableComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptTameableComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptTameableComponent> bind();
    /**
     * @symbol ?ComponentId\@ScriptTameableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
