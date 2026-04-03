#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/services/messaging/player_messaging/InteractionType.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IClientInstance;
class IEntitlementManager;
class PlayerMessagingService;
class RealmsAPI;
struct InboxMessage;
namespace Invites { struct Invite; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class InboxSession; }
namespace OreUI { struct MessageImage; }
namespace OreUI { struct MessageItem; }
namespace Realms { class InvitesService; }
// clang-format on

namespace OreUI {

class InboxFacet : public ::OreUI::FacetBase<::OreUI::InboxFacet> {
public:
    // InboxFacet inner types declare
    // clang-format off
    struct InboxMessageData;
    struct FacetInboxCategoryData;
    struct InboxSettings;
    // clang-format on

    // InboxFacet inner types define
    struct InboxMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                     mId;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mWorldId;
        ::ll::TypedStorage<8, 8, int64>                                              mDateReceived;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mDateString;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTitle;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mSubtitle;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mWorldName;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mSender;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mSenderXuid;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mContent;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mImageSource;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mInvitationId;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mInstanceId;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mInboxCategory;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mReportId;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mSurface;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplate;
        ::ll::TypedStorage<8, 16, ::std::optional<double>>                           mDaysLeft;
        ::ll::TypedStorage<1, 1, bool>                                               mRead;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageImage>>              mImages;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageButton>>             mButtons;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageItem>>               mItems;
        ::ll::TypedStorage<8, 232, ::std::optional<::OreUI::MessageGamedrop>>        mGamedrop;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationType>                  mInvitationType;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationStatus>                mInvitationStatus;
        ::ll::TypedStorage<8, 24, ::std::vector<::PlayerMessaging::InteractionType>> mOfflineInteractionTypes;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>                    mStyle;
        // NOLINTEND

    public:
        // prevent constructor by default
        InboxMessageData& operator=(InboxMessageData const&);
        InboxMessageData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI InboxMessageData(::OreUI::InboxFacet::InboxMessageData&&);

        MCAPI InboxMessageData(::OreUI::InboxFacet::InboxMessageData const&);

        MCAPI explicit InboxMessageData(::Invites::Invite const& invite);

        MCAPI InboxMessageData(
            ::InboxMessage const&                                      data,
            ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
            ::Bedrock::NonOwnerPointer<::DateManager const>            dateManager,
            ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
        );

        MCAPI ::OreUI::InboxFacet::InboxMessageData& operator=(::OreUI::InboxFacet::InboxMessageData&&);

        MCAPI ~InboxMessageData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::InboxFacet::InboxMessageData&&);

        MCAPI void* $ctor(::OreUI::InboxFacet::InboxMessageData const&);

        MCAPI void* $ctor(::Invites::Invite const& invite);

        MCAPI void* $ctor(
            ::InboxMessage const&                                      data,
            ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
            ::Bedrock::NonOwnerPointer<::DateManager const>            dateManager,
            ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct FacetInboxCategoryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>          mName;
        ::ll::TypedStorage<8, 32, ::std::string>          mNameLoc;
        ::ll::TypedStorage<8, 8, uint64>                  mUnreadCount;
        ::ll::TypedStorage<8, 8, uint64>                  mPriority;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> mImageUrl;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetInboxCategoryData& operator=(FacetInboxCategoryData const&);
        FacetInboxCategoryData(FacetInboxCategoryData const&);
        FacetInboxCategoryData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FacetInboxCategoryData(::OreUI::InboxFacet::FacetInboxCategoryData&&);

        MCAPI ~FacetInboxCategoryData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::OreUI::InboxFacet::FacetInboxCategoryData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct InboxSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShowMessageBadges;
        ::ll::TypedStorage<1, 1, bool> mShowInvitesBadges;
        ::ll::TypedStorage<1, 1, bool> mShowOnlyFriendInvites;
        ::ll::TypedStorage<1, 1, bool> mDirty;
        ::ll::TypedStorage<1, 1, bool> mSaved;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void toggleInvitesBadges();

        MCAPI void toggleMessageBadges();

        MCAPI void toggleOnlyFriendInvites();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::InboxSession>> mInboxSession;
    ::ll::TypedStorage<1, 1, bool>                                      mMarketplacePassSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InboxFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InboxFacet(
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );

    MCAPI void acceptInvitation(::std::string const& instanceId);

    MCAPI void deleteAllRead();

    MCAPI void deleteNotification(::std::string const& messageId, ::std::string const& instanceId);

    MCAPI ::std::vector<::OreUI::InboxFacet::FacetInboxCategoryData> const& getCategoryData();

    MCAPI ::std::vector<::OreUI::InboxFacet::InboxMessageData> const& getData() const;

    MCAPI bool getRealmsSubscriber() const;

    MCAPI ::OreUI::InboxFacet::InboxSettings const& getSettings() const;

    MCFOLD bool isMarketplacePassSubscriber();

    MCAPI void markAllRead();

    MCAPI bool messagingServiceFailed() const;

    MCAPI void rejectInvitation(::std::string const& instanceId);

    MCAPI void reloadInvites();

    MCAPI void
    reportClick(::std::string const& messageId, ::std::string const& instanceId, ::std::string const& buttonId);

    MCAPI void requestMessages(::std::string const& categoryId);

    MCAPI void saveSettings();

    MCAPI void setNotificationRead(::std::string const& instanceId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    InviteSort(::OreUI::InboxFacet::InboxMessageData const& f1, ::OreUI::InboxFacet::InboxMessageData const& f2);
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
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );
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
