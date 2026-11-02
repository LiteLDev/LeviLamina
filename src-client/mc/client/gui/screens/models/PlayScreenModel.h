#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/interface/IWorldsProvider.h"
#include "mc/client/gui/screens/models/interface/WorldType.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class ILevelListCache;
class IMinecraftEventing;
class LevelSettings;
class ResourceLocation;
struct ExternalServer;
struct ImportResult;
struct LegacyWorldInfo;
struct LocalWorldInfo;
struct MinecraftScreenModelContext;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
struct RealmsWorldInfo;
struct WorldTemplateInfo;
namespace Core { class Path; }
namespace Legacy { class WorldImporter; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace Realms { struct World; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class PlayScreenModel : public ::MainMenuScreenModel, public ::IWorldsProvider {
public:
    // PlayScreenModel inner types declare
    // clang-format off
    struct LiveServer;
    class PlayScreenLevelListCacheObserver;
    // clang-format on

    // PlayScreenModel inner types define
    struct LiveServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::MultiplayerGameInfo>> server;
        ::ll::TypedStorage<1, 1, bool>                                             found;
        ::ll::TypedStorage<8, 8, double>                                           lastFoundTime;
        ::ll::TypedStorage<1, 1, bool>                                             dead;
        // NOLINTEND
    };

    class PlayScreenLevelListCacheObserver : public ::LevelListCacheObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PlayScreenModel&> mModel;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayScreenLevelListCacheObserver& operator=(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void
        onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type) /*override*/;

        virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

        virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

        virtual void onStorageChanged() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

        MCNAPI void $onLevelUpdated(::std::string const& levelId);

        MCNAPI void $onLevelDeleted(::std::string const& levelId);

        MCNAPI void $onStorageChanged();
        // NOLINTEND
    };

    using PlayerCountMap = ::std::map<::Realms::RealmId, int>;

    using RealmFullMap = ::std::map<::Realms::RealmId, bool>;

    using RealmsWorldList = ::std::vector<::Realms::World>;

    using StashedNetworkSelection = ::std::pair<::NetworkWorldInfo const, ::NetworkWorldType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::pair<::NetworkWorldInfo const, ::NetworkWorldType>>>
                                                                  mLastNetworkSelection;
    ::ll::TypedStorage<1, 1, bool>                                mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                mServerDetailsRequested;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mHttpProbePermission;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>    mLocalWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>    mBetaRetailLocalWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>> mWorldTemplates;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mCrossPlatformFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mLANNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mServerNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsWorldInfo>>   mRealmWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsWorldInfo>>   mUnpairedParentRealmWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::NetworkWorldInfo>>>    mThirdPartyServerWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>                        mLegacyWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>                        mBetaRetailLegacyWorldList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ResourceLocation>> mNetworkedFriendsGamerpicMap;
    ::ll::TypedStorage<8, 72, ::std::chrono::steady_clock::time_point[9]>              mUpdateTimes;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::World>>                          mWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                     mWorldsFetched;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::World>>                          mUnpairedParentWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                     mUnpairedWorldsFetched;
    ::ll::TypedStorage<8, 16, ::std::map<::Realms::RealmId, int>>                      mUnreadCounts;
    ::ll::TypedStorage<4, 4, int>                                                      mRealmWorldPartitionIndex;
    ::ll::TypedStorage<4, 24, ::std::array<int, 6>>                                    mSeenUnreadPosts;
    ::ll::TypedStorage<1, 1, bool>                                                     mLocalWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasPendingInvites;
    ::ll::TypedStorage<4, 4, int>                                                      mPendingInviteCount;
    ::ll::TypedStorage<1, 1, bool>                                                     mFetchingInvites;
    ::ll::TypedStorage<1, 1, bool>                                                     mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                     mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                                     mFoundLegacyWorlds;
    ::ll::TypedStorage<8, 128, ::LegacyWorldConversionManager>                         mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>                         mEduCloudWorlds;
    ::ll::TypedStorage<1, 1, bool>           mFetchingEduCloudWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudFetchFailed;
    ::ll::TypedStorage<4, 4, int>            mEduCloudWorldsFetchRetriesRemaining;
    ::ll::TypedStorage<8, 32, ::std::string> mEduCloudWorldsFetchNextLinkUrl;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<
            ::Bedrock::Result<::MSGraph::Models::DriveItemCollection, ::MSGraph::Models::GraphError>>>
                                                                         mEduCloudWorldsHandle;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mFetchStartTimestamp;
    ::ll::TypedStorage<8, 32, ::std::string>                             mFetchCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                       mFetchingPlayerCounts;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastRealmsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                       mJoiningRealm;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastTryJoin;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                     mRetryJoinInterval;
    ::ll::TypedStorage<4, 4, int>                                        mRetryTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mImportCallbackToken;
    ::ll::TypedStorage<1, 1, bool>                                       mFirstRealmsFetchComplete;
    ::ll::TypedStorage<1, 1, bool>                                       mFirstUnpairedParentRealmsFetchComplete;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                    mRealmsStatus;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                    mUnpairedParentRealmsStatus;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastPlayerCountUpdate;
    ::ll::TypedStorage<8, 24, ::PlayScreenModel::PlayScreenLevelListCacheObserver> mLevelListCacheObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                 mAreTrialWorldsHidden;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsEditScreenLoading;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLoadingAdditionalRealmInfo;
    ::ll::TypedStorage<4, 4, int>                                                  mNumRealmsWorldsToQuery;
    ::ll::TypedStorage<8, 16, ::std::set<::Realms::RealmId>>                       mWorldsWithDetailedInfo;
    ::ll::TypedStorage<1, 1, bool>                                                 initRequestPendingInvites;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenModel() /*override*/ = default;

