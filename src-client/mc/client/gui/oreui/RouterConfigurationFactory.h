#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IFileAccess;
class ILevelListCache;
class IOfferRepository;
class LocalPlayer;
class PackManifestFactory;
class RealmsAPI;
class ResourcePackManager;
class ServerInstance;
class SunsettingManager;
struct PackSettingsInfo;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { class RouterConfiguration; }
namespace OreUI { struct DebugData; }
namespace Realms { class IRealmsUGCPackUploader; }
namespace Realms { class RealmsList; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { class RealmsWorldEditor; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::RouterConfigurationFactory {
// functions
// NOLINTBEGIN
MCAPI ::OreUI::RouterConfiguration createRouterConfiguration(
    ::ResourcePackManager&                                   resourcePackManager,
    ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      appPackageFileAccess,
    ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
    ::Core::Path const&                                      packagePath,
    ::ui::ScreenTechStackSelector&                           screenTechStackSelector,
    ::std::function<::ILevelListCache&()>                    getLevelListCache,
    ::std::function<::IContentManager&()>                    getContentManager,
    ::std::function<::ServerInstance*()>                     getServerInstance,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>()>,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>()>               getOfferRepository,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::SunsettingManager>()>              getSunsettingManager,
    ::std::function<::std::shared_ptr<::Realms::RealmsList>()>                         getRealmsList,
    ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                 getRealmsWorldContext,
    ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                  getRealmsWorldEditor,
    ::std::function<::std::optional<::PackSettingsInfo>(::std::string const&)>         getRealmsPackSettingsCallback,
    ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::IRealmsUGCPackUploader>()> getRealmsUGCPackUploader,
    ::std::function<::LocalPlayer*()>                                                  getPrimaryLocalPlayer,
    ::std::weak_ptr<::RealmsAPI> const&                                                realmsAPI,
    ::PackManifestFactory&                                                             packManifestFactory,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&                  contentKeyProvider,
    ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&                  contentTierManager,
    ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                              userManager,
    ::std::function<void()>                                                            clearAllRequiredTTSEvents,
    ::std::function<bool()>                                                            isInGame,
    ::std::function<bool()>                                                            isInServer,
    ::std::function<bool()>                                                            isInRealm,
    ::OreUI::DebugData&                                                                debugData
);
// NOLINTEND

} // namespace OreUI::RouterConfigurationFactory
