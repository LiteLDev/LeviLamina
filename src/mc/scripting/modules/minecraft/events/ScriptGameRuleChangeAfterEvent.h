#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9275d1;
    ::ll::UntypedStorage<1, 1> mUnkf07758;
    ::ll::UntypedStorage<4, 8> mUnk4aafd8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEvent& operator=(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
