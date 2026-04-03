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
    // prevent constructor by default
    JoinablePartyFriend& operator=(JoinablePartyFriend const&);
    JoinablePartyFriend(JoinablePartyFriend const&);
    JoinablePartyFriend();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoinablePartyFriend(::OreUI::JoinablePartyFriend&&);

    MCAPI ~JoinablePartyFriend();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::JoinablePartyFriend&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
