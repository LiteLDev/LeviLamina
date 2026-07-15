#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/HostOptionStates.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
namespace AppExtensions { class IDevConsoleScreenExtension; }
namespace Json { class Value; }
// clang-format on

class ChatScreenController : public ::ClientInstanceScreenController {
public:
    // ChatScreenController inner types define
    enum class SelectionDirection : int {
        Next     = 0,
        Previous = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentHistoryPrefix;
    ::ll::TypedStorage<1, 1, bool>                          mRefreshChatMessages;
    ::ll::TypedStorage<1, 1, bool>                          mLockMessagesUpdates;
    ::ll::TypedStorage<1, 1, bool>                          mScrollChatToBottom;
    ::ll::TypedStorage<1, 1, bool>                          mHasUnreadMessages;
    ::ll::TypedStorage<8, 8, uint64>                        mCurrentSentMessageIndex;
    ::ll::TypedStorage<1, 1, bool>                          mNeedsLayoutUpdate;
    ::ll::TypedStorage<1, 1, bool>                          mLastKeyboardActive;
    ::ll::TypedStorage<1, 1, bool>                          mUpdateCoordinateUI;
    ::ll::TypedStorage<1, 1, bool>                          mIsDevConsole;
    ::ll::TypedStorage<1, 1, bool>                          mSendMessage;
    ::ll::TypedStorage<1, 1, bool>                          mUpdateIntellisense;
    ::ll::TypedStorage<8, 104, ::IntellisenseHandler>       mIntellisense;
    ::ll::TypedStorage<4, 4, ::HostOptionStates>            mCurrentHostOption;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mHostCommands;
    ::ll::TypedStorage<4, 4, uint>                          mExpectedCommandDepth;
    ::ll::TypedStorage<8, 32, ::std::string>                mTeleportWhoName;
    ::ll::TypedStorage<8, 32, ::std::string>                mTeleportWhereName;
    ::ll::TypedStorage<8, 32, ::std::string>                mDeferedCollectionFocusName;
    ::ll::TypedStorage<4, 4, int>                           mDeferedCollectionFocusIndex;
    ::ll::TypedStorage<1, 1, bool>                          mWaitOneTick;
    ::ll::TypedStorage<1, 1, bool>                          mChatTextBoxNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mPositionCoordinates;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>  mFacingCoordinates;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::HostOptionStates, ::std::string>>> mMainHostButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mProfanityToggleSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension>> mDevConsoleScreenExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatScreenController() /*override*/ = default;

    virtual void onInit() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel>                 model,
        bool                                                           openWithCommand,
        bool                                                           isDevConsole,
        ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension> devConsoleScreenExtension
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel>                 model,
        bool                                                           openWithCommand,
        bool                                                           isDevConsole,
        ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension> devConsoleScreenExtension
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
