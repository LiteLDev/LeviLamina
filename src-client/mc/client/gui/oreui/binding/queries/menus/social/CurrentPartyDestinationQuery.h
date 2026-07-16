#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Parties { class PartyTravelManager; }
// clang-format on

namespace OreUI {

class CurrentPartyDestinationQuery : public ::OreUI::QueryBase<::OreUI::CurrentPartyDestinationQuery>,
                                     public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                         mDestinationName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                  mShouldShowJoinDestination;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>> mPartyTravelManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mUserAtDestinationSubscription;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mMainMenuDestinationName;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                                         mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mLanguageSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyDestinationQuery& operator=(CurrentPartyDestinationQuery const&);
    CurrentPartyDestinationQuery(CurrentPartyDestinationQuery const&);
    CurrentPartyDestinationQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    CurrentPartyDestinationQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
