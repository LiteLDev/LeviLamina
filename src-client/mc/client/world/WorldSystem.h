#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/InGameType.h"
#include "mc/client/world/InfiniteWorldConverter.h"
#include "mc/client/world/LocalWorldStarter.h"
#include "mc/client/world/NetworkWorldJoiner.h"
#include "mc/client/world/WorldEditor.h"
#include "mc/client/world/WorldResourcePackHandler.h"
#include "mc/client/world/WorldStorageHandler.h"
#include "mc/client/world/WorldTransferer.h"
#include "mc/client/world/level/WorldPlayerListTracker.h"
#include "mc/client/world/lists/ExternalServerWorldList.h"
#include "mc/client/world/lists/FriendServerWorldList.h"
#include "mc/client/world/lists/LanServerWorldList.h"
#include "mc/client/world/lists/ThirdPartyWorldList.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class FileArchiver;
class IAppPlatform;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IGameServerStartup;
class ILevelListCache;
class IMinecraftEventing;
class INetworkGameConnector;
class IResourcePackRepository;
class LevelDbEnv;
class LocalPlayer;
class ResourcePackManager;
class ServerLocator;
class ToastManager;
class WorldTemplateManager;
struct CloudSaveSystemWrapper;
struct ExternalContentManager;
struct GatheringManager;
struct IContentAcquisition;
struct IDlcValidation;
struct IEntitlementManager;
struct IExternalServerFile;
struct IGameServerShutdown;
struct IOfferRepository;
struct IStoreCatalogRepository;
struct IThirdPartyServerRepository;
struct LocalPlayerChangedConnector;
struct RealmsAPI;
struct ServicesManager;
struct TrialManager;
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
namespace World { class FeaturedWorldTemplateManager; }
namespace World { class IWorldCloudSyncer; }
namespace World { class LocalWorldList; }
namespace World { class MarketplacePassWorldTemplateManager; }
namespace World { class OwnedWorldTemplateManager; }
namespace World { class WorldActivitySessionTracker; }
// clang-format on

namespace World {

class WorldSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                       mLevelListCache;
    ::ll::TypedStorage<1, 1, bool const>                                               mIsEditorMode;
    ::ll::TypedStorage<8, 144, ::World::ExternalServerWorldList>                       mExternalServerWorldList;
    ::ll::TypedStorage<8, 272, ::World::FriendServerWorldList>                         mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::LocalWorldList>>              mLocalWorldList;
    ::ll::TypedStorage<8, 192, ::World::ThirdPartyWorldList>                           mThirdPartyWorldList;
    ::ll::TypedStorage<8, 224, ::World::LanServerWorldList>                            mLanServerWorldList;
    ::ll::TypedStorage<8, 296, ::World::WorldResourcePackHandler>                      mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 152, ::World::WorldStorageHandler>                           mWorldStorageHandler;
    ::ll::TypedStorage<8, 624, ::World::WorldEditor>                                   mWorldEditor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldCloudSyncer>>            mWorldCloudSyncer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::World::WorldActivitySessionTracker>> mWorldActivitySessionTracker;
    ::ll::TypedStorage<8, 56, ::World::LocalWorldStarter>                              mLocalWorldStarter;
    ::ll::TypedStorage<8, 312, ::World::NetworkWorldJoiner>                            mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 48, ::World::WorldTransferer>                                mWorldTransferer;
    ::ll::TypedStorage<8, 704, ::World::InfiniteWorldConverter>                        mWorldSizeConverter;
    ::ll::TypedStorage<8, 288, ::World::WorldPlayerListTracker>                        mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::FeaturedWorldTemplateManager>> mFeaturedWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::MarketplacePassWorldTemplateManager>>
        mMarketplacePassWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::OwnedWorldTemplateManager>> mOwnedWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystem& operator=(WorldSystem const&);
    WorldSystem(WorldSystem const&);
    WorldSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSystem(
        ::ILevelListCache&                                                levelListCache,
        bool                                                              isEduMode,
        bool                                                              isEditorMode,
        ::Core::PathBuffer<::std::string> const&                          workingDirectory,
        ::Core::PathBuffer<::std::string> const&                          tempDirectory,
        ::IContentManager&                                                contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::IDlcValidation&                                                 dlcValidation,
        ::IContentAcquisition&                                            contentAcquisition,
        ::IStoreCatalogRepository&                                        storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::IClientInstance&                                                clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>          resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>        contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile>              externalServerFile,
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>                 offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>      thirdPartyServerRepository,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                                     getMultiplayerServiceManager,
        ::std::function<::LocalPlayer*()>                            getLocalPlayer,
        ::LocalPlayerChangedConnector                                localPlayerChangedConnector,
        ::ServerLocator&                                             serverLocator,
        ::IGameServerStartup&                                        gameServerStartup,
        ::IGameServerShutdown&                                       gameServerShutdown,
        ::INetworkGameConnector&                                     networkGameConnector,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>                archiver,
        ::IMinecraftEventing&                                        minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&            appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                 realmsAPI,
        ::CloudSaveSystemWrapper&                                    cloudSaveSystem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>                 dateManager,
        ::ServicesManager&                                           servicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>      externalContentManager,
        ::ResourcePackManager&                                       resourcePackManager,
        ::ToastManager&                                              toastManager,
        ::std::function<bool(::Realms::RealmId)>                     isRealmJoinable,
        ::std::function<bool()>                                      isEditorModeEnabled,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>            gatheringManager
    );

    MCAPI void update(
        double              timestampMs,
        ::TrialManager*     trialManager,
        ::World::InGameType inGameType,
        bool                tickFriendsSystemIngame
    );

    MCAPI ~WorldSystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                                levelListCache,
        bool                                                              isEduMode,
        bool                                                              isEditorMode,
        ::Core::PathBuffer<::std::string> const&                          workingDirectory,
        ::Core::PathBuffer<::std::string> const&                          tempDirectory,
        ::IContentManager&                                                contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::IDlcValidation&                                                 dlcValidation,
        ::IContentAcquisition&                                            contentAcquisition,
        ::IStoreCatalogRepository&                                        storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::IClientInstance&                                                clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>          resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>        contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile>              externalServerFile,
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>                 offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>      thirdPartyServerRepository,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>
                                                                     getMultiplayerServiceManager,
        ::std::function<::LocalPlayer*()>                            getLocalPlayer,
        ::LocalPlayerChangedConnector                                localPlayerChangedConnector,
        ::ServerLocator&                                             serverLocator,
        ::IGameServerStartup&                                        gameServerStartup,
        ::IGameServerShutdown&                                       gameServerShutdown,
        ::INetworkGameConnector&                                     networkGameConnector,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>                archiver,
        ::IMinecraftEventing&                                        minecraftEventing,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&            appPlatform,
        ::std::weak_ptr<::RealmsAPI>                                 realmsAPI,
        ::CloudSaveSystemWrapper&                                    cloudSaveSystem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>                 dateManager,
        ::ServicesManager&                                           servicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>      externalContentManager,
        ::ResourcePackManager&                                       resourcePackManager,
        ::ToastManager&                                              toastManager,
        ::std::function<bool(::Realms::RealmId)>                     isRealmJoinable,
        ::std::function<bool()>                                      isEditorModeEnabled,
        ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>            gatheringManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
