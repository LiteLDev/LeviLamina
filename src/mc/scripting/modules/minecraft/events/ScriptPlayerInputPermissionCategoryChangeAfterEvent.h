#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputPermissionCategoryChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk582b07;
    ::ll::UntypedStorage<1, 1>  mUnk85edce;
    ::ll::UntypedStorage<1, 1>  mUnkcfc97a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputPermissionCategoryChangeAfterEvent&
    operator=(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
