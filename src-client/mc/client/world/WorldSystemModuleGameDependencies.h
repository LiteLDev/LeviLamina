#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class FileArchiver;
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
namespace OreUI { class Router; }
namespace Parties { struct IPartyProvider; }
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
// clang-format on

namespace World {

struct WorldSystemModuleGameDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                                mLevelListCache;
    ::ll::TypedStorage<1, 1, bool>                                                              mIsEduMode;
    ::ll::TypedStorage<1, 1, bool>                                                              mIsEditorMode;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<::std::string> const&>                          mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::Core::PathBuffer<::std::string> const&>                          mTempDirectory;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                                mContentManager;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                      mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&>      mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                                 mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                            mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                        mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>             mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                                mClientInstance;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>         mResourcePackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>>       mContentTierManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile>>             mExternalServerFile;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>>                mOfferRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>>
                                                                             mGetMultiplayerServiceManager;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>             mGetLocalPlayer;
    ::ll::TypedStorage<8, 8, ::LocalPlayerChangedConnector const&>           mLocalPlayerChangedConnector;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                               mServerLocator;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                          mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&>                         mGameServerShutdown;
    ::ll::TypedStorage<8, 8, ::INetworkGameConnector&>                       mNetworkGameConnector;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>> mArchiver;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                          mMinecraftEventing;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&> mUserManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>                                mRealmsAPI;
    ::ll::TypedStorage<8, 8, ::CloudSaveSystemWrapper&>                                    mCloudSaveSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager>>                mDateManager;
    ::ll::TypedStorage<8, 8, ::ServicesManager&>                                           mServicesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>>     mExternalContentManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                       mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                              mToastManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Realms::RealmId)>>                    mIsRealmJoinable;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                     mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GatheringManager>>           mGatheringManager;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                             mProgressScreenNavigation;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                             mRouter;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>()>>
        mGetPartyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystemModuleGameDependencies& operator=(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies(WorldSystemModuleGameDependencies const&);
    WorldSystemModuleGameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldSystemModuleGameDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