    virtual int getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const /*override*/;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const index) const /*override*/;

    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const& id) const /*override*/;

    virtual bool refresh(::WorldType tabType) /*override*/;

    virtual void startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings) /*override*/;

    virtual bool isDirty() const /*override*/;

    virtual ::IMinecraftEventing& getMinecraftEventing() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayScreenModel(::MinecraftScreenModelContext context);

    MCNAPI void _navigateToEditWorldScreen(::LocalWorldInfo const& info);

    MCNAPI void _populateAdditionalRealmsWorldsInfo();

    MCNAPI void _populateLocalWorldsFromStorageSource(
        ::ILevelListCache&               levelListCache,
        ::std::vector<::LocalWorldInfo>& localWorlds,
        ::std::vector<::LocalWorldInfo>& betaRetailWorlds,
        bool                             restrictTrial,
        bool                             fireTelemetry
    );

    MCNAPI void _populateNetworkWorlds();

    MCNAPI void _populateRealmsWorldsInternal(bool ofUnpairedParentRealms);

    MCNAPI void _remove3PServersMismatchingEditorMode();

    MCNAPI void _sortRealmsWorlds(::std::string const currentUserXUID, ::std::vector<::Realms::World>& worlds);

    MCNAPI void _start3PNetworkWorld(::NetworkWorldInfo& world);

    MCNAPI void _startFriendNetworkWorld(::NetworkWorldInfo const& world);

    MCNAPI void _startRemoteNetworkWorld(::NetworkWorldInfo const& world);

    MCNAPI bool areExternalAndRemoteServerSame(::ExternalServer& externalServer, ::PingedCompatibleServer remoteServer);

    MCNAPI void convertLegacyWorld(
        ::LegacyWorldInfo                                                                       worldInfo,
        ::std::string const&                                                                    newWorldDir,
        ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)> callback
    );

    MCNAPI ::Core::PathBuffer<::std::string> const createUniquePathForWorld() const;

    MCNAPI void deleteLegacyWorld(uint legacyWorldIndex);

    MCNAPI void fetchEduCloudWorlds();

    MCNAPI void fetchRealmsPlayerCounts();

    MCNAPI void fetchRealmsWorldsForPlayScreen();

    MCNAPI void fetchThirdPartyServerWorlds(bool forceFetch);

    MCNAPI void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCNAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForImport();

    MCNAPI bool getFetchingThirdPartyWorldsInProgress() const;

    MCNAPI ::std::vector<::ResourceLocation> getLoadingPacks(::PackType type) const;

    MCNAPI int getOwnedActiveUnpairedParentRealmWorldCount() const;

    MCNAPI int getRealmWorldCount() const;

    MCNAPI void handleLegacyWorldConversionComplete(::ImportResult const& result);

    MCNAPI bool hasLocalWorldWithId(::std::string const& levelId);

    MCNAPI void initializeRealmsWorlds();

    MCNAPI bool isEditorPlaytestRoundtrip() const;

    MCNAPI bool isLocalWorldRealmsPlus(::LocalWorldInfo const& world);

    MCNAPI void navigateToAddEditExternalScreen(int id);

    MCNAPI void navigateToEditWorldScreen(int index, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCNAPI void
    navigateToEditWorldScreen(::LocalWorldInfo* info, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCNAPI void
    navigateToEditWorldScreen(::std::string const& levelId, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCNAPI void navigateToWorldSyncModalScreen(
        ::std::string const&                                                                     levelId,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> onCompleteCallback
    );

    MCNAPI ::LocalWorldInfo refreshLocalWorldInfo(::LocalWorldInfo const& worldInfo);

    MCNAPI void repopulateLocalWorlds();

    MCNAPI void setServerDetailsRequested(bool requested);

    MCNAPI void startNetworkWorld(::NetworkWorldInfo worldInfo, ::NetworkWorldType worldType);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI bool supportsEduCloudWorlds() const;

    MCNAPI void triggerMultiplayerGameRefresh(bool tryToReconnect);

    MCNAPI void updateWorldTimestamp(::NetworkWorldInfo const& worldInfo);

    MCNAPI void uploadLocalWorldFileAtIndex(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        int                                                   index,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const;

    MCNAPI ::LocalWorldInfo const* $getLocalWorldAtIndex(int const index) const;

    MCNAPI ::LocalWorldInfo const* $getLocalWorldById(::std::string const& id) const;

    MCNAPI bool $refresh(::WorldType tabType);

    MCNAPI void $startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings);

    MCNAPI bool $isDirty() const;

    MCNAPI ::IMinecraftEventing& $getMinecraftEventing() const;
    // NOLINTEND
};
