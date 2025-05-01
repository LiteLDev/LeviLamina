#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9275d1;
    ::ll::UntypedStorage<1, 1> mUnkf07758;
    ::ll::UntypedStorage<4, 4> mUnk93cfec;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEvent& operator=(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
