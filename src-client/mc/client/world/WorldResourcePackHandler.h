#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/IWorldResourcePackHandler.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/PackStatus.h"
#include "mc/client/world/PendingPackActionHash.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IResourcePackRepository;
struct ContentItem;
struct ContentViews;
struct IContentAcquisition;
struct IEntitlementManager;
struct LevelSummary;
struct MoveResourcePackResult;
struct PackIdVersion;
namespace World { class IWorldResourcePackDownloader; }
namespace World { struct PackCheckResult; }
namespace World { struct PackCollection; }
namespace World { struct PackDetails; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct PackViewAndItem; }
namespace World { struct PendingPackActionKey; }
namespace World { struct PendingPackActivation; }
namespace World { struct PendingPackRemoval; }
namespace World { struct WorldPacks; }
// clang-format on

namespace World {

class WorldResourcePackHandler : public ::World::IWorldResourcePackHandler {
public:
    // WorldResourcePackHandler inner types declare
    // clang-format off
    struct Contexts;
    // clang-format on

    // WorldResourcePackHandler inner types define
    struct Contexts {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContext;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContext;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Contexts();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                          mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>   mResourcePackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>> mContentTierManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldResourcePackDownloader>>    mWorldResourcePackDownloader;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                      mContentAcquisition;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSourcesReloadedSubscription;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::World::WorldPacks>> mWorldPacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::World::PendingPackActionKey,
            ::std::variant<::World::PendingPackActivation, ::World::PendingPackRemoval>,
            ::World::PendingPackActionHash,
            ::std::equal_to<::World::PendingPackActionKey>>>
                                                mPendingPackActions;
    ::ll::TypedStorage<1, 1, bool>              mIsEditorWorld;
    ::ll::TypedStorage<8, 32, ::World::WorldID> mCurrentWorldID;
    ::ll::TypedStorage<1, 1, bool>              mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackHandler& operator=(WorldResourcePackHandler const&);
    WorldResourcePackHandler(WorldResourcePackHandler const&);
    WorldResourcePackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldResourcePackHandler() /*override*/;

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const& levelSummary) /*override*/;

    virtual ::World::PackCollection getWorldPackCollection(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        bool const            isEduMode
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError> activatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError> deactivatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    continuePackActivation(::LevelSummary const& levelSummary) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    continuePackDeactivation(::LevelSummary const& levelSummary) /*override*/;

    virtual void downloadPacks(
        ::LevelSummary const&                             levelSummary,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) /*override*/;

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress() /*override*/;

    virtual void
    getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) /*override*/;

    virtual void cancelDownloadPack() /*override*/;

    virtual void getPackSizes(
        ::LevelSummary const&                           levelSummary,
        ::std::vector<::std::string> const&             packIds,
        ::std::function<void(uint64)>                   onCompleteCallback,
        ::std::function<void(::World::PackActionError)> onErrorCallback
    ) /*override*/;

    virtual void savePacksData() /*override*/;

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const& levelSummary) /*override*/;

    virtual bool hasBehaviorPacks(::LevelSummary const& levelSummary) /*override*/;

