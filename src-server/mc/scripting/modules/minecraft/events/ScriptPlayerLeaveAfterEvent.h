#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent& operator=(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

};

}
