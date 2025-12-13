#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/IContentApi.h"
#include "mc/client/network/realms/IInvitesApi.h"
#include "mc/client/network/realms/ISubscriptionApi.h"
#include "mc/client/network/realms/IWorldApi.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class Options;
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Method; }
namespace Invites { struct Invite; }
namespace Invites { struct InviteId; }
namespace Json { class Value; }
namespace Realms { struct Player; }
namespace Realms { struct RealmId; }
namespace Realms { struct StoriesSettings; }
namespace Realms { struct World; }
namespace Realms::Stories { class RealmEvent; }
namespace Social { class GameConnectionInfo; }
namespace Social { class User; }
namespace Realms { struct Backup; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct Content; }
namespace Realms { struct GenericRequestServiceHandler; }
namespace Realms { struct InviteLink; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct Session; }
namespace Realms { struct SubscriptionInfo; }
namespace Realms { struct WorldBackupList; }
// clang-format on

class RealmsAPI : public ::Realms::IContentApi,
                  public ::Realms::ISubscriptionApi,
                  public ::Realms::IWorldApi,
                  public ::Realms::IInvitesApi,
                  public ::std::enable_shared_from_this<::RealmsAPI> {
public:
    // RealmsAPI inner types declare
    // clang-format off
    struct FeatureFlagPair;
    // clang-format on

    // RealmsAPI inner types define
    enum class Compatibility : int {
        Compatible         = 0,
        CompatibleShowInfo = 1,
        Outdated           = 2,
        AlphaEnded         = 3,
        UserNotAllowed     = 4,
        Forbidden          = 5,
        Banned             = 6,
        Suspended          = 7,
        Other              = 8,
    };

    enum class InviteAction : int {
        Add    = 0,
        Remove = 1,
        Op     = 2,
        DeOp   = 3,
    };

    enum class JoinStatus : int {
        Fail       = 0,
        Unassigned = 1,
        Success    = 2,
    };

    struct FeatureFlagPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk5537ca;
        ::ll::UntypedStorage<1, 1>  mUnk1b5218;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureFlagPair& operator=(FeatureFlagPair const&);
        FeatureFlagPair(FeatureFlagPair const&);
        FeatureFlagPair();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk5b2bda;
    ::ll::UntypedStorage<4, 20>  mUnk482701;
    ::ll::UntypedStorage<1, 1>   mUnkce61bf;
    ::ll::UntypedStorage<4, 4>   mUnk3f2ea9;
    ::ll::UntypedStorage<8, 16>  mUnk17fb45;
    ::ll::UntypedStorage<8, 24>  mUnk7c6863;
    ::ll::UntypedStorage<4, 4>   mUnkbf951b;
    ::ll::UntypedStorage<4, 4>   mUnk8023bc;
    ::ll::UntypedStorage<1, 1>   mUnk93d45d;
    ::ll::UntypedStorage<8, 8>   mUnkebb3b5;
    ::ll::UntypedStorage<8, 16>  mUnk899812;
    ::ll::UntypedStorage<8, 32>  mUnkeb96e8;
    ::ll::UntypedStorage<8, 32>  mUnk7ec7da;
    ::ll::UntypedStorage<8, 32>  mUnkc5672a;
    ::ll::UntypedStorage<8, 16>  mUnk5121fd;
    ::ll::UntypedStorage<8, 16>  mUnk971b5e;
    ::ll::UntypedStorage<8, 16>  mUnkcde4a1;
    ::ll::UntypedStorage<8, 16>  mUnk3dc1e8;
    ::ll::UntypedStorage<8, 64>  mUnkf80c4d;
    ::ll::UntypedStorage<8, 64>  mUnk8ae990;
    ::ll::UntypedStorage<8, 16>  mUnk434ed6;
    ::ll::UntypedStorage<8, 16>  mUnk879a51;
    ::ll::UntypedStorage<1, 1>   mUnk8b6fa0;
    ::ll::UntypedStorage<1, 1>   mUnk3840a6;
    ::ll::UntypedStorage<8, 80>  mUnkd7e02a;
    ::ll::UntypedStorage<8, 16>  mUnkfe7c75;
    ::ll::UntypedStorage<8, 16>  mUnk739a87;
    ::ll::UntypedStorage<8, 16>  mUnk3c792e;
    ::ll::UntypedStorage<8, 128> mUnk816d47;
    ::ll::UntypedStorage<8, 128> mUnka9b4aa;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAPI& operator=(RealmsAPI const&);
    RealmsAPI(RealmsAPI const&);
    RealmsAPI();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RealmsAPI() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~RealmsAPI() /*override*/;
#endif

    virtual void initializeWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    ) /*override*/;

    virtual void openWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    ) /*override*/;

    virtual void closeWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    ) /*override*/;

    virtual void resetWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    ) /*override*/;

    virtual void getPendingInviteCount(::std::function<void(::Realms::GenericStatus, int)> callback) /*override*/;

    virtual void getPendingInviteCountFriendsOnly(
        ::std::function<void(::Realms::GenericStatus, int)> callback,
        ::std::vector<::std::string> const&                 friendXuids
    ) /*override*/;

    virtual void listInvites(
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Invites::Invite>)> callback,
        bool                                                                             isPendingOnly
    ) /*override*/;

    virtual void applyContentOnRealm(
        ::Realms::RealmId const                        realmId,
        ::std::vector<::Realms::Content> const&        contents,
        ::std::function<void(::Realms::GenericStatus)> callback
    ) /*override*/;

    virtual void fetchAppliedPacks(
        ::Realms::RealmId                                                                realmId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Content>)> callback
    ) /*override*/;

    virtual void checkForExistingPack(
        ::std::string const&                                 packId,
        ::std::string const&                                 version,
        ::std::function<void(::Realms::GenericStatus, bool)> callback
    ) /*override*/;

    virtual void getSubscriptionDetails(
        ::Realms::RealmId                                                          worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::SubscriptionInfo)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RealmsAPI(
        ::std::weak_ptr<::Realms::GenericRequestServiceHandler> genericRequestServiceClient,
        ::std::string const&                                    realmsEndpoint,
        ::std::string const&                                    realmsV2Endpoint,
        ::std::string const&                                    relyingParty,
        ::std::weak_ptr<::FlightingService>                     flightingService
    );

    MCNAPI_C void _fetchWorldsWithEndPoint(
        ::std::string const&                                                           endPoint,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback,
        bool                                                                           userWaiting
    );

    MCNAPI_C void _getRealmEvents(
        ::Realms::RealmId const&                                                                     realmId,
        bool                                                                                         onlyNew,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Stories::RealmEvent>)> callback,
        int                                                                                          limit,
        int64                                                                                        before
    );

    MCNAPI_C ::std::weak_ptr<::RealmsAPI> _getWeakThis();

    MCNAPI_C bool _isFeatureOnNoOverride(::std::string const& featureName);

    MCNAPI_C void _refreshEndpoints();

    MCNAPI_C void _refreshFeatureFlagGameOptions();

    MCNAPI_C void _sendRequest(
        ::std::string const&                              callName,
        ::std::optional<::Realms::RealmId>                realmId,
        ::Bedrock::Http::Method const&                    method,
        ::std::string const&                              url,
        ::std::string const&                              contentType,
        ::std::string const&                              body,
        ::Bedrock::Http::RequestPriority                  priority,
        ::std::function<void(::Bedrock::Http::Response&)> callback
    );

    MCNAPI_C void _sendRequestV2(
        ::std::string const&                              callName,
        ::std::optional<::Realms::RealmId>                realmId,
        ::Bedrock::Http::Method const&                    method,
        ::std::string const&                              url,
        ::std::string const&                              contentType,
        ::std::string const&                              body,
        ::Bedrock::Http::RequestPriority                  priority,
        ::std::function<void(::Bedrock::Http::Response&)> callback
    );

    MCNAPI_C void _updateFeatureFlags();

    MCNAPI_C void acceptInvite(
        ::Invites::InviteId                                                     invite,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void acceptLink(
        ::std::string const&                                                                     linkId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason, ::Realms::World)> callback
    );

    MCNAPI_C void acknowledgeRealmEvents(
        ::Realms::RealmId                              realmId,
        ::std::vector<::Realms::Stories::RealmEvent>   realmEvents,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void activateNewPreviewRealm(
        ::Realms::RealmId                                                 worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::RealmId)> callback
    );

    MCNAPI_C void addToBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           currentUserXuid,
        ::std::string const&                           xuidToBlock,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void
    checkCompatibility(::std::function<void(::Realms::GenericStatus, ::RealmsAPI::Compatibility)> callback);

    MCNAPI_C void createInviteLink(
        ::Realms::RealmId                                                    worldId,
        int64                                                                expiry,
        ::std::function<void(::Realms::GenericStatus, ::Realms::InviteLink)> callback
    );

    MCNAPI_C void deleteBackup(
        ::Realms::RealmId const&                                      worldId,
        int                                                           slotIndex,
        ::std::string const&                                          backupId,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI_C void deleteInvite(::Invites::InviteId invite, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void
    deleteInviteLink(::std::string const& linkId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void deleteRealm(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void deleteStory(::Realms::RealmId worldId, ::std::string const& storyId);

    MCNAPI_C ::std::vector<::Realms::Backup> extractBackupsAndMetadata(::Json::Value const& root);

    MCNAPI_C void fetchActiveWorldCurrentSize(
        ::Realms::RealmId                                     realmId,
        int                                                   slotIndex,
        ::std::function<void(::Realms::GenericStatus, int64)> callback
    );

    MCNAPI_C void fetchWorldBackups(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Backup>)> callback
    );

    MCNAPI_C void fetchWorldBackupsList(
        ::Realms::RealmId                                                         worldId,
        int                                                                       slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::WorldBackupList)> callback
    );

    MCNAPI_C void fetchWorlds(
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback,
        bool                                                                           userWaiting
    );

    MCNAPI_C void getAllInviteLinks(
        ::Realms::RealmId                                                                   worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::InviteLink>)> callback
    );

    MCNAPI_C void getBlocklist(
        ::Realms::RealmId                                                            worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::std::string>)> callback
    );

    MCNAPI_C void
    getOnlinePlayers(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::World>)> callback);

    MCNAPI_C void
    getPreferredRegions(::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::ServerRegion>)> callback);

    MCNAPI_C void getRealmsConfigDetails(
        ::Realms::RealmId                                                    worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::ConfigInfo)> callback
    );

    MCNAPI_C void getStoriesSettings(
        ::std::string const&                                                      worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::StoriesSettings)> callback
    );

    MCNAPI_C void getUserMemberOfWorldCount(::std::function<void(::Realms::GenericStatus, bool)> callback);

    MCNAPI_C void getWorld(
        ::Realms::RealmId                                               worldId,
        bool                                                            userWaiting,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCNAPI_C void getWorldFromLink(
        ::std::string const&                                                                   linkId,
        ::std::function<void(::Realms::GenericStatus, ::Json::Value const&&, ::Realms::World)> callback
    );

    MCNAPI_C void getWorldMembers(
        ::Realms::RealmId                                                               worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Player>)> callback
    );

    MCNAPI_C void getWorldSessions(
        ::Realms::RealmId                                                                worldId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Session>)> callback
    );

    MCNAPI_C void initialize();

    MCNAPI_C void
    initializeRealmsUserEventHandler(::std::function<::std::shared_ptr<::Social::User>()> _getPrimaryUser);

    MCNAPI_C void initiateWorldDownload(
        ::std::string const&                                                                 worldId,
        int                                                                                  slotIndex,
        ::std::string const&                                                                 version,
        ::std::function<void(::Realms::GenericStatus, ::std::string, ::std::string, uint64)> callback,
        ::std::function<void(int)>                                                           retryCallback
    );

    MCNAPI_C void initiateWorldDownloadV2(
        ::std::string const&                                                                 worldId,
        int                                                                                  slotIndex,
        ::std::string const&                                                                 backupId,
        ::std::function<void(::Realms::GenericStatus, ::std::string, ::std::string, uint64)> callback
    );

    MCNAPI_C void initiateWorldUpload(
        ::std::string const&                                                         worldId,
        int                                                                          slotIndex,
        bool                                                                         isPack,
        ::std::function<void(::Realms::GenericStatus, ::std::string, ::std::string)> callback
    );

    MCNAPI_C bool isFeatureOn(::std::string const& featureName) const;

    MCNAPI_C void isValidClubsName(
        ::std::string                                                           name,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C bool isValidRealmName(::std::string name);

    MCNAPI_C void joinWorld(
        ::Realms::RealmId                                                worldId,
        ::std::function<void(::Social::GameConnectionInfo const&, bool)> successCallback,
        ::std::function<void(::Realms::GenericStatus, ::RealmsAPI::JoinStatus, ::Realms::FailureReason)> failCallback,
        ::std::function<void(int)>                                                                       retryCallback,
        ::IMinecraftEventing::RealmConnectionFlow                        realmConnectionFlow,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow)> broadcastConnectionEventRealmsRequestFunction,
        ::std::function<void(::IMinecraftEventing::RealmConnectionFlow, ::Bedrock::Http::StatusCode)>
            broadcastConnectionEventRealmsResponseFunction
    );

    MCNAPI_C void leaveWorld(::Realms::RealmId worldId, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void rejectInvite(::Invites::InviteId invite, ::std::function<void(::Realms::GenericStatus)> callback);

    MCNAPI_C void removeFromBlocklist(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void restoreBackup(
        ::Realms::RealmId                              worldId,
        ::std::string                                  backupId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI_C void restoreBackupV2(
        ::Realms::RealmId                                             worldId,
        int                                                           slotIndex,
        ::std::string const&                                          backupId,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI_C void saveAutoBackup(
        ::Realms::RealmId const&                                      worldId,
        int                                                           slotIndex,
        ::std::string const&                                          backupId,
        ::std::string const&                                          worldName,
        ::std::vector<::std::string> const&                           backupsToReplace,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI_C void saveBackup(
        ::Realms::RealmId const&                                      worldId,
        int                                                           slotIndex,
        ::std::string const&                                          worldName,
        ::std::vector<::std::string>                                  backupsToReplace,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI_C void setActiveSlot(
        ::Realms::RealmId                                                       worldId,
        int                                                                     slotIndex,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void setDefaultPermissions(
        ::Realms::RealmId                              worldId,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void setOptions(::std::weak_ptr<::Options> weakOptions);

    MCNAPI_C void setStoriesSettings(
        ::std::string const&                           worldId,
        ::Realms::StoriesSettings                      settings,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void setTexturePacksRequired(
        ::Realms::RealmId                                                       worldId,
        bool const&                                                             texturePacksRequired,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void setUserPermission(
        ::Realms::RealmId                              worldId,
        ::std::string const&                           xuid,
        ::PlayerPermissionLevel const&                 permission,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI_C void setWorldInfo(
        ::Realms::World                                                         world,
        int                                                                     difficulty,
        bool                                                                    cheatsEnabled,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI_C void update(bool isSignedIn);

    MCNAPI_C void updateAllowList(
        ::Realms::RealmId                                               worldId,
        ::std::string const&                                            currentUserXuid,
        ::std::map<::std::string, ::RealmsAPI::InviteAction>            xuidList,
        ::std::function<void(::Realms::GenericStatus, ::Realms::World)> callback
    );

    MCNAPI_C void updateInviteLink(
        ::Realms::RealmId                                                    worldId,
        ::Realms::InviteLink                                                 link,
        ::std::function<void(::Realms::GenericStatus, ::Realms::InviteLink)> callback
    );

    MCNAPI_C void updateRealmsConfig(
        ::Realms::RealmId                                             worldId,
        ::std::string const&                                          versionRef,
        ::std::function<void(::Realms::GenericStatus, ::std::string)> callback
    );

    MCNAPI_C void updateTrialAvailable(::std::function<void(::Realms::GenericStatus)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::weak_ptr<::Realms::GenericRequestServiceHandler> genericRequestServiceClient,
        ::std::string const&                                    realmsEndpoint,
        ::std::string const&                                    realmsV2Endpoint,
        ::std::string const&                                    relyingParty,
        ::std::weak_ptr<::FlightingService>                     flightingService
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $initializeWorld(
        ::Realms::RealmId                                                       worldId,
        ::std::string const&                                                    name,
        ::std::string const&                                                    description,
        ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)> callback
    );

    MCNAPI void $openWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void $closeWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void $resetWorld(
        ::Realms::RealmId                              worldId,
        ::std::function<void(::Realms::GenericStatus)> callback,
        ::std::function<void(int)>                     retryCallback
    );

    MCNAPI void $getPendingInviteCount(::std::function<void(::Realms::GenericStatus, int)> callback);

    MCNAPI void $getPendingInviteCountFriendsOnly(
        ::std::function<void(::Realms::GenericStatus, int)> callback,
        ::std::vector<::std::string> const&                 friendXuids
    );

    MCNAPI void $listInvites(
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Invites::Invite>)> callback,
        bool                                                                             isPendingOnly
    );

    MCNAPI void $applyContentOnRealm(
        ::Realms::RealmId const                        realmId,
        ::std::vector<::Realms::Content> const&        contents,
        ::std::function<void(::Realms::GenericStatus)> callback
    );

    MCNAPI void $fetchAppliedPacks(
        ::Realms::RealmId                                                                realmId,
        ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Content>)> callback
    );

    MCNAPI void $checkForExistingPack(
        ::std::string const&                                 packId,
        ::std::string const&                                 version,
        ::std::function<void(::Realms::GenericStatus, bool)> callback
    );

    MCNAPI void $getSubscriptionDetails(
        ::Realms::RealmId                                                          worldId,
        ::std::function<void(::Realms::GenericStatus, ::Realms::SubscriptionInfo)> callback
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForISubscriptionApi();

    MCNAPI static void** $vftableForIContentApi();

    MCNAPI static void** $vftableForIWorldApi();

    MCNAPI static void** $vftableForIInvitesApi();
    // NOLINTEND
};
