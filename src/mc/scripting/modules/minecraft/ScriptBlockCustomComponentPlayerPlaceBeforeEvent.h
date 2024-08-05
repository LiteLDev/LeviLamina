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
    // vIndex: 0
    virtual ~ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

    // vIndex: 1
    virtual void updateEngineEvent(struct BlockEvents::BlockPlayerPlacingEvent&) const;

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCAPI
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct BlockEvents::BlockPlayerPlacingEvent const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
