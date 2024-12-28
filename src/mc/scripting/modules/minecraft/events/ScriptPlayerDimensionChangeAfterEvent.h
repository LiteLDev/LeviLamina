#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2f3b64;
    ::ll::UntypedStorage<8, 32> mUnk5326b7;
    ::ll::UntypedStorage<4, 12> mUnk6edd65;
    ::ll::UntypedStorage<8, 32> mUnk2f364e;
    ::ll::UntypedStorage<4, 12> mUnke1ab96;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
