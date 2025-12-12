#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4162a1;
    ::ll::UntypedStorage<8, 32> mUnk7283f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEvent& operator=(ScriptBlockExplodedAfterEvent const&);
    ScriptBlockExplodedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCNAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCNAPI ScriptBlockExplodedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCNAPI ~ScriptBlockExplodedAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
