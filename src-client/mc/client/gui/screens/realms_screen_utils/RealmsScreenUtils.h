#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class MainMenuScreenModel;
struct IEntitlementManager;
struct RealmsWorldInfo;
namespace Realms { struct RealmId; }
namespace Realms { struct SubscriptionInfo; }
namespace Realms { struct SubscriptionService; }
namespace Realms { struct World; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetails; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

namespace RealmsScreenUtils {
// functions
// NOLINTBEGIN
MCAPI ::Realms::SubscriptionInfo getRealmSubscriptionFromWorld(
    ::Realms::World const&                                                            realmsWorld,
    ::std::weak_ptr<::std::vector<::RealmsScreenUtils::RealmsWorldLoadingDetails>>    worldList,
    ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> const&               subscriptionService,
    ::std::function<void(::RealmsScreenUtils::RealmsSubscriptionsLoadingState, bool)> callback
);

MCAPI bool isRealmsPlusSubscriptionActive(
    ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> const& entitlementManager,
    ::Bedrock::NonOwnerPointer<::DateManager const> const&      dateManager
);

MCAPI void populateMultipleRealmsWorldLoadingDetailsGroups(
    ::std::vector<::std::pair<
        ::std::weak_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>,
        ::std::function<bool(::RealmsWorldInfo&)>>> groupFilterPairs,
    ::std::shared_ptr<::MainMenuScreenModel>        mainMenuScreenModel,
    ::std::function<void(bool)>                     callback
);

MCAPI void populateRealmsWorldLoadingDetailsGroup(
    ::std::weak_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup> weakGroup,
    ::std::shared_ptr<::MainMenuScreenModel>                             mainMenuScreenModel,
    ::std::function<void(bool)>                                          callback,
    ::std::function<bool(::RealmsWorldInfo&)>                            filter
);

MCAPI ::std::optional<::Realms::RealmId> stringToRealmId(::std::string_view realmIdView);
// NOLINTEND

} // namespace RealmsScreenUtils
