#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCAPI ScriptBlockExplodedAfterEvent(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCAPI ScriptBlockExplodedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCAPI ~ScriptBlockExplodedAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
