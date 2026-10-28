#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/client/social/PlayerIdentifier.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPicturePath.h"
#include "mc/client/social/UserPresenceResult.h"

namespace Social {

struct PlayerProfileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::Social::PlayerIdentifier>     playerIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                  offlineName;
    ::ll::TypedStorage<8, 32, ::std::string>                  xblName;
    ::ll::TypedStorage<8, 32, ::std::string>                  platformName;
    ::ll::TypedStorage<8, 32, ::std::string>                  realName;
    ::ll::TypedStorage<8, 104, ::Social::ProfileImageOptions> profileImage;
    ::ll::TypedStorage<8, 104, ::Social::ProfileImageOptions> avatarImage;
    ::ll::TypedStorage<8, 56, ::Social::UserPicturePath>      platformProfilePic;
    ::ll::TypedStorage<4, 4, ::Social::RelationToCurrentUser> relation;
    ::ll::TypedStorage<1, 1, bool>                            isOnline;
    ::ll::TypedStorage<1, 1, bool>                            isBlocked;
    ::ll::TypedStorage<1, 1, bool>                            isMuted;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>    presence;
    ::ll::TypedStorage<8, 32, ::std::string>                  titleName;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>           titleId;
    ::ll::TypedStorage<8, 32, ::std::string>                  presenceMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                  url;
    ::ll::TypedStorage<8, 32, ::Network::ServerID>            playingOnServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                  playingOnRealmId;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>            favoriteStatus;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerProfileData();

    MCAPI PlayerProfileData(::Social::PlayerProfileData&&);

    MCAPI PlayerProfileData(::Social::PlayerProfileData const&);

    MCAPI ::Social::PlayerProfileData& operator=(::Social::PlayerProfileData const&);

    MCAPI ~PlayerProfileData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Social::PlayerProfileData&&);

    MCAPI void* $ctor(::Social::PlayerProfileData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
