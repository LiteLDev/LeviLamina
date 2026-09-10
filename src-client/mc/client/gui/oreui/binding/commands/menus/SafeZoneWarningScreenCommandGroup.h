#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class SafeZoneWarningScreenCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SafeZoneWarningScreenCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, float, float, float>> mSetSafeZone;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                      mMarkShown;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneWarningScreenCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SafeZoneWarningScreenCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
