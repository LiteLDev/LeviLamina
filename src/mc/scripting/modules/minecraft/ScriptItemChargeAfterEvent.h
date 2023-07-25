#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemChargeAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMCHARGEAFTEREVENT
public:
    ScriptItemChargeAfterEvent& operator=(ScriptItemChargeAfterEvent const&) = delete;
    ScriptItemChargeAfterEvent(ScriptItemChargeAfterEvent const&)            = delete;
    ScriptItemChargeAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptItemChargeAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBUItemChargeEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemChargeAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemChargeEvent const&, class Scripting::WeakLifetimeScope const&);
};

}; // namespace ScriptModuleMinecraft
