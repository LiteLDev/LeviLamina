#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
    // ScriptActorRemoveAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRemovedActorId;
    ::ll::TypedStorage<8, 32, ::std::string> mTypeId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorRemoveAfterEvent(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent const&);

    MCNAPI ScriptActorRemoveAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const& actorRemoveEvent,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const& actorRemoveEvent,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
