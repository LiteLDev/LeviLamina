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
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentItemCollection;
class ContentManagerProxy;
class IContentCatalogPackSource;
class IContentManagerContext;
class IContentManagerFactory;
class IContentTierManager;
class ILevelListCache;
class IPackManifestFactory;
class IResourcePackRepository;
class IVersionedContentItemCollection;
class IWorldTemplateManager;
class MutableContentItemCollection;
class Pack;
class PackManifestFactory;
class PackSource;
class ResourcePackManager;
class TaskGroup;
class WorldTemplateManager;
struct CachedHostPackIdProvider;
struct ClientPackSourceFactory;
struct ContentCatalogService;
struct ContentItem;
struct ContentSource;
struct IEntitlementManager;
struct InvalidPacksFilterGroup;
struct RealmPackManagerContentSource;
struct StoreCatalogRepository;
namespace Bedrock::PubSub { class Subscription; }
namespace ContentManagerUtils { class SourcesAsyncReloader; }
namespace Core { class FilePathManager; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManager& operator=(ContentManager const&);
    ContentManager(ContentManager const&);
    ContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentManager() /*override*/;

    virtual ::ContentSource* loadContent(::ContentType contentType, ::ContentFlags flags) /*override*/;

    virtual ::ContentSource* loadContent(::InvalidPacksFilterGroup const& invalidFilter) /*override*/;

    virtual ::ContentSource*
    loadContentForLevel(::std::string const& levelId, ::mce::UUID const& premiumTemplateId) /*override*/;

    virtual ::ContentSource* loadContentForRealm(int64 const realmId) /*override*/;

    virtual ::std::unique_ptr<::ContentSource> loadContentForRealmsWorld(
        ::Realms::RealmId                       realmId,
        ::std::vector<::Realms::Content> const& servicePackData
    ) /*override*/;

    virtual void addPackSourceFromPremiumTemplate(
        ::RealmPackManagerContentSource* source,
        ::mce::UUID const&               premiumTemplateId,
        ::PackType                       packType
    ) /*override*/;

    virtual void addRealmsUnknownPackSources(::RealmPackManagerContentSource* contentSource) /*override*/;

    virtual void addPacksToRealmsUnknownPackSource(::std::unique_ptr<::Pack> pack) /*override*/;

    virtual void addCachedHostPackIdProvider(::std::weak_ptr<::CachedHostPackIdProvider> provider) /*override*/;

    virtual void clearRealmsUnknownPackSource() /*override*/;

