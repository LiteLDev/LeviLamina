#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/LocalWorldConnectArgumentHandler.h"
#include "mc/client/game/SessionIdArgumentHandler.h"
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/application/UriListener.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/json/ValueType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class DefaultImportContext;
class IMinecraftGame;
namespace Json { class Value; }
namespace Realms { struct RealmId; }
// clang-format on

class GameArguments : public ::UriListener, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                       mMinecraft;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActivationUri>>         mQueuedUris;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActivationUri>>         mStartupUris;
    ::ll::TypedStorage<8, 32, ::SessionIdArgumentHandler>             mSessionIdArgumentHandler;
    ::ll::TypedStorage<8, 32, ::LocalWorldConnectArgumentHandler>     mLocalWorldConnectArgumentHandler;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mIdentityTimeoutStart;
    ::ll::TypedStorage<1, 1, bool>                                    mIdentityListenerRegistered;
    ::ll::TypedStorage<1, 1, bool>                                    mPlayfabSignInComplete;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                           mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mSignInSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameArguments& operator=(GameArguments const&);
    GameArguments(GameArguments const&);
    GameArguments();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameArguments() /*override*/ = default;

    virtual void tick() /*override*/;

    virtual void onUri(::ActivationUri const& uri) /*override*/;

    virtual void executeStartupUris() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameArguments(::IMinecraftGame& minecraft);

    MCNAPI void _checkStoreArguments(::ActivationUri const& uri);

    MCNAPI void _deeplinkToServer(::std::string const& connectionUrl, int connectionPort, bool askForConfirmation);

    MCNAPI ::std::string _getStringForArgument(
        ::std::unordered_map<::std::string, ::std::string> const& arguments,
        ::std::string const&                                      argument
    ) const;

    MCNAPI void _goBackPushOrReplaceRoute(::std::string const& route);

    MCNAPI void _import(
        ::std::shared_ptr<::DefaultImportContext> context,
        ::std::string const&                      mcContentPath,
        bool                                      fromTemp,
        ::LoadImportedLevelData                   loadLevelData
    );

    MCNAPI void _loadGameTypeActivity(::GameType gameType);

    MCNAPI void _onUri(::ActivationUri const& uri);

    MCNAPI void _queryForRealmAndJoin(::Realms::RealmId const& realmId);

    MCNAPI void _queryForRealmAndOpenStories(::Realms::RealmId const& realmId);

    MCNAPI void _requestAddEduServer(::std::string const& serverId);

    MCNAPI void _requestJoinEduServer(::std::string const& serverId);

    MCNAPI ::Bedrock::Threading::Async<void> _thirdPartyServersFetched();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _validateJsonMember(
        ::Json::Value const&     jsonBody,
        ::std::string const&     memberName,
        ::Json::ValueType const& valueType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame& minecraft);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();

    MCNAPI void $onUri(::ActivationUri const& uri);

    MCNAPI void $executeStartupUris();
    // NOLINTEND
};
