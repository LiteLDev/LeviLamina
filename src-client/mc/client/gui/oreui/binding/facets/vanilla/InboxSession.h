#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/InboxFacet.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IClientInstance;
class InboxSurface;
class PlayerMessagingService;
class RealmsAPI;
namespace Core { class Path; }
namespace OreUI { class IResourceAllowList; }
namespace Realms { class InvitesService; }
// clang-format on

namespace OreUI {

class InboxSession : public ::std::enable_shared_from_this<::OreUI::InboxSession> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                          mClient;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InboxFacet::InboxMessageData>>       mData;
    ::ll::TypedStorage<1, 5, ::OreUI::InboxFacet::InboxSettings>                          mSettings;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>                               mRealmsApi;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>>    mInvitesService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::DateManager const>>            mDateManager;
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>                                   mPlayerMessagingService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::InboxSurface>>                 mInboxSurface;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InboxFacet::FacetInboxCategoryData>> mCategoryData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mAllInviteListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mInboxUpdatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMessageImageLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCategoryImageLoadedSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<1, 1, bool>                             mCategoryDataDirty;
    ::ll::TypedStorage<1, 1, bool>                             mLoadedPlayerData;
    ::ll::TypedStorage<1, 1, bool>                             mMessagingServiceFailed;
    ::ll::TypedStorage<1, 1, bool>                             mRealmsSubscriber;
    ::ll::TypedStorage<8, 16, ::std::multimap<::std::string, ::std::tuple<::std::string, ::Core::Path, ::Core::Path>>>
                                                               mUpdatedImages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInboxMessageChangeSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxSession& operator=(InboxSession const&);
    InboxSession(InboxSession const&);
    InboxSession();
};

} // namespace OreUI
