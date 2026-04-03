#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/gui/oreui/resources/AllowListQRCode.h"
#include "mc/client/social/PlayerProfileData.h"
#include "mc/client/social/PlayerProfileState.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace Social { struct SocialChangeResult; }
// clang-format on

namespace OreUI {

class PlayerProfileFacet : public ::OreUI::FacetBase<::OreUI::PlayerProfileFacet> {
public:
    // PlayerProfileFacet inner types declare
    // clang-format off
    struct PlayerProfileDataWrapper;
    struct PlayerProfileWrapper;
    // clang-format on

    // PlayerProfileFacet inner types define
    struct PlayerProfileDataWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 584, ::Social::PlayerProfileData>    playerProfileData;
        ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> profileImage;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>          platformProfilePic;
        ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> avatar;
        ::ll::TypedStorage<4, 4, ::OreUI::ProfileImageState>       avatarState;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListQRCode>        qrCode;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> profileSubscription;
        ::ll::TypedStorage<1, 1, bool>                             isInSameGame;
        ::ll::TypedStorage<4, 4, ::OreUI::PartyPresence>           partyPresence;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerProfileDataWrapper& operator=(PlayerProfileDataWrapper const&);
        PlayerProfileDataWrapper(PlayerProfileDataWrapper const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PlayerProfileDataWrapper();

        MCAPI PlayerProfileDataWrapper(::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper&&);

        MCAPI ::RelationshipStatus favoriteStatus() const;

        MCFOLD ::std::string const& getOfflineName() const;

        MCAPI ::OreUI::PartyPresence getPartyPresence() const;

        MCFOLD ::std::string const& getPlatformId() const;

        MCFOLD ::std::string const& getPlatformName() const;

        MCFOLD ::std::string const& getPlayingOnRealmId() const;

        MCFOLD ::std::string const& getPlayingOnServerId() const;

        MCFOLD ::OreUI::SocialPresence getPresence() const;

        MCFOLD ::std::string const& getPresenceMessage() const;

        MCFOLD ::std::string const& getRealName() const;

        MCFOLD ::Social::RelationToCurrentUser getRelationship() const;

        MCFOLD ::std::string const& getTitleName() const;

        MCFOLD ::std::string const& getUrl() const;

        MCFOLD ::std::string const& getXblName() const;

        MCFOLD ::std::string const& getXuid() const;

        MCAPI bool isBlocked() const;

        MCAPI bool isMuted() const;

        MCAPI ~PlayerProfileDataWrapper();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct PlayerProfileWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::Social::PlayerProfileState>                            state;
        ::ll::TypedStorage<8, 1096, ::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper> data;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                              mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                              mImagesDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerProfileFacet::PlayerProfileWrapper>> mTrackedProfiles;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                       mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>            mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>       mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                                     mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mAsyncImageSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mImageUpdatedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<4, 4, int>                                                    mSocialChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerProfileFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerProfileFacet(
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList
    );

    MCAPI void _applySocialChange(::Social::SocialChangeResult const& result);

    MCAPI ::OreUI::PlayerProfileFacet::PlayerProfileWrapper&
    _updateTrackedProfile(::Social::PlayerProfile const& playerProfile);

    MCAPI void fetchOfflineProfile();

    MCFOLD ::std::vector<::OreUI::PlayerProfileFacet::PlayerProfileWrapper> const& getTrackedProfiles() const;

    MCAPI void refetchProfile(::std::string const& xuid, ::std::string const& platformId);

    MCAPI void subscribeToProfile(::std::string const& xuid, ::std::string const& platformId);
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
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList
    );
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
