#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class EDUAddServerScreenController;
class EDUPasswordEntryScreenController;
class IContentManager;
class PlayScreenModel;
struct PackManagerContentSource;
struct UIPropertyBag;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace Social { struct EduDedicatedServerDetails; }
namespace Social { struct EduResponseError; }
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mMatchedServers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>       mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>             mWorldContentSource;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                      mContentManager;
    ::ll::TypedStorage<1, 1, bool>                                    mHasInitializedServerList;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneLoadingServers;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastFullServerInfoRefresh;
    ::ll::TypedStorage<8, 40, ::std::queue<::Social::EduResponseError, ::std::deque<::Social::EduResponseError>>>
                                                                                     mErrorQueue;
    ::ll::TypedStorage<1, 1, bool>                                                   mPopupOpen;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUAddServerScreenController>>     mAddServerScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUPasswordEntryScreenController>> mPasswordEntryScreenController;
    ::ll::TypedStorage<
        8,
        136,
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
    virtual ~EDUServersScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUServersScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _closeAddServerModal();

    MCAPI void _closePasswordEntryModal();

    MCAPI void _closeSharePopup();

    MCAPI void _getCachedServers();

    MCAPI ::std::optional<::Social::EduDedicatedServerDetails> _getServerDetails(::UIPropertyBag& bag) const;

    MCAPI uint64 _getTileIndex(::UIPropertyBag& bag) const;

    MCAPI void _joinServer(::UIPropertyBag* bag);

    MCAPI void _launchShareUri(::std::string const& uri, ::std::string const& toastMsg, ::std::string const& eventName);

    MCAPI void _refreshServerInfo(::std::vector<::std::string> serverIds);

    MCAPI void _refreshServerList();

    MCAPI void _registerBindings();

    MCAPI void _registerControllerCallbacks();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();

    MCAPI void _removeServer(::UIPropertyBag* bag);

    MCAPI void _requestAddServer(::std::string const& serverId);

    MCAPI void _requestJoinServer(::Social::EduDedicatedServerDetails const& details, ::std::string const& password);

    MCAPI void _showAddServerModal();

    MCAPI void _showErrorMessage(::Social::EduResponseError& error);

    MCAPI void _showPasswordEntryModal(::Social::EduDedicatedServerDetails const& details);

    MCAPI void _showRemoveServerModal(::UIPropertyBag* bag);

    MCAPI void _showSharePopup(::std::string const& popupFactory, ::std::string const& popupName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
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

    MCAPI void $onTerminate();

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
