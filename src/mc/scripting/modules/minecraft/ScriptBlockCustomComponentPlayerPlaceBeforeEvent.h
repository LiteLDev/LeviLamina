#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockPlayerPlacingEvent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

    // vIndex: 1, symbol:
    // ?updateEngineEvent@ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@UEBAXAEAUBlockPlayerPlacingEvent@BlockEvents@@@Z
    virtual void updateEngineEvent(struct BlockEvents::BlockPlayerPlacingEvent&) const;

    // symbol: ??0ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    // symbol: ??0ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    // symbol:
    // ??0ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBUBlockPlayerPlacingEvent@BlockEvents@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct BlockEvents::BlockPlayerPlacingEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    // symbol:
    // ?bind@ScriptBlockCustomComponentPlayerPlaceBeforeEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
