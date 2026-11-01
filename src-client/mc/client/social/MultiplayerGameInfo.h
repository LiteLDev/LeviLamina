#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/live_events/ExperienceJoinRequestInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/file/Path.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct Nonce; }
// clang-format on

namespace Social {

class MultiplayerGameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::GameConnectionInfo>>          supportedConnections;
    ::ll::TypedStorage<8, 32, ::std::string>                                        ownerId;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                playerIds;
    ::ll::TypedStorage<8, 32, ::std::string>                                        ownerNickname;
    ::ll::TypedStorage<8, 32, ::std::string>                                        handleId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        levelId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        sessionId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        rakNetGUID;
    ::ll::TypedStorage<8, 32, ::std::string>                                        worldName;
    ::ll::TypedStorage<8, 32, ::std::string>                                        gameType;
    ::ll::TypedStorage<8, 32, ::std::string>                                        version;
    ::ll::TypedStorage<8, 8, int64>                                                 realmId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        thirdPartyServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                                        thirdPartyServerIp;
    ::ll::TypedStorage<4, 4, int>                                                   thirdPartyServerPort;
    ::ll::TypedStorage<8, 128, ::std::optional<::ExperienceJoinRequestInfo>>        experienceJoinRequest;
    ::ll::TypedStorage<4, 4, int>                                                   protocol;
    ::ll::TypedStorage<4, 4, int>                                                   maxMemberCount;
    ::ll::TypedStorage<4, 4, int>                                                   memberCount;
    ::ll::TypedStorage<4, 4, ::Social::MultiplayerServiceIdentifier>                serviceProvider;
    ::ll::TypedStorage<8, 32, ::Core::Path>                                         serviceIconPath;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                          broadcastSetting;
    ::ll::TypedStorage<1, 1, bool>                                                  lanGame;
    ::ll::TypedStorage<1, 1, bool>                                                  onlineCrossPlatformGame;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                                      transportLayer;
    ::ll::TypedStorage<4, 4, uint>                                                  titleId;
    ::ll::TypedStorage<1, 1, bool>                                                  crossPlayDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                  isEditorWorld;
    ::ll::TypedStorage<1, 1, bool>                                                  isHardcore;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::Nonce>> playerNonces;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerGameInfo();

    MCNAPI MultiplayerGameInfo(::Social::MultiplayerGameInfo const&);

    MCNAPI MultiplayerGameInfo(::Social::MultiplayerGameInfo&&);

    MCNAPI MultiplayerGameInfo(::Social::MultiplayerServiceIdentifier service, ::std::string const& inviteHandle);

    MCNAPI void getConnectionsAsJson(::Json::Value& props) const;

    MCNAPI ::Social::GameConnectionInfo getOptimumConnection(bool ipV6Supported) const;

    MCNAPI ::Social::MultiplayerGameInfo& operator=(::Social::MultiplayerGameInfo const&);

    MCNAPI ::Social::MultiplayerGameInfo& operator=(::Social::MultiplayerGameInfo&&);

    MCNAPI ~MultiplayerGameInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::MultiplayerGameInfo createFromSessionProperties(::Json::Value const& properties);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Social::MultiplayerGameInfo const&);

    MCNAPI void* $ctor(::Social::MultiplayerGameInfo&&);

    MCNAPI void* $ctor(::Social::MultiplayerServiceIdentifier service, ::std::string const& inviteHandle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
