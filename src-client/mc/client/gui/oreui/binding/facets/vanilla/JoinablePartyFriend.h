#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

namespace OreUI {

struct JoinablePartyFriend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          partyId;
    ::ll::TypedStorage<8, 656, ::OreUI::SocialPlayer> partyFriend;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~JoinablePartyFriend();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
