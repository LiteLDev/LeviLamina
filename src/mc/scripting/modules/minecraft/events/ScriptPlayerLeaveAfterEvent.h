#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {
public:
    // ScriptPlayerLeaveAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerLeaveAfterEvent(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent const&);

    MCAPI ScriptPlayerLeaveAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );

    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
