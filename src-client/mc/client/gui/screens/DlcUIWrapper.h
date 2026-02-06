#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/DlcUIState.h"
#include "mc/client/gui/screens/DlcUIWrapperResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class IDlcBatcher;
class ILevelListCache;
class MainMenuScreenController;
class MainMenuScreenModel;
class TaskGroup;
class WorldTemplateManager;
struct ContentAcquisition;
struct DlcChecker;
struct DlcValidationState;
struct IDlcValidation;
struct IEntitlementManager;
struct IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcUIWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>                        mDlcChecker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                               mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::ContentAcquisition&>                                  mContentAcquisition;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DlcValidationState>>               mDlcState;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, ::DlcUIState>                                           mDlcUIState;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenController&>                            mMainMenuScreenController;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                                 mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                      mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IDlcBatcher&>                                         mDlcBatcher;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>> mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                     mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                             mStoreCatalogRepository;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>        mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcUIWrapper& operator=(DlcUIWrapper const&);
    DlcUIWrapper(DlcUIWrapper const&);
    DlcUIWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DlcUIWrapper(
        ::IDlcValidation&                                            dlcValidation,
        ::IDlcBatcher&                                               dlcBatcher,
        ::ILevelListCache&                                           levelListCache,
        ::ContentAcquisition&                                        contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const& worldTemplateManager,
        ::IContentManager&                                           contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>         entitlementManager,
        ::IStoreCatalogRepository&                                   storeCatalogRepository,
        ::MainMenuScreenModel&                                       mainMenuScreenModel,
        ::MainMenuScreenController&                                  mainMenuScreenController
    );

    MCAPI void _checkForCopiedPremiumWorldTemplate(::std::shared_ptr<::DlcValidationState> dlcState);

    MCAPI bool _continueAllowed(::std::shared_ptr<::DlcValidationState> dlcState) const;

    MCAPI void _showDlcMissingContentKeyModal();

    MCAPI ::DlcUIWrapperResult tick();

    MCAPI void tryDownload(
        ::std::string const&    productId,
        ::std::function<void()> callback,
        bool                    showProgressScreen,
        bool                    showCloseButton,
        bool                    showDownloadPrompt
    );

    MCAPI void tryDownload(
        ::std::vector<::std::string> const& productIds,
        ::std::function<void()>             callback,
        bool                                showProgressScreen,
        bool                                showCloseButton,
        bool                                showDownloadPrompt
    );

    MCAPI void
    tryProcessPendingUpdatesFor(::PackIdVersion const& worldTemplateIdentity, ::std::function<void()> callback);

    MCAPI void tryValidateDlcForRealmsUpload(
        ::std::string const&    levelId,
        ::PackIdVersion const&  worldPackId,
        ::std::function<void()> callback
    );

    MCAPI void tryValidateDlcForWorldLoad(
        ::std::string const&    levelId,
        ::PackIdVersion const&  worldPackId,
        ::std::function<void()> callback
    );

    MCAPI ~DlcUIWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IDlcValidation&                                            dlcValidation,
        ::IDlcBatcher&                                               dlcBatcher,
        ::ILevelListCache&                                           levelListCache,
        ::ContentAcquisition&                                        contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const& worldTemplateManager,
        ::IContentManager&                                           contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>         entitlementManager,
        ::IStoreCatalogRepository&                                   storeCatalogRepository,
        ::MainMenuScreenModel&                                       mainMenuScreenModel,
        ::MainMenuScreenController&                                  mainMenuScreenController
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
