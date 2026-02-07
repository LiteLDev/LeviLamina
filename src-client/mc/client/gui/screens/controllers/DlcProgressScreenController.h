#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/DlcProgressState.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class IDlcBatchModel;
class MainMenuScreenModel;
struct DlcId;
namespace Json { class Value; }
// clang-format on

class DlcProgressScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel&>                  mDlcBatch;
    ::ll::TypedStorage<4, 4, uint>                               mLastActiveImportIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool, bool)>> mOnCompleteCallback;
    ::ll::TypedStorage<1, 1, bool>                               mLeaveScreen;
    ::ll::TypedStorage<1, 1, bool>                               mShowCloseButton;
    ::ll::TypedStorage<1, 1, bool>                               mProcessingUpdates;
    ::ll::TypedStorage<1, 1, bool>                               mDisableExitWhileInProgress;
    ::ll::TypedStorage<8, 8, int64>                              mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, int64 const>                        mProgressMessageInterval;
    ::ll::TypedStorage<4, 4, ::DlcProgressState>                 mProgressState;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcProgressScreenController& operator=(DlcProgressScreenController const&);
    DlcProgressScreenController(DlcProgressScreenController const&);
    DlcProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcProgressScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DlcProgressScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::DlcId> const&            dlcIds,
        ::std::function<void(bool, bool)>        callback,
        bool                                     showCloseButton,
        bool                                     processingUpdates,
        bool                                     disableExitWhileInProgress
    );

    MCAPI ::std::string const _getLocalizedImportProgress() const;

    MCAPI ::std::string _getTitleLabel();

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::DlcId> const&            dlcIds,
        ::std::function<void(bool, bool)>        callback,
        bool                                     showCloseButton,
        bool                                     processingUpdates,
        bool                                     disableExitWhileInProgress
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $canExit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
