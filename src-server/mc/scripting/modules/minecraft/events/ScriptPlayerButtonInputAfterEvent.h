#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerButtonInputAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka2e9f9;
    ::ll::UntypedStorage<4, 4>  mUnk9cc235;
    ::ll::UntypedStorage<4, 4>  mUnk9fab3e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerButtonInputAfterEvent& operator=(ScriptPlayerButtonInputAfterEvent const&);
    ScriptPlayerButtonInputAfterEvent(ScriptPlayerButtonInputAfterEvent const&);
    ScriptPlayerButtonInputAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
