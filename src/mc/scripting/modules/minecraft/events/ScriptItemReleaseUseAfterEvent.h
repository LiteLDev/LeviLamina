#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkcdbc04;
    ::ll::UntypedStorage<8, 32> mUnka6d463;
    ::ll::UntypedStorage<4, 4>  mUnk118490;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemReleaseUseAfterEvent& operator=(ScriptItemReleaseUseAfterEvent const&);
    ScriptItemReleaseUseAfterEvent(ScriptItemReleaseUseAfterEvent const&);
    ScriptItemReleaseUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
