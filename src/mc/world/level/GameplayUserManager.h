#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/IGameplayUserManagerConnector.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManagerProxy;
class GameplayUserSuspension;
class ILevelStorageManagerConnector;
class IServerMapDataManagerConnector;
class LevelStorage;
class MapItemSavedData;
class Player;
class WeakEntityRef;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GameplayUserManager : public ::IGameplayUserManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>             mActiveGameplayUsers;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>             mSuspendedGameplayUsers;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mGameplayUserEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameplayUserSuspension>>    mSuspendResumeList;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserResumedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserSuspendedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPlayerRenamedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserRemovedPublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnAnyGameplayUsersRemovedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveGameDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCreateMapSavedDataSubscription;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::GameplayUserManagerProxy>>> mGameplayUserManagerProxy;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GameplayUserManager();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameplayUserManager() = default;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>&
    getGameplayUserSuspendedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit GameplayUserManager(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
#endif

    MCAPI void _addTrackedMapPlayers(::MapItemSavedData& mapItemSavedData);

    MCAPI void _forEachActivePlayer(::std::function<bool(::Player&)> callback, bool includeRemovedPlayers) const;

#ifdef LL_PLAT_S
    MCAPI void _resumePlayer(::WeakEntityRef weakEntityUser);
#endif

    MCAPI void _saveAllPlayers(::LevelStorage& levelStorage);

#ifdef LL_PLAT_S
    MCAPI void _suspendPlayer(::WeakEntityRef weakEntityUser);

    MCAPI void addGameplayUser(::OwnerPtr<::EntityContext> userEntity);
#endif

    MCAPI void cleanupRemovedGameplayUsers();

#ifdef LL_PLAT_S
    MCAPI void clearAllGameplayUserEntities();
#endif

    MCAPI void forEachActiveGameplayUser(::std::function<bool(::EntityContext&)> callback) const;

    MCAPI bool isGameplayUserSuspended(::WeakEntityRef weakEntityUser) const;

#ifdef LL_PLAT_S
    MCAPI void queueResumePlayer(::EntityContext const& playerEntity);

    MCAPI void queueSuspendPlayer(::EntityContext const& playerEntity);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif

    MCAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector& serverMapDataManagerConnector);

#ifdef LL_PLAT_S
    MCAPI void startLeaveGame();

    MCAPI void tickSuspensions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserAddedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserResumedConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserSuspendedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::Player const&)>& $getPlayerRenamedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserRemovedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();


    // NOLINTEND
};
