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
    virtual void updateEngineEvent(struct BlockEvents::BlockPlayerPlacingEvent& engineEvent) const;

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        struct BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        class Scripting::WeakLifetimeScope const&          scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI void* ctor$(
        struct BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        class Scripting::WeakLifetimeScope const&          scope
    );

    MCAPI void dtor$();

    MCAPI void updateEngineEvent$(struct BlockEvents::BlockPlayerPlacingEvent& engineEvent) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
