#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/client/game/ExternalServer.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/world/WorldInfo.h"
#include "mc/network/PingedCompatibleServer.h"

// auto generated forward declare list
// clang-format off
class ThirdPartyServer;
// clang-format on

struct NetworkWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                         mPlayerCount;
    ::ll::TypedStorage<8, 32, ::std::string>                         mOwnerName;
    ::ll::TypedStorage<8, 32, ::std::string>                         mOwnerXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                         mWorldName;
    ::ll::TypedStorage<8, 32, ::std::string>                         mGameTypeString;
    ::ll::TypedStorage<8, 32, ::std::string>                         mVersion;
    ::ll::TypedStorage<1, 1, bool>                                   mWasDiscoveredOnLAN;
    ::ll::TypedStorage<1, 1, bool>                                   mIsHardcore;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes>   mAuthNegotiation;
    ::ll::TypedStorage<8, 232, ::ExternalServer>                     mExternalServer;
    ::ll::TypedStorage<8, 400, ::PingedCompatibleServer>             mRemoteServer;
    ::ll::TypedStorage<8, 680, ::Social::MultiplayerGameInfo>        mFriendGame;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ThirdPartyServer>> mThirdPartyServer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldInfo();

    MCAPI explicit NetworkWorldInfo(::ExternalServer& externalServer);

    MCAPI explicit NetworkWorldInfo(::Social::MultiplayerGameInfo const& friendGame);

    MCAPI explicit NetworkWorldInfo(::PingedCompatibleServer const& remoteServer);

    MCAPI NetworkWorldInfo(::NetworkWorldInfo const& rhs);

    MCAPI explicit NetworkWorldInfo(::std::shared_ptr<::ThirdPartyServer> const& server);

    MCAPI ::std::string const getPingTextureName(bool isNetworkEnabled) const;

    MCFOLD ::std::string getUpdatedHeader() const;

    MCAPI ::std::string const getWorldName(bool versionRequired) const;

    MCAPI ::NetworkWorldInfo& operator=(::NetworkWorldInfo const& rhs);

    MCAPI void updateExternalServer();

    MCAPI ~NetworkWorldInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ExternalServer& externalServer);

    MCAPI void* $ctor(::Social::MultiplayerGameInfo const& friendGame);

    MCAPI void* $ctor(::PingedCompatibleServer const& remoteServer);

    MCAPI void* $ctor(::NetworkWorldInfo const& rhs);

    MCAPI void* $ctor(::std::shared_ptr<::ThirdPartyServer> const& server);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
