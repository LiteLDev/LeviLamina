#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptExplosionStartedAfterEvent.h"

// auto generated forward declare list
// clang-format off
struct ExplosionStartedEvent;
namespace ScriptModuleMinecraft { class ScriptBlock; }
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
    MCAPI ScriptExplosionStartedBeforeEvent(
        ::ExplosionStartedEvent const&        eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void setImpactedBlocks(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> const& blocks
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ExplosionStartedEvent const& eventData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
