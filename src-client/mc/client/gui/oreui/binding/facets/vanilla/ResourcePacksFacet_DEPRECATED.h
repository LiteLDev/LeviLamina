#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FindPackFlags.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/Prompt.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptActionVariant.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/client/services/content/PackSelectResult.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentView;
class DlcChecker;
class IClientInstance;
class IContentAcquisition;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IDlcBatchModel;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class ILevelListCache;
class IResourcePackRepository;
class IStoreCatalogRepository;
class MainMenuScreenModel;
struct ContentItem;
struct ContentViews;
struct DlcValidationState;
struct LevelSummary;
struct PackContentItem;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class IResourceAwaiter; }
namespace OreUI { class Router; }
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct FacetResourcePack; }
namespace OreUI { struct PromptAction; }
// clang-format on

namespace OreUI {

class ResourcePacksFacet_DEPRECATED : public ::OreUI::FacetBase<::OreUI::ResourcePacksFacet_DEPRECATED> {
public:
    // ResourcePacksFacet_DEPRECATED inner types declare
    // clang-format off
    struct FacetPromptDetails;
    struct PackCollection;
    struct PendingBehaviourPackRemoval;
    struct PackActivationRequest;
    struct PackViewAndItem;
    // clang-format on

    // ResourcePacksFacet_DEPRECATED inner types define
    enum class ResourcePacksFacetStatus : uchar {
        Idle                     = 0,
        CheckingResourcePacks    = 1,
        StartDownload            = 2,
        DownloadingResourcePacks = 3,
        ActivateDownloadedPack   = 4,
        WaitingForPrompt         = 5,
    };

    enum class PromptType : int {
        NoInternet                             = 0,
        NoInternetMissingOwnedWorldTemplateDlc = 1,
        RequiredDependency                     = 2,
        MissingDependency                      = 3,
        NoStore                                = 4,
        PerformanceIssues                      = 5,
        ContentTierIncompatible                = 6,
        UnspecifiedError                       = 7,
        DownloadConfirmation                   = 8,
        DataWarning                            = 9,
        ActivationFailure                      = 10,
    };

    enum class PromptActionType : int {
        GoBack              = 0,
        Ok                  = 1,
        Cancel              = 2,
        Continue            = 3,
        ConfirmPackDownload = 4,
        Count               = 5,
    };

    struct FacetPromptDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mTitle;
        ::ll::TypedStorage<8, 32, ::std::string> mBody;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FacetPromptDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct PackCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ContentType>                              mContentType;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetResourcePack>> mActive;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetResourcePack>> mGlobal;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetResourcePack>> mAvailable;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetResourcePack>> mRealms;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetResourcePack>> mUnowned;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PackCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct PendingBehaviourPackRemoval {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem const>>> mContentToMove;
        ::ll::TypedStorage<4, 4, ::PackListType>                                             mToPackList;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem const>>                mPackItem;
        // NOLINTEND
    };

    struct PackActivationRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId> mPackId;
        ::ll::TypedStorage<1, 1, bool>                          mForce;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PackActivationRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct PackViewAndItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ContentView*>                    mContentView;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentItem>> mContentItem;
        // NOLINTEND
    };

