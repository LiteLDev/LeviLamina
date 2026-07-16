#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/StorageManagementScreenData.h"
#include "mc/client/gui/screens/controllers/StorageManagementViews.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class IStorageManagementModel;
class LegacyWorldConverter;
class MainMenuScreenModel;
class StorageDependencyScreenController;
class StorageManagementScreenControllerProxy;
struct ContentItem;
// clang-format on

class StorageManagementScreenController : public ::MainMenuScreenController {
public:
    // StorageManagementScreenController inner types define
    enum class ConvertProgressState : int {
        Closed   = 0,
        Active   = 1,
        TryClose = 2,
    };

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ConvertProgressHandlerCallback = ::std::function<float()>;

    using ConvertStateCallback = ::std::function<::LoadingState()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager*>                                          mContentManager;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                             mReloadFlag;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StorageDependencyScreenController>>       mDependencyScreenController;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StorageManagementScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<1, 1, bool>                                                        mShowDeleteModal;
    ::ll::TypedStorage<1, 1, bool> mShowDeleteLocalScreenshotsModal;
    ::ll::TypedStorage<1, 1, bool> mIsLegacyWorldTabExpanded;
    ::ll::TypedStorage<1, 1, bool> mLegacySyncOnly;
    ::ll::TypedStorage<4, 4, ::StorageManagementScreenController::ConvertProgressState>      mProgressScreenState;
    ::ll::TypedStorage<8, 8, ::LegacyWorldConverter&>                                        mLegacyWorldConverter;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IStorageManagementModel>>> mModel;
    ::ll::TypedStorage<8, 144, ::StorageManagementViews>                                     mViews;
    ::ll::TypedStorage<1, 5, ::StorageManagementScreenData>                                  mData;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenController& operator=(StorageManagementScreenController const&);
    StorageManagementScreenController(StorageManagementScreenController const&);
    StorageManagementScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagementScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageManagementScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::IContentManager&                       manager,
        bool                                     legacySyncOnly
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::IContentManager& manager, bool legacySyncOnly);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
