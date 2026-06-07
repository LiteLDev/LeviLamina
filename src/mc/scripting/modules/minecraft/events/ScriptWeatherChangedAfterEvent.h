#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {
public:
    // ScriptWeatherChangedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDimension;
    ::ll::TypedStorage<1, 1, bool>           mWasRaining;
    ::ll::TypedStorage<1, 1, bool>           mWasLightning;
    ::ll::TypedStorage<1, 1, bool>           mIsRaining;
    ::ll::TypedStorage<1, 1, bool>           mIsLightning;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWeatherChangedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
