#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
// clang-format on

namespace OreUI {

class ClientUpdatesCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ClientUpdatesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AppPlatform&>                        mAppPlatform;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>> mLaunchStoreForClientUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientUpdatesCommandGroup& operator=(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientUpdatesCommandGroup(::OreUI::GameDependencies const& game);

    MCAPI void _launchStoreForClientUpdates(::OreUI::InvocationStatus status) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
