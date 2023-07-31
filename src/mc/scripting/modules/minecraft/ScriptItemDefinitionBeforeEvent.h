#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemDefinitionEventTriggeredEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemDefinitionBeforeEvent {

public:
    // prevent constructor by default
    ScriptItemDefinitionBeforeEvent& operator=(ScriptItemDefinitionBeforeEvent const&) = delete;
    ScriptItemDefinitionBeforeEvent()                                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMDEFINITIONBEFOREEVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemDefinitionBeforeEvent();
#endif
    /**
     * @symbol
     * ??0ScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAUItemDefinitionEventTriggeredEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemDefinitionBeforeEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemDefinitionEventTriggeredEvent&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??0ScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemDefinitionBeforeEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent const&);
    /**
     * @symbol ??0ScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptItemDefinitionBeforeEvent(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&&);
    /**
     * @symbol
     * ?bind\@ScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent>
    bind();
    /**
     * @symbol ??4ScriptItemDefinitionBeforeEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemDefinitionBeforeEvent&&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
