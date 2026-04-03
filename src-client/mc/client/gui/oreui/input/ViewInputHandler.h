#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamefaceImeComposer.h"
#include "mc/client/gui/oreui/input/InputSource.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptions;
class KeyboardAction;
class KeyboardManager;
class MouseAction;
struct ControllerIDtoClientMap;
struct TextBoxStateChange;
namespace OreUI { class GamepadInputHandler; }
namespace OreUI { class TextInputHandler; }
namespace OreUI { class TouchInputHandler; }
namespace OreUI { struct TextInputResult; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class ViewInputHandler {
public:
    // ViewInputHandler inner types define
    enum class SupportedClients : int {
        Primary = 0,
        All     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                                             mSubClientId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::TouchInputHandler>>             mTouchInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::TextInputHandler>>              mTextInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GamepadInputHandler>>           mGamepadInputHandler;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                                           mView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap>> mControllerToClientMap;
    ::ll::TypedStorage<1, 1, bool>                                                      mShouldIgnoreBedrockInput;
    ::ll::TypedStorage<1, 1, bool>                                                      mEmulateTouchInput;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsPointerDown;
    ::ll::TypedStorage<1, 1, bool const>                                                mIsPrimaryClient;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullKeyboard;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mIsFullKeyboardSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                      mInvertMouse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mInvertMouseSubscription;
    ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::GamefaceImeComposer>>            mImeComposer;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewInputHandler& operator=(ViewInputHandler const&);
    ViewInputHandler(ViewInputHandler const&);
    ViewInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewInputHandler(
        ::SubClientId                                            subClientId,
        ::std::unique_ptr<::OreUI::TextInputHandler>             textInputHandler,
        ::std::unique_ptr<::OreUI::TouchInputHandler>            touchInputHandler,
        ::std::unique_ptr<::OreUI::GamepadInputHandler>          gamepadInputHandler,
        ::KeyboardManager&                                       keyboardManager,
        ::cohtml::View&                                          view,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> controllerIdToClientMap,
        bool                                                     isPrimaryClient,
        ::IOptions&                                              options
    );

    MCAPI void _onImeCompositionChanged(::std::string const& composition);

    MCAPI void handleInput(::OreUI::InputSource inputSource, ::MouseAction const& mouseAction);

    MCAPI void handleKeyboardInput(::OreUI::InputSource inputSource, ::KeyboardAction const& keyboardAction);

    MCAPI void handleNativeTextInput(::OreUI::InputSource inputSource, ::std::string_view text);

    MCAPI void imeStartComposition(::OreUI::InputSource inputSource);

    MCAPI void sendTextChangedEvent(::OreUI::TextInputResult inputResult);

    MCAPI void setTextBoxState(::OreUI::InputSource inputSource, ::TextBoxStateChange const& stateChange);

    MCAPI ~ViewInputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SubClientId                                            subClientId,
        ::std::unique_ptr<::OreUI::TextInputHandler>             textInputHandler,
        ::std::unique_ptr<::OreUI::TouchInputHandler>            touchInputHandler,
        ::std::unique_ptr<::OreUI::GamepadInputHandler>          gamepadInputHandler,
        ::KeyboardManager&                                       keyboardManager,
        ::cohtml::View&                                          view,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> controllerIdToClientMap,
        bool                                                     isPrimaryClient,
        ::IOptions&                                              options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
