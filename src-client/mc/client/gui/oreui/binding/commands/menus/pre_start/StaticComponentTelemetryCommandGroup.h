#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class TelemetryManager; }
// clang-format on

namespace OreUI {

class StaticComponentTelemetryCommandGroup
: public ::OreUI::CommandGroupBase<::OreUI::StaticComponentTelemetryCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::TelemetryManager&>                           mTelemetryManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mRecordStaticElementHoveredOrFocused;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mRecordStaticElementPressed;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticComponentTelemetryCommandGroup& operator=(StaticComponentTelemetryCommandGroup const&);
    StaticComponentTelemetryCommandGroup(StaticComponentTelemetryCommandGroup const&);
    StaticComponentTelemetryCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StaticComponentTelemetryCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
