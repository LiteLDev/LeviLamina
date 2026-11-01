#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CommandState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyCommandError.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Parties { class PartySystem; }
// clang-format on

namespace OreUI {

class PartyCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PartyCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>>                  mPartySystem;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                        mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mCreatePartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mJoinPartyState;
    ::ll::TypedStorage<4, 12, ::OreUI::CommandState<::OreUI::PartyCommandError>>                   mAcceptInviteState;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyCommandsFacet(
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );

    MCNAPI void _runCommandAndUpdateState(
        ::Bedrock::Threading::Async<bool>                  task,
        ::OreUI::CommandState<::OreUI::PartyCommandError>& state
    );

    MCNAPI void acceptInvite(::std::string const& partyId, ::std::string const& connectionString);

    MCNAPI void createParty();

    MCNAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getAcceptInviteState() const;

    MCNAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getCreatePartyState() const;

    MCNAPI ::OreUI::CommandState<::OreUI::PartyCommandError> const& getJoinPartyState() const;

    MCNAPI void ignoreInvite(::std::string const& partyId, ::std::string const& inviterXuid);

    MCNAPI void joinParty(::std::string const& partyId);

    MCNAPI void leaveParty();

    MCNAPI void removeMember(::std::string const& memberXuid, bool preventRejoin);

    MCNAPI void sendInvite(::std::string const& xuid);

    MCNAPI void setLeader(::std::string const& memberXuid);

    MCNAPI void setPrivacy(::Parties::PartyPrivacy newPrivacy);

    MCNAPI void travelToDestination();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
