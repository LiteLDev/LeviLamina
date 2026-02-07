#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/FileUploadType.h"
#include "mc/util/UploadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class FileUploadManager;
class MainMenuScreenModel;
namespace Realms { struct World; }
// clang-format on

class FileUploadScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mRealmID;
    ::ll::TypedStorage<4, 4, int>                                                    mSlotIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mFileID;
    ::ll::TypedStorage<1, 1, bool>                                                   mNeedArchiving;
    ::ll::TypedStorage<4, 4, float>                                                  mUploadProgress;
    ::ll::TypedStorage<1, 1, bool>                                                   mContinueOnWifi;
    ::ll::TypedStorage<8, 32, ::std::string const>                                   mCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                                   mWifiWarningDisplaying;
    ::ll::TypedStorage<1, 1, bool>                                                   mUploadStarted;
    ::ll::TypedStorage<4, 4, ::UploadState>                                          mUploadState;
    ::ll::TypedStorage<1, 1, bool>                                                   mPostUploadRefreshCompleted;
    ::ll::TypedStorage<4, 4, ::Core::FileUploadType>                                 mFileUploadType;
    ::ll::TypedStorage<8, 64, ::std::function<void(::UploadState, ::Realms::World)>> mCallback;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::FileUploadManager>>                mFileUploadManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FileUploadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileUploadScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileUploadScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>              model,
        ::std::string const&                                  realmID,
        ::std::string const&                                  fileID,
        int                                                   slotIndex,
        bool                                                  needArchiving,
        ::Core::FileUploadType                                fileUploadType,
        ::std::function<void(::UploadState, ::Realms::World)> callback
    );

    MCAPI void _displayPostUploadErrorPopup();

    MCAPI void _displayUploadErrorPopup(::UploadError uploadError);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _startUpload();

    MCAPI ::std::string getTitleLabel() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>              model,
        ::std::string const&                                  realmID,
        ::std::string const&                                  fileID,
        int                                                   slotIndex,
        bool                                                  needArchiving,
        ::Core::FileUploadType                                fileUploadType,
        ::std::function<void(::UploadState, ::Realms::World)> callback
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
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
