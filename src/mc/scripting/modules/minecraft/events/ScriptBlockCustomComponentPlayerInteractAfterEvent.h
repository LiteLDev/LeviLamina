#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
                                                                    mPlayer;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>              mHitAbsolute;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>              mHitRelative;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEvent const&);
    ScriptBlockCustomComponentPlayerInteractAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&
    );

    MCAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent const&
    );

    MCAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
