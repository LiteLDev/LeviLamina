#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/marketplace/GiftRecipientErrorState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Marketplace { class GiftingFriendsManager; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class GiftRecipientErrorQuery : public ::OreUI::QueryBase<::OreUI::GiftRecipientErrorQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Marketplace::GiftingFriendsManager>> mGiftingFriendsManager;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::Marketplace::GiftRecipientErrorState, ::Marketplace::GiftRecipientErrorState>>
                                                                                mErrorState;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mErrorChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GiftRecipientErrorQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GiftRecipientErrorQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
