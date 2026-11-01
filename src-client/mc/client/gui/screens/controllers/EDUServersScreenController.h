#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/EduRefreshType.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduResponseError.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class EduAddServerScreenController;
class EduPasscodeEntryScreenController;
class IContentManager;
class PlayScreenModel;
class UIPropertyBag;
struct PackManagerContentSource;
struct ScreenEvent;
namespace Json { class Value; }
namespace Social { struct EduDedicatedServerDetails; }
// clang-format on

class EduServersScreenController : public ::SettingsScreenControllerBase {
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
    ::ll::TypedStorage<8, 32, ::std::string> mBannerErrorString;
    ::ll::TypedStorage<1, 1, bool>           mPopupOpen;
    ::ll::TypedStorage<8, 32, ::std::string> mAddServerId;
    ::ll::TypedStorage<8, 32, ::std::string> mJoinServerId;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string,
            ::std::string,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::std::string>>>
                                                                                     mUnmatchedServers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EduAddServerScreenController>>     mAddServerScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EduPasscodeEntryScreenController>> mPasscodeEntryScreenController;
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
            ::std::mutex>>
                                                                 mServersBox;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mCacheFilePath;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    EduServersScreenController& operator=(EduServersScreenController const&);
    EduServersScreenController(EduServersScreenController const&);
    EduServersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduServersScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduServersScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCNAPI void _closeAddServerModal();

    MCNAPI void _closePasscodeEntryModal();

    MCNAPI void _closeSharePopup();

    MCNAPI ::std::optional<::Social::EduDedicatedServerDetails> _getServerDetails(::UIPropertyBag& bag) const;

    MCNAPI void
    _launchShareUri(::std::string const& uri, ::std::string const& toastMsg, ::std::string const& eventName);

    MCNAPI void _refreshServerInfo(::std::vector<::std::string> serverIds, ::Social::EduRefreshType const& refreshType);

    MCNAPI void _requestAddServer(::std::string const& serverId);

    MCNAPI void _requestJoinServer(::Social::EduDedicatedServerDetails const& details, ::std::string const& passcode);

    MCNAPI void _showAddServerModal();

    MCNAPI void _showFetchErrorMessage(::Social::EduResponseError& error);

    MCNAPI void _showPasscodeEntryModal(::Social::EduDedicatedServerDetails const& details);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 _getTileIndex(::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND
};
