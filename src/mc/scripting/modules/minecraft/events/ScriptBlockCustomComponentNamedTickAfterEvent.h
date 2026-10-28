#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentNamedTickIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentNamedTickAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                       public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentNamedTickAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentNamedTickAfterEvent& operator=(ScriptBlockCustomComponentNamedTickAfterEvent const&);
    ScriptBlockCustomComponentNamedTickAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentNamedTickAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickAfterEvent const&
    );

    MCAPI ScriptBlockCustomComponentNamedTickAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickAfterEvent&&);

    MCAPI ~ScriptBlockCustomComponentNamedTickAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickAfterEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentNamedTickIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                  scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
