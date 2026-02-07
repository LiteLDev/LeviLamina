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
class StringHash;
struct HostOptionSubCommand;
namespace Json { class Value; }
// clang-format on

class ChatScreenController : public ::ClientInstanceScreenController {
public:
    // ChatScreenController inner types define
    enum class SelectionDirection : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentHistoryPrefix;
    ::ll::TypedStorage<1, 1, bool>                          mRefreshChatMessages;
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
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatScreenController() /*override*/;

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
    MCAPI
    ChatScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, bool openWithCommand, bool isDevConsole);

    MCAPI void _beginNewCommand();

    MCAPI void _buildHostButtons();

    MCAPI void _getBottomButtonFocusOverrideDown(::std::string& focusOverride);

    MCAPI void _getBottomButtonFocusOverrideUp(::std::string& focusOverride, uint64 lastIndex);

    MCAPI ::std::string _getExitMessage() const;

    MCAPI ::std::optional<uint64> _getNextMessageIndex(
        ::ChatScreenController::SelectionDirection direction,
        ::std::deque<::std::string> const&         sentMessages
    ) const;

    MCAPI ::std::string _getSendMessage() const;

    MCAPI void _handleChatMessage(::std::string const& message, ::std::string const& ttsMessage);

    MCAPI void _handleMenuCancel();

    MCAPI void _handleSelectSentMessage(::ChatScreenController::SelectionDirection direction);

    MCAPI void _initScreenControllerProxy();

    MCAPI void _pasteClipboardInChat();

    MCAPI void _refreshChatMessages();

    MCAPI void _refreshDevConsoleScreenMessages();

    MCAPI void _registerBindings();

    MCAPI void _registerBindingsHostOptions();

    MCAPI void _registerBindingsSubCommand(
        ::std::vector<::HostOptionSubCommand>& subCommandButtons,
        ::StringHash const&                    gridName,
        ::StringHash const&                    collectionName
    );

    MCAPI void _registerEventHandlers();

    MCAPI void _registerEventHandlersHostOptions();

    MCAPI void _registerSubControllers();

    MCAPI void _sendChatMessage();

    MCAPI void _teleportWhereHelper();

    MCAPI void _teleportWhoHelper();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& DEV_CONSOLE_SCREEN_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, bool openWithCommand, bool isDevConsole);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInit();

    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
