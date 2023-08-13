#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptItemEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemChargeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemChargeAfterEvent : public ::ScriptModuleMinecraft::ScriptItemEvent {

public:
    // prevent constructor by default
    ScriptItemChargeAfterEvent& operator=(ScriptItemChargeAfterEvent const&) = delete;
    ScriptItemChargeAfterEvent(ScriptItemChargeAfterEvent const&)            = delete;
    ScriptItemChargeAfterEvent()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptItemChargeAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBUItemChargeEvent\@\@AEBVWeakLifetimeScope\@3\@\@Z
     */
    MCAPI
    ScriptItemChargeAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ItemChargeEvent const&, class Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
