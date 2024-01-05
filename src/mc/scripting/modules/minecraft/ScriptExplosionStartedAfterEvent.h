#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
struct ExplosionStartedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEvent {
public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEvent& operator=(ScriptExplosionStartedAfterEvent const&);
    ScriptExplosionStartedAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptExplosionStartedAfterEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    // symbol:
    // ??0ScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUExplosionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptExplosionStartedAfterEvent(
        struct ExplosionStartedEvent const&,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol: ?copyTo@ScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@QEBAXAEAUExplosionStartedEvent@@@Z
    MCAPI void copyTo(struct ExplosionStartedEvent&) const;

    // symbol:
    // ?getImpactedBlocks@ScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@XZ
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>
          getImpactedBlocks() const;

    // symbol:
    // ?bind@ScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptExplosionStartedAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
