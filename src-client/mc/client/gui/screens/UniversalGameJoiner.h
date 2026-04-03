#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class INetworkGameConnector;
struct ExperienceConnectionData;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Social { struct MultiplayerGameInfo; }
// clang-format on

class UniversalGameJoiner {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void joinGame(
        ::INetworkGameConnector&                         minecraftGame,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> clientInstance,
        ::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceConnectionData,
            ::Realms::RealmId> const& joinInfo,
        ::PlayerJoinWorldContext      context
    );
    // NOLINTEND
};
