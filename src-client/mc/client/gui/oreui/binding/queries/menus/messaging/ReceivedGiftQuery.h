#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/marketplace/ReceivedGiftStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Marketplace { class ReceivedGiftsManager; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ReceivedGiftQuery : public ::OreUI::QueryBase<::OreUI::ReceivedGiftQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Marketplace::ReceivedGiftStatus, ::Marketplace::ReceivedGiftStatus>>
                                                                                               mGiftStatus;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Marketplace::ReceivedGiftsManager>> mReceivedGiftsManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mGiftChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedGiftQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceivedGiftQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReceivedGiftQuery(::OreUI::GameDependencies const& game, ::std::string const& giftId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& giftId);
    // NOLINTEND
};

} // namespace OreUI
