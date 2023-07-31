#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptActorComponent() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_isValid\@ScriptActorComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTACTORCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptActorComponent();
#endif
    /**
     * @symbol ??0ScriptActorComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptActorComponent(class ScriptModuleMinecraft::ScriptActorComponent const&);
    /**
     * @symbol
     * ??0ScriptActorComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptActorComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol
     * ?bind\@ScriptActorComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptActorComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorComponent> bindV010();
    /**
     * @symbol
     * ?getEntity\@ScriptActorComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> getEntity() const;
    /**
     * @symbol ??4ScriptActorComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptActorComponent&
    operator=(class ScriptModuleMinecraft::ScriptActorComponent const&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getPropertyError\@ScriptActorComponent\@ScriptModuleMinecraft\@\@IEBA?AUError\@Scripting\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error _getPropertyError(std::string_view) const;
    /**
     * @symbol ?_tryGetOwner\@ScriptActorComponent\@ScriptModuleMinecraft\@\@IEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _tryGetOwner() const;
    /**
     * @symbol ?_tryGetOwnerAsMob\@ScriptActorComponent\@ScriptModuleMinecraft\@\@IEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob* _tryGetOwnerAsMob() const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
