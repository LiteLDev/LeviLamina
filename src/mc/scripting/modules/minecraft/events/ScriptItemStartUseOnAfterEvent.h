#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk986ef2;
    ::ll::UntypedStorage<8, 32> mUnkc32690;
    ::ll::UntypedStorage<4, 4>  mUnk9b8a73;
    ::ll::UntypedStorage<8, 32> mUnk15e7a5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStartUseOnAfterEvent& operator=(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