    using OnCompleteCallback = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mLastLevelId;
    ::ll::TypedStorage<1, 1, bool>                                                           mPackActivationRequested;
    ::ll::TypedStorage<1, 1, bool>                                                           mPackDeactivationRequested;
    ::ll::TypedStorage<1, 1, bool>                                                           mShowPackSettingsRequested;
    ::ll::TypedStorage<1, 1, bool>                                                           mUserHasConfirmedDownload;
    ::ll::TypedStorage<1, 1, bool>                                                           mUserHasCancelledDownload;
    ::ll::TypedStorage<8, 40, ::OreUI::ResourcePacksFacet_DEPRECATED::PackActivationRequest> mPackActivationRequest;
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId>                                  mDeactivationPackId;
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId>                                  mShowSettingsPackId;
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId>                                  mLastActivatedPackId;
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId>                                  mDownloadedPackId;
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId>                                  mMarketplacePackId;
    ::ll::TypedStorage<1, 1, ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus> mFacetStatus;
    ::ll::TypedStorage<1, 1, ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus> mPreviousStatus;
    ::ll::TypedStorage<8, 56, ::std::optional<::OreUI::ResourcePacksFacet_DEPRECATED::PendingBehaviourPackRemoval>>
        mPendingPackMove;
    ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::ResourcePacksFacet_DEPRECATED::PackActivationRequest>>
                                                                                       mPendingResourcePackActivation;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mTexturePacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mBehaviorPacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mOldTexturePacks;
    ::ll::TypedStorage<8, 128, ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection> mOldBehaviorPacks;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                       mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>    mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>>   mContentTierManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                    mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                            mLevelListCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                             mDlcValidation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>>                              mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                        mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                    mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>             mClientInstance;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                              mRouter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                     mMainMenuScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                        mCatalogPackSourceInitialized;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRefreshCatalogPackSourceSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                    mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContentManagerContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentViews>>          mTexturePackViews;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentViews>>          mBehaviorPackViews;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DlcValidationState>>    mDlcState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>             mDlcChecker;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*>                           mDlcBatchModel;
    ::ll::TypedStorage<8, 64, ::OreUI::ResourcePacksFacet_DEPRECATED::FacetPromptDetails> mResourcePackToDownload;
    ::ll::TypedStorage<8, 8, uint64>                                                      mDlcSizeToDownload;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                    mOnDownloadCompleteCallback;
    ::ll::TypedStorage<4, 4, float>                                                       mDownloadProgress;
    ::ll::TypedStorage<4, 4, float>                                                       mImportProgress;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::ResourcePacksFacet_DEPRECATED::PromptType>> mPromptType;
    ::ll::TypedStorage<8, 136, ::OreUI::Prompt>                                                   mPrompt;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>         mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsDirty;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IResourceAwaiter>>                        mAwaiter;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksFacet_DEPRECATED& operator=(ResourcePacksFacet_DEPRECATED const&);
    ResourcePacksFacet_DEPRECATED(ResourcePacksFacet_DEPRECATED const&);
    ResourcePacksFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePacksFacet_DEPRECATED() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePacksFacet_DEPRECATED(
        ::IContentManager&                                                contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::IResourcePackRepository&                                        resourcePackRepository,
        ::ILevelListCache&                                                levelListCache,
        ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>      worldSettingsProvider,
        ::IDlcValidation&                                                 dlcValidation,
        ::IContentAcquisition&                                            contentAcquisition,
        ::IStoreCatalogRepository&                                        storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&           clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::OreUI::Router&                                                  router,
        ::std::shared_ptr<::MainMenuScreenModel>                          mainMenuScreenModel
    );

    MCAPI void _activatePack(::OreUI::ResourcePacksFacet_DEPRECATED::PackActivationRequest request);

    MCAPI ::std::unique_ptr<::ContentViews> _createContentViewsFor(::ContentType contentType, ::PackScope scope) const;

    MCAPI void _deactivatePack(::OreUI::FacetResourcePackId const& packId);

    MCAPI ::std::optional<::OreUI::ResourcePacksFacet_DEPRECATED::PackViewAndItem> _findPackVectorInView(
        ::OreUI::FacetResourcePackId const& fromPackId,
        ::FindPackFlags                     findPackFlags,
        ::ContentViews*                     contentView
    );

    MCAPI ::std::optional<::OreUI::ResourcePacksFacet_DEPRECATED::PackViewAndItem>
    _findPackViewAndContent(::OreUI::FacetResourcePackId const& fromPackId, ::FindPackFlags findPackFlags);

    MCAPI ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus _handleDlcCheckError(::DlcCheckResult error);

    MCAPI ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus _handlePromptInteraction();

    MCAPI void _initialize(::LevelSummary& levelSummary);

    MCAPI ::OreUI::FacetResourcePack _makeFacetPack(::Bedrock::NotNullNonOwnerPtr<::PackContentItem const> item) const;

