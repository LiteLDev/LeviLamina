#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk75306a;
    ::ll::UntypedStorage<1, 1>  mUnka3b6b9;
    ::ll::UntypedStorage<1, 1>  mUnk828c22;
    ::ll::UntypedStorage<1, 1>  mUnke1be0a;
    ::ll::UntypedStorage<1, 1>  mUnk3b9aa1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedAfterEvent& operator=(ScriptWeatherChangedAfterEvent const&);
    ScriptWeatherChangedAfterEvent(ScriptWeatherChangedAfterEvent const&);
    ScriptWeatherChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
