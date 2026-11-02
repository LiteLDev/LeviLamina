#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptExplosionStartedAfterEvent.h"

// auto generated forward declare list
// clang-format off
struct ExplosionStartedEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedBeforeEvent : public ::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptExplosionStartedBeforeEvent(
        ::ExplosionStartedEvent const&        eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI void copyTo(::ExplosionStartedEvent& explosionStartedEvent) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExplosionStartedEvent const& eventData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
