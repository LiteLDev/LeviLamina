#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduResponseError.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class EDUAddServerScreenController;
class EDUPasscodeEntryScreenController;
class IContentManager;
class PlayScreenModel;
struct PackManagerContentSource;
struct ScreenEvent;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace Social { struct EduDedicatedServerDetails; }
// clang-format on

class EDUServersScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                    mShowNestedButtons;
    ::ll::TypedStorage<1, 1, bool>                                    mMatchedServersNeedsRefresh;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                          mAddServerInfoString;
    ::ll::TypedStorage<8, 32, ::std::string>                          mMostRecentlyAddedServer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mMatchedServers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>       mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>             mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                      mContentManager;
    ::ll::TypedStorage<1, 1, bool>                                    mHasInitializedServerList;
    ::ll::TypedStorage<1, 1, bool>                                    mErrorFromRefresh;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneLoadingKnownServers;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneLoadingUnknownServers;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneFetchHandler;
    ::ll::TypedStorage<1, 1, bool>                                    mNeedsRefocus;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastFullServerInfoRefresh;
    ::ll::TypedStorage<8, 40, ::std::queue<::Social::EduResponseError, ::std::deque<::Social::EduResponseError>>>
        mFetchErrorQueue;
    ::ll::TypedStorage<8, 40, ::std::queue<::Social::EduResponseError, ::std::deque<::Social::EduResponseError>>>
                                                                                     mAddErrorQueue;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mBannerErrorString;
    ::ll::TypedStorage<1, 1, bool>                                                   mPopupOpen;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mAddServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mJoinServerId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUAddServerScreenController>>     mAddServerScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUPasscodeEntryScreenController>> mPasscodeEntryScreenController;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::Threading::BasicLockbox<
            ::brstd::flat_map<
                ::std::string,
                ::Social::EduDedicatedServerDetails,
                ::std::less<::std::string>,
                ::std::vector<::std::string>,
                ::std::vector<::Social::EduDedicatedServerDetails>>,
            ::Bedrock::Threading::Mutex>>
                                                                 mServersBox;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mCacheFilePath;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUServersScreenController& operator=(EDUServersScreenController const&);
    EDUServersScreenController(EDUServersScreenController const&);
    EDUServersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUServersScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUServersScreenController(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
