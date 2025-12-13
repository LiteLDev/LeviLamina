#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbe030b;
    ::ll::UntypedStorage<8, 40> mUnk5330f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingChangeAfterEvent& operator=(ScriptPackSettingChangeAfterEvent const&);
    ScriptPackSettingChangeAfterEvent(ScriptPackSettingChangeAfterEvent const&);
    ScriptPackSettingChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent&&);

    MCNAPI ~ScriptPackSettingChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
