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
    MCAPI MultiplayerGameInfo();

    MCAPI MultiplayerGameInfo(::Social::MultiplayerGameInfo const&);

    MCAPI MultiplayerGameInfo(::Social::MultiplayerGameInfo&&);

    MCAPI MultiplayerGameInfo(::Social::MultiplayerServiceIdentifier service, ::std::string const& inviteHandle);

    MCAPI void getConnectionsAsJson(::Json::Value& props) const;

    MCAPI ::Social::GameConnectionInfo getOptimumConnection(bool ipV6Supported) const;

    MCAPI ::Social::MultiplayerGameInfo& operator=(::Social::MultiplayerGameInfo const&);

    MCAPI ::Social::MultiplayerGameInfo& operator=(::Social::MultiplayerGameInfo&&);

    MCAPI ~MultiplayerGameInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Social::MultiplayerGameInfo createFromSessionProperties(::Json::Value const& properties);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Social::MultiplayerGameInfo const&);

    MCAPI void* $ctor(::Social::MultiplayerGameInfo&&);

    MCAPI void* $ctor(::Social::MultiplayerServiceIdentifier service, ::std::string const& inviteHandle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
