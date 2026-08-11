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
struct ContentSource;
struct PackContentItem;
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

    virtual ::std::shared_ptr<::PackContentItem const>
    getPackItemForPackIdVersion(::std::string_view packIdVersion) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(
        ::std::function<void(::IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&& onDownloadStatusChange
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ContentItemCollection>
    _getAvailableContentItemCollection(::ContentType contentType) const;

    MCAPI ::std::shared_ptr<::ContentItemCollection>
    _getMarketplacePassContentItemCollection(::ContentType contentType) const;

    MCAPI ::std::optional<::World::PackActionError> _movePackContent(
        ::std::string const& packIdVersion,
        ::ContentType        packType,
        ::World::PackAction  packAction,
        bool                 ignoreWarnings
    );

    MCAPI void _reloadContentSource();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
