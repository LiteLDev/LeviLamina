#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ClientInstanceScreenModel.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

class PauseScreenModel : public ::ClientInstanceScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fireClubsOpenFeedScreenEvent(::Realms::RealmId realmId, ::std::string const& clubId, int unreadPosts);

    MCAPI void fireFriendsDrawerOpenedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
