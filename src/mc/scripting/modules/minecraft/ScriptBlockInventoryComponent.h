#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {

public:
    // prevent constructor by default
    ScriptBlockInventoryComponent& operator=(ScriptBlockInventoryComponent const&) = delete;
    ScriptBlockInventoryComponent(ScriptBlockInventoryComponent const&)            = delete;
    ScriptBlockInventoryComponent()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKINVENTORYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockInventoryComponent();
#endif
    /**
     * @symbol
     * ?bind\@ScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockInventoryComponent>
    bind();
    /**
     * @symbol
     * ?getOrCreateContainer\@ScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptContainerWrapper\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>
    getOrCreateContainer();
    /**
     * @symbol
     * ?getOrCreateContainerV010\@ScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockInventoryComponentContainer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockInventoryComponentContainer>>
    getOrCreateContainerV010();
    /**
     * @symbol ??4ScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockInventoryComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockInventoryComponent&&);
    /**
     * @symbol ?ComponentId\@ScriptBlockInventoryComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
