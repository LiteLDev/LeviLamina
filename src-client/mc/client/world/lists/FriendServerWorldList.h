#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Network { struct ServerID; }
namespace Realms { struct RealmId; }
namespace Social { struct MultiplayerGameInfo; }
namespace Social { struct MultiplayerServiceManager; }
// clang-format on

namespace World {

class FriendServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>>
                                                                        mGetMultiplayerServiceManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::RealmId)>> mIsRealmJoinable;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                  mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::Network::ServerID, ::NetworkWorldInfo>> mServerList;
    ::ll::TypedStorage<8, 8, double>                                                         mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendServerWorldList(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                 getMultiplayerServiceManager,
        ::std::function<bool(::Realms::RealmId)> isRealmJoinable,
        ::std::function<bool()>                  isEditorModeEnabled
    );

    MCAPI ::std::unordered_map<::Network::ServerID, ::NetworkWorldInfo>
    _filterWorlds(::std::vector<::Social::MultiplayerGameInfo> const& serverList) const;

    MCAPI void _refreshWorlds();

    MCAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCAPI ~FriendServerWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                 getMultiplayerServiceManager,
        ::std::function<bool(::Realms::RealmId)> isRealmJoinable,
        ::std::function<bool()>                  isEditorModeEnabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