    virtual bool hasLockedPacks(::LevelSummary const& levelSummary) const /*override*/;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        int const             fromIndex,
        int const             toIndex
    ) /*override*/;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) /*override*/;

    virtual ::std::vector<::World::PackDetails> getPackDetailsForWorld(
        ::LevelSummary const&               levelSummary,
        ::std::vector<::std::string> const& packIds
    ) /*override*/;

    virtual bool getResourcePacksDirty() /*override*/;

    virtual void refreshPacksData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldResourcePackHandler(
        ::IContentManager&                                         contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::IContentAcquisition&                                     contentAcquisition,
        ::std::unique_ptr<::World::IWorldResourcePackDownloader>   worldResourcePackDownloader
    );

    MCAPI ::World::WorldPacks&
    _cacheWorldPackData(::World::WorldResourcePackHandler::Contexts&& contexts, ::LevelSummary const& levelSummary);

    MCAPI ::std::unique_ptr<::ContentViews> _createContentViews(
        ::World::WorldResourcePackHandler::Contexts& contexts,
        ::ContentType                                contentType,
        ::PackScope                                  scope
    ) const;

    MCAPI ::std::variant<::World::PackActionError, ::World::PackViewAndItem>
    _findPackById(::World::WorldPacks& worldPacks, ::std::string const& packId) const;

    MCAPI ::std::variant<::World::PackActionError, ::World::PackViewAndItem>
    _findPackByType(::World::WorldPacks& worldPacks, ::ContentType contentType, ::std::string const& packId) const;

    MCAPI ::std::variant<::World::PackActionError, ::World::PackViewAndItem> _findPackViewAndContent(
        ::World::WorldPacks& worldPacks,
        ::ContentType        contentType,
        ::World::PackStatus  packStatus,
        ::std::string const& packId
    ) const;

    MCAPI void _getMissingPackIds(
        ::LevelSummary const&                                      levelSummary,
        ::std::vector<::std::string> const&                        packIds,
        ::std::function<void(::World::PackActionError)>            onErrorCallback,
        ::std::function<void(::std::vector<::std::string> const&)> onCompleteCallback
    );

    MCAPI ::World::PackDetails _getPackDetails(
        ::World::WorldID                        worldID,
        ::std::shared_ptr<::ContentItem> const& contentItem,
        ::ContentViews const&                   contentViews,
        ::World::PackStatus                     packStatus,
        bool                                    isEduMode
    );

    MCAPI ::std::optional<::World::PackActionError> _getPackError(
        ::World::WorldID                        worldID,
        ::std::string                           packID,
        ::std::shared_ptr<::ContentItem> const& contentItem,
        ::ContentViews const&                   contentViews,
        ::ContentType                           contentType,
        ::World::PackStatus                     packStatus,
        bool                                    isEduMode
    );

    MCAPI ::World::PackActionError _handlePackMoveError(
        ::World::WorldID const&         worldID,
        ::World::PackAction             packAction,
        ::std::string const&            packId,
        ::ContentType                   contentType,
        bool                            isEduMode,
        ::MoveResourcePackResult const& moveResourcePackResult,
        bool                            onlyChecking
    );

    MCAPI ::World::WorldResourcePackHandler::Contexts
    _initializeContentManagerForWorld(::LevelSummary const& levelSummary);

    MCAPI bool _needToDownloadPack(::std::shared_ptr<::ContentItem> const& contentItem) const;

    MCAPI ::std::optional<::World::PackActionError> _performPackMovement(
        ::World::PackAction   packAction,
        ::LevelSummary const& levelSummary,
        ::ContentType         contentType,
        ::std::string const&  packId,
        bool                  isEduMode,
        bool                  force
    );

    MCAPI void _populatePackDetails(
        ::World::WorldID                          worldID,
        ::std::vector<::World::PackDetails>&      packDetails,
        ::Bedrock::NonOwnerPointer<::ContentView> contentView,
        ::World::PackCollection const&            packCollection,
        ::ContentViews const&                     contentViews,
        ::World::PackStatus                       packStatus,
        bool                                      isEduMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IContentManager&                                         contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::IContentAcquisition&                                     contentAcquisition,
        ::std::unique_ptr<::World::IWorldResourcePackDownloader>   worldResourcePackDownloader
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
    MCAPI ::World::WorldPacks& $loadPackContentForWorld(::LevelSummary const& levelSummary);

    MCAPI ::World::PackCollection
    $getWorldPackCollection(::LevelSummary const& levelSummary, ::ContentType const contentType, bool const isEduMode);

    MCAPI ::std::optional<::World::PackActionError> $activatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    );

    MCAPI ::std::optional<::World::PackActionError> $deactivatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    );

    MCAPI ::std::optional<::World::PackActionError> $continuePackActivation(::LevelSummary const& levelSummary);

    MCAPI ::std::optional<::World::PackActionError> $continuePackDeactivation(::LevelSummary const& levelSummary);

    MCAPI void $downloadPacks(
        ::LevelSummary const&                             levelSummary,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    );

    MCAPI ::World::PackDownloadProgressInfo $getDownloadPackProgress();

    MCAPI void $getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback);

    MCFOLD void $cancelDownloadPack();

    MCAPI void $getPackSizes(
        ::LevelSummary const&                           levelSummary,
        ::std::vector<::std::string> const&             packIds,
        ::std::function<void(uint64)>                   onCompleteCallback,
        ::std::function<void(::World::PackActionError)> onErrorCallback
    );

    MCAPI void $savePacksData();

    MCAPI bool $hasNonAddonBehaviorPacks(::LevelSummary const& levelSummary);

    MCAPI bool $hasBehaviorPacks(::LevelSummary const& levelSummary);

    MCAPI bool $hasLockedPacks(::LevelSummary const& levelSummary) const;

    MCAPI ::std::optional<::World::PackActionError> $changePackPriority(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        int const             fromIndex,
        int const             toIndex
    );

    MCAPI ::World::PackCheckResult
    $checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms);

    MCAPI ::std::vector<::World::PackDetails>
    $getPackDetailsForWorld(::LevelSummary const& levelSummary, ::std::vector<::std::string> const& packIds);

    MCAPI bool $getResourcePacksDirty();

    MCAPI void $refreshPacksData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
