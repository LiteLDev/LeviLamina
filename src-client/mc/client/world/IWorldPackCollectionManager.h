#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
struct PackSettingsInfo;
struct WorldContentItemCollectionsModel;
namespace Bedrock::PubSub { class Subscription; }
namespace World { struct PendingPackAction; }
// clang-format on

namespace World {

class IWorldPackCollectionManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldPackCollectionManager() = default;

    virtual void tick() = 0;

    virtual void setContentSource(::std::unique_ptr<::ContentSource>&&) = 0;

    virtual void resetContent() = 0;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToContentItemCollectionDirtySubscription(::std::function<void()>&&) = 0;

    virtual ::WorldContentItemCollectionsModel getWorldCollectionsModel() const = 0;

    virtual ::std::optional<::World::PackActionError> activatePack(::std::string const&, ::ContentType, bool) = 0;

    virtual ::std::optional<::World::PackActionError> deactivatePack(::std::string const&, ::ContentType, bool) = 0;

    virtual ::std::optional<::World::PackActionError> continuePendingPackAction() = 0;

    virtual void clearPendingPackAction() = 0;

    virtual ::Bedrock::PubSub::Subscription
        subscribeToPendingPackActionPublisher(::std::function<void(::std::optional<::World::PendingPackAction>)>) = 0;

    virtual ::std::optional<::World::PackActionError>
    changePackPriority(::std::string const&, ::ContentType, int, int) = 0;

    virtual ::std::optional<::PackSettingsInfo> getPackSettingsForPackIdVersion(::std::string const&) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(
        ::std::function<void(::IMarketplacePackDownloader::MarketplacePackDownloadStatus)>&&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
