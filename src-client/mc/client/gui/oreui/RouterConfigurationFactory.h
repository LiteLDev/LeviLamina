#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IContentTierManager;
class IFileAccess;
class ILevelListCache;
class LocalPlayer;
class PackManifestFactory;
class RealmsAPI;
class ResourcePackManager;
class ServerInstance;
struct IContentManager;
struct IOfferRepository;
struct SunsettingManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { class RouterConfiguration; }
namespace OreUI { struct DebugData; }
namespace Realms { struct RealmsList; }
namespace Realms { struct RealmsWorldContext; }
namespace Realms { struct RealmsWorldEditor; }
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

namespace OreUI::RouterConfigurationFactory {
// functions
// NOLINTBEGIN
MCAPI ::OreUI::RouterConfiguration createRouterConfiguration(
    ::ResourcePackManager&                                                                resourcePackManager,
    ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                   appPackageFileAccess,
    ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                              fileSystem,
    ::Core::Path const&                                                                   packagePath,
    ::ui::ScreenTechStackSelector&                                                        screenTechStackSelector,
    ::std::function<::ILevelListCache&()>                                                 getLevelListCache,
    ::std::function<::IContentManager&()>                                                 getContentManager,
    ::std::function<::ServerInstance*()>                                                  getServerInstance,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()> getMultiplayerServiceManager,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>()>                  getOfferRepository,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::SunsettingManager>()>                 getSunsettingManager,
    ::std::function<::std::shared_ptr<::Realms::RealmsList>()>                            getRealmsList,
    ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                    getRealmsWorldContext,
    ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                     getRealmsWorldEditor,
    ::std::function<::LocalPlayer*()>                                                     getPrimaryLocalPlayer,
    ::std::weak_ptr<::RealmsAPI> const&                                                   realmsAPI,
    ::PackManifestFactory&                                                                packManifestFactory,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&                     contentKeyProvider,
    ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&                     contentTierManager,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                                 userManager,
    ::std::function<void()>                                                               clearAllRequiredTTSEvents,
    ::OreUI::DebugData&                                                                   debugData
);
// NOLINTEND

} // namespace OreUI::RouterConfigurationFactory
