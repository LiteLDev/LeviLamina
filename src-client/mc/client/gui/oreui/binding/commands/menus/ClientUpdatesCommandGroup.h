#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientUpdatesCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
