#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/network/realms/RealmsTier.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IEntitlement;
class IEntitlementManager;
class MainMenuScreenModel;
struct RealmsWorldInfo;
namespace Json { class Value; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct SubscriptionInfo; }
namespace Realms { struct World; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetails; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

namespace RealmsScreenUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::std::string_view> getManageSubscriptionsLinkForStore(::std::string_view store);

MCNAPI ::std::string const
getPlayerCountAsString(bool canUserManageSubscription, bool canUserJoinWhenFull, ::RealmsWorldInfo worldInfo);

MCNAPI ::Realms::SubscriptionInfo getRealmSubscriptionFromWorld(
    ::Realms::World const&                                                            realmsWorld,
    ::std::weak_ptr<::std::vector<::RealmsScreenUtils::RealmsWorldLoadingDetails>>    worldList,
    ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> const&               subscriptionService,
    ::std::function<void(::RealmsScreenUtils::RealmsSubscriptionsLoadingState, bool)> callback
);

MCNAPI ::IEntitlement const&
getRealmsPlusEntitlement(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> const& entitlementManager);

MCNAPI bool isRealmsPlusSubscriptionActive(
    ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> const& entitlementManager,
    ::Bedrock::NonOwnerPointer<::DateManager const> const&      dateManager
);

MCNAPI ::Realms::RealmsTier parseRealmsTierFromJson(::Json::Value const& json, ::std::string const& fieldName);

MCNAPI void populateRealmsWorldLoadingDetailsGroup(
    ::std::weak_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup> weakGroup,
    ::std::shared_ptr<::MainMenuScreenModel>                             mainMenuScreenModel,
    ::std::function<void(bool)>                                          callback,
    ::std::function<bool(::RealmsWorldInfo&)>                            filter
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::array<::std::pair<::std::string_view, ::std::string_view>, 7> const& STORE_LINKS();
// NOLINTEND

} // namespace RealmsScreenUtils
