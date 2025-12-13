#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedBeforeEvent {
public:
    // ScriptWeatherChangedBeforeEvent inner types define
    using WeatherType = ::ScriptModuleMinecraft::ScriptWeatherType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptWeatherType const> mPreviousWeatherType;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptWeatherType>       mNewWeatherType;
    ::ll::TypedStorage<4, 4, int>                                              mDuration;
    ::ll::TypedStorage<1, 1, bool>                                             mCancel;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
