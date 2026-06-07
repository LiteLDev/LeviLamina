#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/client/party/parties/PartyPrivacy.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class CurrentPartyDataQuery : public ::OreUI::QueryBase<::OreUI::CurrentPartyDataQuery>,
                              public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                    mIsInParty;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>           mPartyId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Parties::PartyPrivacy>> mPrivacy;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                    mRestrictInvitesToLeader;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyDataQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CurrentPartyDataQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
