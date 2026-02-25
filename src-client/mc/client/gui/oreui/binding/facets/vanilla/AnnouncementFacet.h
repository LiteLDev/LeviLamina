#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/services/messaging/player_messaging/MessagingFacetStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct MessageData;
struct PlayerMessagingService;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct MessageImage; }
// clang-format on

namespace OreUI {

class AnnouncementFacet : public ::OreUI::FacetBase<::OreUI::AnnouncementFacet> {
public:
    // AnnouncementFacet inner types declare
    // clang-format off
    struct FacetMessage;
    struct FacetMessageList;
    // clang-format on

    // AnnouncementFacet inner types define
    struct FacetMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                              mId;
        ::ll::TypedStorage<8, 32, ::std::string>                              mInstanceId;
        ::ll::TypedStorage<8, 32, ::std::string>                              mSurface;
        ::ll::TypedStorage<8, 32, ::std::string>                              mTemplate;
        ::ll::TypedStorage<8, 32, ::std::string>                              mHeader;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mSubtitle;
        ::ll::TypedStorage<8, 32, ::std::string>                              mBody;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageImage>>       mImages;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageButton>>      mButtons;
        ::ll::TypedStorage<8, 232, ::std::optional<::OreUI::MessageGamedrop>> mGamedrop;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>             mStyle;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetMessage& operator=(FacetMessage const&);
        FacetMessage(FacetMessage const&);
        FacetMessage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FacetMessage(::OreUI::AnnouncementFacet::FacetMessage&&);

        MCAPI FacetMessage(
            ::MessageData const&                                       message,
            ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
        );

        MCAPI ~FacetMessage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::AnnouncementFacet::FacetMessage&&);

        MCAPI void* $ctor(
            ::MessageData const&                                       message,
            ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct FacetMessageList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                                      mMessageCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::AnnouncementFacet::FacetMessage>> mMessages;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>                                   mMessageService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessagingFacetStatus>                     mStatus;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                     mLastRefresh;
    ::ll::TypedStorage<8, 32, ::OreUI::AnnouncementFacet::FacetMessageList>               mFacetMessageData;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnouncementFacet& operator=(AnnouncementFacet const&);
    AnnouncementFacet(AnnouncementFacet const&);
    AnnouncementFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~AnnouncementFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _getMessageData();

    MCAPI void reportClick(
        ::std::string const& messageID,
        ::std::string const& instanceID,
        ::std::string const& surface,
        ::std::string const& buttonID
    );

    MCAPI void
    reportDismiss(::std::string const& messageID, ::std::string const& instanceID, ::std::string const& surface);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
