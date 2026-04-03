#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/IWorldPackCollectionManager.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/WorldContentItemCollectionsModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/PublishedValue.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IContentTierManager;
class IEntitlementManager;
class IMarketplacePackDownloader;
class MutableContentItemCollection;
struct ContentItem;
struct ContentSource;
struct PackContentItemListPosition;
struct PackIdVersion;
struct PackSettingsInfo;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ContentItemCollectionViewUtils { struct SelectedReloadProps; }
namespace World { struct PendingPackAction; }
// clang-format on

namespace World {

class WorldPackCollectionManagerImpl : public ::World::IWorldPackCollectionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>> mContentTierManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IMarketplacePackDownloader>>             mMarketplacePackDownloader;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mMarketplacePackDownloaderStatusSub;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentSource>>                 mContentSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MutableContentItemCollection>> mContentItemCollection;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mContentItemCollectionDirtyPublisher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentItemCollectionViewUtils::SelectedReloadProps>>
                                                                  mSelectedReloadProps;
    ::ll::TypedStorage<1, 1, bool>                                mIsEditorEnabled;
    ::ll::TypedStorage<8, 96, ::WorldContentItemCollectionsModel> mWorldContentItemCollectionsModel;
    ::ll::TypedStorage<8, 136, ::PublishedValue<::std::optional<::World::PendingPackAction>>> mPendingPackAction;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPackCollectionManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick() /*override*/;

    virtual void setContentSource(::std::unique_ptr<::ContentSource>&& contentSource) /*override*/;

    virtual void resetContent() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToContentItemCollectionDirtySubscription(::std::function<void()>&& callback) /*override*/;

    virtual ::WorldContentItemCollectionsModel getWorldCollectionsModel() const /*override*/;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        int                  fromPosition,
        int                  toPosition
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings) /*override*/;

    virtual ::std::optional<::World::PackActionError> continuePendingPackAction() /*override*/;

    virtual void clearPendingPackAction() /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToPendingPackActionPublisher(
        ::std::function<void(::std::optional<::World::PendingPackAction>)> callback
    ) /*override*/;

    virtual ::std::optional<::PackSettingsInfo>
    getPackSettingsForPackIdVersion(::std::string const& packIdVersion) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(
        ::std::function<void(::IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&& onDownloadStatusChange
    ) /*override*/;

    virtual ~WorldPackCollectionManagerImpl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPackCollectionManagerImpl(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::std::unique_ptr<::IMarketplacePackDownloader>&&          marketplacePackDownloader
    );

    MCAPI void _completePackDownload();

    MCAPI ::WorldContentItemCollectionsModel _generatePackCollectionsModel();

    MCAPI ::std::shared_ptr<::ContentItemCollection>
    _getAvailableContentItemCollection(::ContentType contentType) const;

    MCAPI ::std::vector<::std::pair<::PackIdVersion, ::PackContentItemListPosition>> _getCurrentSelectedContent();

    MCAPI ::std::shared_ptr<::ContentItemCollection>
    _getMarketplacePassContentItemCollection(::ContentType contentType) const;

    MCAPI ::std::optional<::World::PackActionError> _handlePackMoveContinue();

    MCAPI ::std::optional<::World::PackActionError> _movePackContent(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        ::World::PackAction  packAction,
        bool                 ignoreWarnings
    );

    MCAPI void _populateDependencies(::std::vector<::std::shared_ptr<::ContentItem>>& sourceItems);

    MCAPI void _reconcilePendingContent(
        ::std::vector<::std::pair<::PackIdVersion, ::PackContentItemListPosition>> const& selectedPacks
    );

    MCAPI void _reloadContentSource();

    MCAPI void _setInitialSelectedPacks(::std::vector<::std::shared_ptr<::ContentItem>> const& sourceItems);

    MCAPI void _setupDownload(::std::string const& packIdVersion, ::ContentType packType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::std::unique_ptr<::IMarketplacePackDownloader>&&          marketplacePackDownloader
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
    MCFOLD void $tick();

    MCAPI void $setContentSource(::std::unique_ptr<::ContentSource>&& contentSource);

    MCAPI void $resetContent();

    MCAPI ::Bedrock::PubSub::Subscription
    $subscribeToContentItemCollectionDirtySubscription(::std::function<void()>&& callback);

    MCAPI ::WorldContentItemCollectionsModel $getWorldCollectionsModel() const;

    MCAPI ::std::optional<::World::PackActionError>
    $changePackPriority(::std::string const& packIdVersion, ::ContentType packType, int fromPosition, int toPosition);

    MCAPI ::std::optional<::World::PackActionError>
    $activatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings);

    MCAPI ::std::optional<::World::PackActionError>
    $deactivatePack(::std::string const& packIdVersion, ::ContentType packType, bool ignoreWarnings);

    MCAPI ::std::optional<::World::PackActionError> $continuePendingPackAction();

    MCAPI void $clearPendingPackAction();

    MCAPI ::Bedrock::PubSub::Subscription
    $subscribeToPendingPackActionPublisher(::std::function<void(::std::optional<::World::PendingPackAction>)> callback);

    MCAPI ::std::optional<::PackSettingsInfo> $getPackSettingsForPackIdVersion(::std::string const& packIdVersion);

    MCAPI ::Bedrock::PubSub::Subscription $subscribeToMarketplacePackDownloadStatus(
        ::std::function<void(::IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&& onDownloadStatusChange
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
