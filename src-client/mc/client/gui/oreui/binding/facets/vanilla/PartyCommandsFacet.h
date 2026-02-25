#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CommandState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyCommandError.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Parties { struct PartySystem; }
// clang-format on

namespace OreUI {

class PartyCommandsFacet : public ::OreUI::FacetBase<::OreUI::PartyCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::Bedrock::NonOwnerPointer<::Parties::PartySystem>>> mPartySystem;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                        mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mCreatePartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mJoinPartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mAcceptInviteState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _runCommandAndUpdateState(
        ::Bedrock::Threading::Async<bool>                  task,
        ::OreUI::CommandState<::OreUI::PartyCommandError>& state
    );

    MCAPI void acceptInvite(::std::string const& partyId, ::std::string const& connectionString);

    MCAPI void createParty();

    MCAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getAcceptInviteState() const;

    MCAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getCreatePartyState() const;

    MCFOLD ::OreUI::CommandState<::OreUI::PartyCommandError> const& getJoinPartyState() const;

    MCAPI void ignoreInvite(::std::string const& partyId, ::std::string const& inviterXuid);

    MCAPI void joinParty(::std::string const& partyId);

    MCAPI void leaveParty();

    MCAPI void removeMember(::std::string const& memberXuid, bool preventRejoin);

    MCAPI void sendInvite(::std::string const& xuid);

    MCAPI void setLeader(::std::string const& memberXuid);

    MCAPI void setPrivacy(::Parties::PartyPrivacy newPrivacy);

    MCAPI void travelToPendingDestination();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