    MCAPI void _movePackOnDataWarning();

    MCAPI void _populatePackDetailsFromView(
        ::std::vector<::OreUI::FacetResourcePack>& oldPackDetails,
        ::std::vector<::OreUI::FacetResourcePack>& packDetails,
        ::ContentView*                             view,
        ::ContentType                              contentType
    );

    MCAPI void
    _reserveMemoryUpfrontOnPackCollection(::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection& packCollection);

    MCAPI void _showContentTierIncompatiblePrompt(::ContentTierIncompatibleReason const& reason);

    MCAPI void _showDownloadPrompt();

    MCAPI void _showHasPerformanceIssuesPrompt();

    MCAPI void _showMissingDependencyErrorPrompt();

    MCAPI void _showMissingOwnedDLCPrompt();

    MCAPI void _showNoInternetPrompt();

    MCAPI void _showPackActivationErrorPrompt();

    MCAPI void _showPackSelectErrorPrompt(::PackSelectResult const& result);

    MCAPI void _showPackSettings(::OreUI::FacetResourcePackId const& packId);

    MCAPI void _showUnspecifiedErrorPrompt();

    MCAPI void _tryActivatePack(::OreUI::ResourcePacksFacet_DEPRECATED::PackActivationRequest request);

    MCAPI void _updateContentView(
        ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection& oldPackCollection,
        ::OreUI::ResourcePacksFacet_DEPRECATED::PackCollection& packCollection,
        ::ContentViews&                                         contentView
    );

    MCAPI void changePackPriority(::std::string const& packId, int prevIndex, int newIndex);

    MCAPI void clearLastActivatedPackId();

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getActiveBehaviorPacks() const;

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getActiveTexturePacks() const;

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getAvailableBehaviorPacks() const;

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getAvailableTexturePacks() const;

    MCAPI float getDownloadProgress() const;

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getGlobalTexturePacks() const;

    MCAPI float getImportProgress() const;

    MCFOLD ::OreUI::FacetResourcePackId const& getLastactivatedPackId() const;

    MCFOLD ::OreUI::FacetResourcePackId const& getMarketplacePackId() const;

    MCAPI ::OreUI::Prompt const& getPrompt() const;

    MCAPI ::std::vector<::OreUI::FacetResourcePack> const& getRealmsTexturePacks() const;

    MCAPI ::OreUI::ResourcePacksFacet_DEPRECATED::FacetPromptDetails const& getResourcePackToDownload() const;

    MCFOLD ::OreUI::ResourcePacksFacet_DEPRECATED::ResourcePacksFacetStatus getStatus() const;

    MCFOLD ::std::vector<::OreUI::FacetResourcePack> const& getUnownedTexturePacks() const;

    MCAPI bool isRealmsPlusSubscriptionActive() const;

    MCAPI bool isRealmsPlusSupported() const;

    MCAPI void notifyDownloadCancellation();

    MCAPI void requestPackActivation(::OreUI::FacetResourcePackId const& packId, bool force);

    MCAPI void requestPackDeactivation(::OreUI::FacetResourcePackId const& packId);

    MCAPI void requestToShowPackSettings(::OreUI::FacetResourcePackId const& packId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::PromptAction _getActionForActionType(
        ::OreUI::ResourcePacksFacet_DEPRECATED::PromptActionType type,
        ::OreUI::PromptActionVariant                             variant
    );

    MCAPI static char const* _getIdForPromptType(::OreUI::ResourcePacksFacet_DEPRECATED::PromptType type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IContentManager&                                                contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>              entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        ::IResourcePackRepository&                                        resourcePackRepository,
        ::ILevelListCache&                                                levelListCache,
        ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>      worldSettingsProvider,
        ::IDlcValidation&                                                 dlcValidation,
        ::IContentAcquisition&                                            contentAcquisition,
        ::IStoreCatalogRepository&                                        storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&           clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::OreUI::Router&                                                  router,
        ::std::shared_ptr<::MainMenuScreenModel>                          mainMenuScreenModel
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
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
