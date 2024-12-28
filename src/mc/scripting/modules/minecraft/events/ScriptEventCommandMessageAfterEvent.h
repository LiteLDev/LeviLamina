#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf30696;
    ::ll::UntypedStorage<8, 32> mUnkf4ef2a;
    ::ll::UntypedStorage<4, 4>  mUnk9f14fc;
    ::ll::UntypedStorage<8, 40> mUnk587558;
    ::ll::UntypedStorage<8, 40> mUnkd32079;
    ::ll::UntypedStorage<8, 40> mUnk67a6b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEvent(ScriptEventCommandMessageAfterEvent const&);
    ScriptEventCommandMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI ScriptEventCommandMessageAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCAPI ~ScriptEventCommandMessageAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
