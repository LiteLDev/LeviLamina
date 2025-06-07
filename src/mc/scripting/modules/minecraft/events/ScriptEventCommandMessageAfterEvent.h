#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
    ScriptEventCommandMessageAfterEvent& operator=(ScriptEventCommandMessageAfterEvent const&);
    ScriptEventCommandMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCNAPI ScriptEventCommandMessageAfterEvent(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCNAPI ScriptEventCommandMessageAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCNAPI ~ScriptEventCommandMessageAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptEventCommandMessageAfterEventIntermediateData> const&
                                        scriptCommandMessageEvent,
        ::Scripting::WeakLifetimeScope& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
