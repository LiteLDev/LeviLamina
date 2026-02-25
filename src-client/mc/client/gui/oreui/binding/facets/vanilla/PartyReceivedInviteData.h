#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

namespace OreUI {

struct PartyReceivedInviteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::OreUI::SocialPlayer> mInviter;
    ::ll::TypedStorage<8, 32, ::std::string>          mPartyId;
    ::ll::TypedStorage<8, 32, ::std::string>          mConnectionString;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteData& operator=(PartyReceivedInviteData const&);
    PartyReceivedInviteData(PartyReceivedInviteData const&);
    PartyReceivedInviteData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyReceivedInviteData(::OreUI::PartyReceivedInviteData&&);

    MCAPI ~PartyReceivedInviteData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::PartyReceivedInviteData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
