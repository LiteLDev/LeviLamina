#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CommandState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyCommandError.h"
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
    MCAPI PartyCommandsFacet(
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem>                  partySystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
