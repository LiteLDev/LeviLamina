#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/InboxFacet.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IClientInstance;
struct PlayerMessagingService;
struct RealmsAPI;
namespace Core { class Path; }
namespace Invites { struct Invite; }
namespace OreUI { class IResourceAllowList; }
namespace Realms { struct InvitesService; }
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
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InboxFacet::FacetInboxCategoryData>> mCategoryData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mAllInviteListSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mCategoryDataDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mLoadedPlayerData;
    ::ll::TypedStorage<1, 1, bool>                                                        mMessagingServiceFailed;
    ::ll::TypedStorage<1, 1, bool>                                                        mRealmsSubscriber;
    ::ll::TypedStorage<8, 16, ::std::multimap<::std::string, ::std::tuple<::std::string, ::Core::Path, ::Core::Path>>>
                                                               mUpdatedImages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInboxMessageChangeSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxSession& operator=(InboxSession const&);
    InboxSession(InboxSession const&);
    InboxSession();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InboxSession(
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );

    MCAPI void _clearInvitesMessages();

    MCAPI void _handleAllInviteList(::std::vector<::Invites::Invite> invites);

    MCAPI void _loadInboxCategories();

    MCAPI void _loadInboxMessages();

    MCAPI void _loadPlayerData();

    MCAPI void _registerInboxMessageChange();

    MCAPI void _setInvitationStatus(
        ::OreUI::InboxFacet::InboxMessageData const& inMessage,
        ::Invites::Invite::InvitationStatus const&   status
    );

    MCAPI void _updateImages();

    MCAPI void acceptInvitation(::std::string const& instanceId);

    MCAPI void deleteAllRead();

    MCAPI void deleteNotification(::std::string const& messageId, ::std::string const& instanceId);

    MCAPI void loadSettings();

    MCAPI void markAllRead();

    MCAPI void rejectInvitation(::std::string const& instanceId);

    MCAPI void
    reportClick(::std::string const& messageId, ::std::string const& instanceId, ::std::string const& buttonId);

    MCAPI void saveSettings();

    MCAPI void setNotificationRead(::std::string const& instanceId);

    MCAPI ~InboxSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
