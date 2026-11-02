#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptEntityHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // ScriptProjectileHitEntityAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptEntityHitInformation> mEntityHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCNAPI ScriptProjectileHitEntityAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
