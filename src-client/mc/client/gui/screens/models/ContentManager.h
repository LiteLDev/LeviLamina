#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerContextCollection.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class ClientPackSourceFactory;
class ContentCatalogService;
class ContentIdentity;
class ContentItemCollection;
class ContentManagerProxy;
class IContentCatalogPackSource;
class IContentManagerContext;
class IContentManagerFactory;
class IContentTierManager;
class IEntitlementManager;
class ILevelListCache;
class IPackManifestFactory;
class IResourcePackRepository;
class IVersionedContentItemCollection;
class IWorldTemplateManager;
class MutableContentItemCollection;
class Pack;
class PackManifestFactory;
class ResourcePackManager;
class StoreCatalogRepository;
class TaskGroup;
class WorldTemplateManager;
struct ContentItem;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct RealmPackManagerContentSource;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ContentManagerUtils { class SourcesAsyncReloader; }
namespace Core { class FilePathManager; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class IContentHandler; }
namespace StorageManager { class WorldConverter; }
namespace mce { class UUID; }
// clang-format on

class ContentManager : public ::IContentManager,
                       public ::LevelListCacheObserver,
                       public ::std::enable_shared_from_this<::ContentManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContentManager>>                                  mSelf;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>>             mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                                             mPackManifestFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::MutableContentItemCollection>>> mContent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentSource>>>                  mContentSources;
    ::ll::TypedStorage<8, 24, ::ContentManagerContextCollection>                                  mContexts;
    ::ll::TypedStorage<8, 8, uint64>                                                              mContentId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IContentCatalogPackSource>> mCatalogResourcePackSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Realms::RealmsServicePackSource>>>
                                                                                      mRealmsServicePackSources;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CachedHostPackIdProvider>>            mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentManagerProxy>>                mProxy;
    ::ll::TypedStorage<1, 1, bool>                                                    mInitialized;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    WORLD_RESOURCE_PACK_FILENAME;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    WORLD_BEHAVIOR_PACK_FILENAME;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>> mFilePathManager;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                     mMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerFactory>>             mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ContentManagerUtils::SourcesAsyncReloader>>>
                                                                                    mReloadSourcesAsync;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mReloadViewsPublisher;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                                                      mDeleteContentPublisher;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StorageManager::ContentItemProvider>> mWeakStorageContentItemProvider;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::StorageManager::IContentHandler>>>
        mStorageContentHandler;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()>>
                                                                                 mStorageWorldConverterConstructor;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StorageManager::WorldConverter>> mWeakStorageWorldConverter;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManager& operator=(ContentManager const&);
    ContentManager(ContentManager const&);
    ContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentManager() /*override*/ = default;

    virtual ::ContentSource* loadContent(::ContentType, ::ContentFlags) /*override*/;

    virtual ::ContentSource* loadContent(::InvalidPacksFilterGroup const&) /*override*/;

    virtual ::ContentSource* loadContentForLevel(::std::string const&, ::mce::UUID const&) /*override*/;

    virtual ::ContentSource* loadContentForRealm(int64 const) /*override*/;

    virtual ::std::unique_ptr<::ContentSource>
    loadContentForRealmsWorld(::Realms::RealmId, ::std::vector<::Realms::Content> const&) /*override*/;

    virtual void
    addPackSourceFromPremiumTemplate(::RealmPackManagerContentSource*, ::mce::UUID const&, ::PackType) /*override*/;

    virtual void addRealmsUnknownPackSources(::RealmPackManagerContentSource*) /*override*/;

    virtual void addPacksToRealmsUnknownPackSource(::std::unique_ptr<::Pack>) /*override*/;

    virtual void addCachedHostPackIdProvider(::std::weak_ptr<::CachedHostPackIdProvider>) /*override*/;

    virtual void clearRealmsUnknownPackSource() /*override*/;

    virtual void removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const&) /*override*/;

    virtual ::gsl::not_null<::std::shared_ptr<::ContentItemCollection>>
    getGlobalResourcePackCollection(bool) /*override*/;

    virtual ::std::unique_ptr<::IContentManagerContext>
        createContext(::std::function<bool(::std::shared_ptr<::ContentItem const> const&)>) /*override*/;

    virtual void removeContext(::IContentManagerContext&) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::ContentSource>> const& getSources() const /*override*/;

    virtual ::std::vector<::std::shared_ptr<::ContentItem>> getContentItems() const /*override*/;

    virtual ::std::shared_ptr<::IVersionedContentItemCollection const> getVersionedItems() const /*override*/;

    virtual void enableCatalogPackSource() /*override*/;

    virtual void generateItems(::ContentSource*) /*override*/;

    virtual ::Bedrock::Threading::Async<void> reloadSources(bool) /*override*/;

    virtual void reloadItems() /*override*/;

    virtual void reloadViews() /*override*/;

    virtual void populateDependencies() const /*override*/;

    virtual void deleteContent(::std::shared_ptr<::ContentItem const> const&) /*override*/;

    virtual void deleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const&) /*override*/;

    virtual void deleteContentFiles(::std::shared_ptr<::ContentItem const> const&) /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const&) /*override*/;

    virtual void postDeleteContent(::std::shared_ptr<::ContentItem const> const&) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const&) /*override*/;

    virtual uint64 generateContentId() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourcePath(::std::string const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorPath(::std::string const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourceFolder(::std::string const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorFolder(::std::string const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldPath(::std::string const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const&
    getPremiumWorldTemplateFolder(::ContentIdentity const&) /*override*/;

    virtual ::ContentManagerProxy* getProxy() /*override*/;

    virtual void beginAsyncInit(::TaskGroup&) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual void onLanguageChanged() /*override*/;

    virtual void refreshContentCatalogPackSource() /*override*/;

    virtual ::Bedrock::PubSub::Subscription refreshContentCatalogPackSource(::std::function<void()>&&) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onRealmsReset(::Realms::RealmId const) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToSourcesReloadedAsyncCompleted(::std::function<void()>&&) /*override*/;

    virtual ::std::shared_ptr<::StorageManager::ContentItemProvider> getStorageContentItemProvider() /*override*/;

    virtual ::StorageManager::IContentHandler& getStorageContentHandler() /*override*/;

    virtual ::std::shared_ptr<::StorageManager::WorldConverter> getStorageWorldConverter() /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerToReloadViews(::std::function<void()>) /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerToDeleteContent(::std::function<void()>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentManager(
        ::ILevelListCache&                                                     levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&           worldTemplateManager,
        ::IResourcePackRepository&                                             resourcePackRepository,
        ::ResourcePackManager&                                                 resourcePackManager,
        ::PackManifestFactory&                                                 packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>                   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&      contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&         storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&          contentCatalogService,
        ::ClientPackSourceFactory&                                             packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&          filePathManager,
        ::std::unique_ptr<::StorageManager::IContentHandler>                   storageContentHandler,
        ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()> storageWorldConverterConstructor
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                                     levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&           worldTemplateManager,
        ::IResourcePackRepository&                                             resourcePackRepository,
        ::ResourcePackManager&                                                 resourcePackManager,
        ::PackManifestFactory&                                                 packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>                   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&      contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&         storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&          contentCatalogService,
        ::ClientPackSourceFactory&                                             packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&          filePathManager,
        ::std::unique_ptr<::StorageManager::IContentHandler>                   storageContentHandler,
        ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()> storageWorldConverterConstructor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
