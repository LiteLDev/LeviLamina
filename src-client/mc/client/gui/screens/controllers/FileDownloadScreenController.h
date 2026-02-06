#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/util/DownloadError.h"
#include "mc/util/DownloadState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class FileDownloadScreenController : public ::MainMenuScreenController {
public:
    // FileDownloadScreenController inner types declare
    // clang-format off
    struct RealmData;
    // clang-format on

    // FileDownloadScreenController inner types define
    struct RealmData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::FileDownloadScreenController::RealmData> mRealmData;
    ::ll::TypedStorage<4, 4, float>                                       mDownloadProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mContinueOnWifi;
    ::ll::TypedStorage<8, 32, ::std::string const>                        mCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                        mWifiWarningDisplaying;
    ::ll::TypedStorage<1, 1, bool>                                        mDownloadStarted;
    ::ll::TypedStorage<1, 1, bool>                                        mIsWaitingForCancel;
    ::ll::TypedStorage<4, 4, ::DownloadState>                             mDownloadState;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDownloadScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileDownloadScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     realmID,
        int                                      slotIndex,
        ::std::string const&                     realmName,
        ::std::string const&                     realmVersion,
        ::std::string const&                     realmVersionName,
        ::std::function<void(bool)>              callback
    );

    MCAPI void _displayDownloadErrorPopup(::DownloadError downloadError);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _startDownload();

    MCAPI ::std::string getTitleLabel() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     realmID,
        int                                      slotIndex,
        ::std::string const&                     realmName,
        ::std::string const&                     realmVersion,
        ::std::string const&                     realmVersionName,
        ::std::function<void(bool)>              callback
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
