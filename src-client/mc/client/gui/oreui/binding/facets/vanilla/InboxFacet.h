#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SentimentQuestion.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IEntitlementManager;
class PlayerMessagingService;
class RealmsAPI;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class InboxSession; }
namespace OreUI { struct MessageImage; }
namespace OreUI { struct MessageItem; }
namespace Realms { class InvitesService; }
// clang-format on

namespace OreUI {

class InboxFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::InboxFacet> {
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
        ::ll::TypedStorage<8, 32, ::std::string>                               mId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mWorldId;
        ::ll::TypedStorage<8, 8, int64>                                        mDateReceived;
        ::ll::TypedStorage<8, 32, ::std::string>                               mDateString;
        ::ll::TypedStorage<8, 32, ::std::string>                               mTitle;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>              mSubtitle;
        ::ll::TypedStorage<8, 32, ::std::string>                               mWorldName;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSender;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSenderXuid;
        ::ll::TypedStorage<8, 32, ::std::string>                               mContent;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInvitationId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInstanceId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInboxCategory;
        ::ll::TypedStorage<8, 32, ::std::string>                               mReportId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSurface;
        ::ll::TypedStorage<8, 32, ::std::string>                               mTemplate;
        ::ll::TypedStorage<8, 16, ::std::optional<double>>                     mDaysLeft;
        ::ll::TypedStorage<1, 1, bool>                                         mRead;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageImage>>        mImages;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageButton>>       mButtons;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageItem>>         mItems;
        ::ll::TypedStorage<8, 232, ::std::optional<::OreUI::MessageGamedrop>>  mGamedrop;
        ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::SentimentQuestion>> mSentimentQuestion;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationType>            mInvitationType;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationStatus>          mInvitationStatus;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>              mStyle;
        // NOLINTEND
    };

    struct FacetInboxCategoryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>          mName;
        ::ll::TypedStorage<8, 32, ::std::string>          mNameLoc;
        ::ll::TypedStorage<8, 8, uint64>                  mUnreadCount;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> mImageUrl;
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

    // NOLINTEND
};

} // namespace OreUI
