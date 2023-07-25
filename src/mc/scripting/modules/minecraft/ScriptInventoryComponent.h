#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTINVENTORYCOMPONENT
public:
    ScriptInventoryComponent& operator=(ScriptInventoryComponent const&) = delete;
    ScriptInventoryComponent(ScriptInventoryComponent const&)            = delete;
    ScriptInventoryComponent()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTINVENTORYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptInventoryComponent();
#endif
    /**
     * @symbol
     * ?getAdditionalSlotsPerStrength\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getAdditionalSlotsPerStrength() const;
    /**
     * @symbol
     * ?getCanBeSiphonedFrom\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getCanBeSiphonedFrom() const;
    /**
     * @symbol
     * ?getContainerType\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getContainerType() const;
    /**
     * @symbol ?getInventorySize\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getInventorySize() const;
    /**
     * @symbol
     * ?getOrCreateContainer\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptContainerWrapper\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>
    getOrCreateContainer();
    /**
     * @symbol
     * ?getOrCreateContainerV010\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$WeakTypedObjectHandle\@VScriptInventoryComponentContainer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();
    /**
     * @symbol ?getPrivate\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getPrivate() const;
    /**
     * @symbol
     * ?getRestrictToOwner\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getRestrictToOwner() const;
    /**
     * @symbol ??4ScriptInventoryComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptInventoryComponent&
    operator=(class ScriptModuleMinecraft::ScriptInventoryComponent&&);
    /**
     * @symbol ?ComponentId\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptInventoryComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptInventoryComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptInventoryComponent> bind();
};

}; // namespace ScriptModuleMinecraft
