#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/client/world/DownloadableTemplateManagerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CatalogCollection;
class FileArchiver;
class IMinecraftEventing;
class IResourcePackRepository;
class IToastManager;
class ResourcePackManager;
class WorldTemplateManager;
struct ExternalContentManager;
struct GenericEntitlementChangeListener;
struct IContentAcquisition;
struct IEntitlementManager;
struct IStoreCatalogRepository;
struct ImportContext;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace World { struct OwnedWorldTemplateData; }
// clang-format on

namespace World {

class OwnedWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)>>>
                                                                                       mDownloadCallbacks;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                               mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>   mWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>>           mFileArchiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>> mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>    mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>            mAppPlatform;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                              mRefreshPublishder;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::OwnedWorldTemplateData>> mOwnedTemplateDataList;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::OwnedWorldTemplateData>> mTemporaryOwnedTemplateDataList;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::optional<::ImportFailure>, ::std::string const&)>>
                                                                                            mImportTemplateCallback;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CatalogCollection>>                       mCatalogCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportContext>>                           mImportContext;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::Core::PathBuffer<::std::string>>> mCachedImagePaths;
    ::ll::TypedStorage<4, 4, int>                                                           mItemsFoundOnMarketplace;
    ::ll::TypedStorage<4, 4, int>                                                           mItemsThumbnailsFetched;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>>        mEntitlementChangeListener;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateManager& operator=(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    ) /*override*/;

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success) /*override*/;

    virtual ~OwnedWorldTemplateManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateManager(
        ::IStoreCatalogRepository&                              storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>           fileArchiver,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>    entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>   worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>            appPlatform,
        ::IResourcePackRepository&                              resourcePackRepository,
        ::ResourcePackManager&                                  resourcePackManager,
        ::IMinecraftEventing&                                   eventing,
        ::IToastManager&                                        toastManager,
        ::IContentAcquisition&                                  contentAquisition
    );

    MCAPI void _finalizeRefresh();

    MCAPI void _localWorldUpdateCallback(::std::pair<::std::string, bool> const& updatedTemplateData);

    MCAPI ::std::vector<::std::string> _populateListWithLocalTemplates();

    MCAPI void _populateListWithOwnedNonLocalTemplates(::std::vector<::std::string> const& localPremiumTemplates);

    MCAPI void getMarketplaceIdFromLocalId(
        ::std::string const&                                        localId,
        ::std::function<void(::std::optional<::std::string const>)> callback
    );

    MCAPI void
    importWorldTemplate(::std::function<void(::std::optional<::ImportFailure>, ::std::string const&)> callback);

    MCAPI void isTemplateOwned(::std::string const& templateId, ::std::function<void(bool)> callback);

    MCAPI void refresh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IStoreCatalogRepository&                              storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>           fileArchiver,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>    entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>   worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>            appPlatform,
        ::IResourcePackRepository&                              resourcePackRepository,
        ::ResourcePackManager&                                  resourcePackManager,
        ::IMinecraftEventing&                                   eventing,
        ::IToastManager&                                        toastManager,
        ::IContentAcquisition&                                  contentAquisition
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
    MCAPI ::std::optional<::World::DownloadWorldTemplateError> $downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
