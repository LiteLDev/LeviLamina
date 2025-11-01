#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserDataObject; }
namespace Social { class User; }
namespace Social { class UserData; }
namespace Social { struct AuthToken; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct PlayerIDs; }
// clang-format on

namespace Social {

class Identity : public ::std::enable_shared_from_this<::Social::Identity> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk168348;
    ::ll::UntypedStorage<1, 1> mUnk2436b9;
    ::ll::UntypedStorage<8, 32> mUnkc3caa1;
    ::ll::UntypedStorage<8, 32> mUnk7dafe5;
    ::ll::UntypedStorage<4, 4> mUnk8c70f8;
    // NOLINTEND

public:
    // prevent constructor by default
    Identity& operator=(Identity const&);
    Identity(Identity const&);
    Identity();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Identity() = default;

    // vIndex: 1
    virtual ::Social::IdentityEventResponse initialize(::std::weak_ptr<::Social::User>);

    // vIndex: 2
    virtual ::Social::IdentityType getType() const = 0;

    // vIndex: 3
    virtual void tick();

    // vIndex: 4
    virtual void signIn(::Social::IdentitySignInProperties const&);

    // vIndex: 5
    virtual void cancelSignIn();

    // vIndex: 6
    virtual ::Bedrock::Threading::Async<bool> signOut();

    // vIndex: 7
    virtual void doDisconnect();

    // vIndex: 8
    virtual bool isSignedIn() const;

    // vIndex: 9
    virtual bool isNewAccount() const;

    // vIndex: 10
    virtual bool isSignInInProgress() const;

    // vIndex: 11
    virtual bool isGuest() const;

    // vIndex: 12
    virtual bool isRemote() const;

    // vIndex: 13
    virtual ::gsl::span<::Social::IdentityType const> getDependencies() const;

    // vIndex: 14
    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    // vIndex: 15
    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType);

    // vIndex: 16
    virtual ::std::string const& getId() const;

    // vIndex: 17
    virtual ::Social::PlayerIDs getIds() const;

    // vIndex: 18
    virtual ::Bedrock::Threading::Async<::Social::AuthToken> getAuthToken(::std::string const&) const;

    // vIndex: 19
    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    // vIndex: 20
    virtual void setUserDataObject(::Social::IUserDataObject const&);

    // vIndex: 21
    virtual ::Social::UserData const getUserData(::std::string const&) const;

    // vIndex: 22
    virtual void setUserData(::std::string const&, ::Social::UserData const&);

    // vIndex: 23
    virtual bool hasCachedCredentials() const;

    // vIndex: 24
    virtual void clearCachedCredentials();

    // vIndex: 25
    virtual ::std::string getDisplayName() const;

    // vIndex: 26
    virtual void setPresence(::std::string const&);

    // vIndex: 27
    virtual void clearPresence();

    // vIndex: 28
    virtual bool hasPlayedLegacyGame() const;

    // vIndex: 29
    virtual bool getLegacyOptionsData(::std::vector<uchar>&);

    // vIndex: 30
    virtual void checkIsLegacyPlayer(::std::weak_ptr<::Social::User>);

    // vIndex: 31
    virtual bool hasPremiumPlatformAccess() const;

    // vIndex: 32
    virtual void checkPremiumPlatformStatusAsync(::std::function<void(bool)>);

    // vIndex: 33
    virtual bool hasPlatformIcons() const;

    // vIndex: 34
    virtual bool hasPlatformProfileCards() const;

    // vIndex: 35
    virtual ::std::string getPlatformId() const;

    // vIndex: 36
    virtual ::std::string getPlatformOfflineID() const;

    // vIndex: 37
    virtual ::std::string getPlatformOnlineID() const;

    // vIndex: 38
    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    // vIndex: 39
    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    // vIndex: 40
    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    // vIndex: 41
    virtual ::Social::PermissionDenyReason isUserGeneratedContentAllowed() const;

    // vIndex: 42
    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    // vIndex: 43
    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    // vIndex: 44
    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    // vIndex: 45
    virtual int addPermissionsChangeListener(::std::function<void()>);

    // vIndex: 46
    virtual void removePermissionsChangeListener(int);

    // vIndex: 47
    virtual bool isPlatformParentalControlsEnabled() const;

    // vIndex: 48
    virtual void refreshPlatformParentalControlsSetting();

    // vIndex: 49
    virtual void refreshFriendListProfileDataIfAllowed();

    // vIndex: 50
    virtual bool isBlockingUser(::std::string const&) const;

    // vIndex: 51
    virtual ::Bedrock::Threading::Async<::Social::PlatformUserProfileData> getProfile(::std::string const&);

    // vIndex: 52
    virtual ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>> getProfiles(::std::vector<::std::string> const&);

    // vIndex: 53
    virtual ::Bedrock::Threading::Async<::std::vector<::Social::PlatformUserProfileData>> getFriendProfiles();

    // vIndex: 54
    virtual void pruneProfileImageCache();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
