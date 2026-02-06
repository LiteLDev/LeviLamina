#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/StorageManagementScreenData.h"
#include "mc/client/gui/screens/controllers/StorageManagementViews.h"
#include "mc/client/legacy/ImportStatus.h"
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
struct ImportResult;
struct LegacyWorldInfo;
namespace Json { class Value; }
// clang-format on

class StorageManagementScreenController : public ::MainMenuScreenController {
public:
    // StorageManagementScreenController inner types define
    enum class ConvertProgressState : int {};

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

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageManagementScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::IContentManager& manager);

    MCAPI bool _containsPremiumWorldTemplate(::std::vector<::std::string>& outWorldList) const;

    MCAPI void _convertLegacyWorld(::LegacyWorldInfo const& world);

    MCAPI ::ui::ViewRequest _deleteButtonPressed();

    MCAPI ::ui::ViewRequest _deleteLocalScreenshotsButtonPressed();

    MCAPI ::ui::ViewRequest _deleteSelectedResources();

    MCAPI void _deselectPacks();

    MCAPI void _displayImportRetailWorldModal(uint64 worldSize, ::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)>
    _getLegacyWorldConvertCallback(::LegacyWorldInfo const& worldInfo, ::std::string const& levelId);

    MCAPI ::std::string _getLegacyWorldsSize(uint numberElements, uint64 size);

    MCAPI void _onWorldConversionCompleted(::std::shared_ptr<::ImportResult> result, ::std::string const& levelId);

    MCAPI void _openProcessLegacyWorldProgressDialog();

    MCAPI void _registerBindings();

    MCAPI void _registerLegacyWorldsBindings();

    MCAPI void _registerRetailToPreviewWorldsBindings();

    MCAPI ::ui::ViewRequest _selectLegacyWorld(int worldIndex);

    MCAPI ::ui::ViewRequest _selectRetailToPreviewWorld(int worldIndex);

    MCAPI void _syncLegacyWorlds();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _deleteResources(::IStorageManagementModel& model, ::StorageManagementViews& views);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::IContentManager& manager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