    virtual void removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const& id) /*override*/;

    virtual ::gsl::not_null<::std::shared_ptr<::ContentItemCollection>>
    getGlobalResourcePackCollection(bool isEditorMode) /*override*/;

    virtual ::std::unique_ptr<::IContentManagerContext>
    createContext(::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate) /*override*/;

    virtual void removeContext(::IContentManagerContext& context) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::ContentSource>> const& getSources() const /*override*/;

    virtual ::std::vector<::std::shared_ptr<::ContentItem>> getContentItems() const /*override*/;

    virtual ::std::shared_ptr<::IVersionedContentItemCollection const> getVersionedItems() const /*override*/;

    virtual void enableCatalogPackSource() /*override*/;

    virtual void generateItems(::ContentSource* source) /*override*/;

    virtual ::Bedrock::Threading::Async<void> reloadSources(bool saveSources) /*override*/;

    virtual void reloadItems() /*override*/;

    virtual void reloadViews() /*override*/;

    virtual void populateDependencies() const /*override*/;

    virtual void deleteContent(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void deleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual void deleteContentFiles(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void
    deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual void postDeleteContent(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void
    postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual uint64 generateContentId() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourcePath(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorPath(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourceFolder(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorFolder(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldPath(::std::string const& levelId) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const&
    getPremiumWorldTemplateFolder(::ContentIdentity const& templateId) /*override*/;

    virtual ::ContentManagerProxy* getProxy() /*override*/;

    virtual void beginAsyncInit(::TaskGroup& taskGroup) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual void onLanguageChanged() /*override*/;

    virtual void refreshContentCatalogPackSource() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    refreshContentCatalogPackSource(::std::function<void()>&& callback) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onRealmsReset(::Realms::RealmId const realmsId) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToSourcesReloadedAsyncCompleted(::std::function<void()>&& onSourcesReloadedAsyncCallback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentManager(
        ::std::unique_ptr<::IContentManagerFactory>            factory,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager> worldTemplateManager,
        ::IPackManifestFactory&                                packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> filePathManager
    );

    MCAPI ContentManager(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::IResourcePackRepository&                                        resourcePackRepository,
        ::ResourcePackManager&                                            resourcePackManager,
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&    storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&     contentCatalogService,
        ::ClientPackSourceFactory&                                        packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager
    );

    MCAPI ::ContentSource* _addContentSource(::std::unique_ptr<::ContentSource> source);

    MCAPI void _asyncInitWork();

    MCAPI ::IContentCatalogPackSource& _createContentCatalogPackSource(bool enabled);

    MCAPI void _initCallback();

    MCAPI ::ContentSource* _loadResourceContent(::ContentType type, ::ContentFlags flags);

    MCAPI void _removeContentItemsFromSource(::gsl::not_null<::ContentSource*> source);

    MCAPI void _retrievePackSources(::PackType packType, ::std::vector<::PackSource*>& packSources);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServicePackSource> _updateOrCreateRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _deleteContent(
        ::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems,
        ::std::function<void(::ContentSource&, ::std::vector<::std::shared_ptr<::ContentItem const>> const&)>
            deleteItemCallback
    );

    MCAPI static ::std::vector<::std::shared_ptr<::ContentItem const>>
    _prepareContentItemsForDeleting(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IContentManagerFactory>            factory,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager> worldTemplateManager,
        ::IPackManifestFactory&                                packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> filePathManager
    );

    MCAPI void* $ctor(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::IResourcePackRepository&                                        resourcePackRepository,
        ::ResourcePackManager&                                            resourcePackManager,
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&    storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&     contentCatalogService,
        ::ClientPackSourceFactory&                                        packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContentSource* $loadContent(::ContentType contentType, ::ContentFlags flags);

    MCAPI ::ContentSource* $loadContent(::InvalidPacksFilterGroup const& invalidFilter);

    MCAPI ::ContentSource* $loadContentForLevel(::std::string const& levelId, ::mce::UUID const& premiumTemplateId);

    MCAPI ::ContentSource* $loadContentForRealm(int64 const realmId);

    MCAPI ::std::unique_ptr<::ContentSource>
    $loadContentForRealmsWorld(::Realms::RealmId realmId, ::std::vector<::Realms::Content> const& servicePackData);

    MCAPI void $addPackSourceFromPremiumTemplate(
        ::RealmPackManagerContentSource* source,
        ::mce::UUID const&               premiumTemplateId,
        ::PackType                       packType
    );

    MCAPI void $addRealmsUnknownPackSources(::RealmPackManagerContentSource* contentSource);

    MCAPI void $addPacksToRealmsUnknownPackSource(::std::unique_ptr<::Pack> pack);

    MCAPI void $addCachedHostPackIdProvider(::std::weak_ptr<::CachedHostPackIdProvider> provider);

    MCAPI void $clearRealmsUnknownPackSource();

    MCAPI void $removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const& id);

    MCAPI ::gsl::not_null<::std::shared_ptr<::ContentItemCollection>>
    $getGlobalResourcePackCollection(bool isEditorMode);

    MCAPI ::std::unique_ptr<::IContentManagerContext>
    $createContext(::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate);

    MCAPI void $removeContext(::IContentManagerContext& context);

    MCFOLD ::std::vector<::std::unique_ptr<::ContentSource>> const& $getSources() const;

    MCAPI ::std::vector<::std::shared_ptr<::ContentItem>> $getContentItems() const;

    MCFOLD ::std::shared_ptr<::IVersionedContentItemCollection const> $getVersionedItems() const;

    MCAPI void $enableCatalogPackSource();

    MCAPI void $generateItems(::ContentSource* source);

    MCAPI ::Bedrock::Threading::Async<void> $reloadSources(bool saveSources);

    MCAPI void $reloadItems();

    MCAPI void $reloadViews();

    MCAPI void $populateDependencies() const;

    MCAPI void $deleteContent(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $deleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI void $deleteContentFiles(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI void $postDeleteContent(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI uint64 $generateContentId();

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldResourcePath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldBehaviorPath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldResourceFolder(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldBehaviorFolder(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldPath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getPremiumWorldTemplateFolder(::ContentIdentity const& templateId);

    MCAPI ::ContentManagerProxy* $getProxy();

    MCAPI void $beginAsyncInit(::TaskGroup& taskGroup);

    MCFOLD bool $isInitialized() const;

    MCAPI void $onLanguageChanged();

    MCAPI void $refreshContentCatalogPackSource();

    MCAPI ::Bedrock::PubSub::Subscription $refreshContentCatalogPackSource(::std::function<void()>&& callback);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> $getFilePathManager();

    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onRealmsReset(::Realms::RealmId const realmsId);

    MCAPI ::Bedrock::PubSub::Subscription
    $subscribeToSourcesReloadedAsyncCompleted(::std::function<void()>&& onSourcesReloadedAsyncCallback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIContentManager();

    MCNAPI static void** $vftableForLevelListCacheObserver();
    // NOLINTEND
};
