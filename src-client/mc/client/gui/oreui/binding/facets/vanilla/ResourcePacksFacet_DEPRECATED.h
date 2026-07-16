#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/Prompt.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
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
struct PackContentItem;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class IResourceAwaiter; }
namespace OreUI { class Router; }
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct FacetResourcePack; }
// clang-format on

namespace OreUI {

class ResourcePacksFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ResourcePacksFacet_DEPRECATED> {
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
    virtual ~ResourcePacksFacet_DEPRECATED() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
