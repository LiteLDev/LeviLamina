#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class PlayScreenModel;
class WorldsClipboardScreenController;
struct PackManagerContentSource;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Json { class Value; }
// clang-format on

class EDUWorldsScreenController : public ::SettingsScreenControllerBase {
public:
    // EDUWorldsScreenController inner types define
    enum class StartWorldCaller : int {
        Play     = 0,
        Host     = 1,
        Download = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                 mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldsClipboardScreenController>> mWorldsClipboardScreenController;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem>> mEduCloudSaveSystem;
    ::ll::TypedStorage<1, 1, bool>                                                         mManageActive;
    ::ll::TypedStorage<1, 1, bool>                                                         mMatchedWorldsNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                         mPlaceholderSelected;
    ::ll::TypedStorage<1, 1, bool>                                                         mChangingScreen;
    ::ll::TypedStorage<1, 1, bool>                                                         mHandlingConflict;
    ::ll::TypedStorage<1, 1, bool>                                                         mSkipNextFetch;
    ::ll::TypedStorage<1, 1, bool>                                                         mWaitingOnWorldCloudChecks;
    ::ll::TypedStorage<1, 1, bool>                              mWaitingOnSettingsCloudChecks;
    ::ll::TypedStorage<8, 32, ::std::string>                    mSearchString;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mMatchedWorlds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>       mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                mContentManager;
    ::ll::TypedStorage<4, 4, int>                               mLastSelectedWorldIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldsScreenController& operator=(EDUWorldsScreenController const&);
    EDUWorldsScreenController(EDUWorldsScreenController const&);
    EDUWorldsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldsScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onEntering() /*override*/;

    virtual void onReload() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUWorldsScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _registerBindings();

    MCAPI void _registerControllerCallbacks();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onEntering();

    MCAPI void $onReload();

    MCFOLD void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
