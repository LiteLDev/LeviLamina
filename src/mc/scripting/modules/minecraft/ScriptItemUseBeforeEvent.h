#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMUSEBEFOREEVENT
public:
    ScriptItemUseBeforeEvent& operator=(ScriptItemUseBeforeEvent const&) = delete;
    ScriptItemUseBeforeEvent()                                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMUSEBEFOREEVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemUseBeforeEvent();
#endif
    /**
     * @symbol ??0ScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemUseBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent const&);
    /**
     * @symbol
     * ??0ScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAUItemUseEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemUseBeforeEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemUseEvent&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??4ScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent&&);
    /**
     * @symbol
     * ?bind\@ScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseBeforeEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
