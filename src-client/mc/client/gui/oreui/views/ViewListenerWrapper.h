#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/Actions.h"
#include "mc/deps/cohtml/ControlType.h"
#include "mc/deps/cohtml/Cursors.h"
#include "mc/deps/cohtml/ITextInputHandler.h"
#include "mc/deps/cohtml/IViewListener.h"
#include "mc/deps/cohtml/PhaseType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TextBoxSelection.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class KeyboardManager;
namespace OreUI { class ICohtmlViewListener; }
namespace cohtml { class IClientSideSocket; }
namespace cohtml { class IInputProxy; }
namespace cohtml { class INodeProxy; }
namespace cohtml { class ISocketListener; }
namespace cohtml { struct KeyEventData; }
namespace cohtml { struct MouseEventData; }
namespace cohtml { struct ScreenInfo; }
namespace cohtml { struct TouchEventData; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

namespace OreUI {

class ViewListenerWrapper : public ::cohtml::IViewListener, public ::cohtml::ITextInputHandler {
public:
    // ViewListenerWrapper inner types declare
    // clang-format off
    struct TextInputState;
    // clang-format on

    // ViewListenerWrapper inner types define
    struct TextInputState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>      mCurrentText;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mCaretArea;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mControlArea;
        ::ll::TypedStorage<4, 12, ::TextBoxSelection> mSelection;
        ::ll::TypedStorage<1, 1, bool>                mIsMultiline;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TextInputState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::ICohtmlViewListener*>                                  mViewListener;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>              mClientInstance;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                             mKeyboardManager;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                               mCaretArea;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsTextInputFieldTouched;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsTextInputFieldFocused;
    ::ll::TypedStorage<8, 88, ::std::optional<::OreUI::ViewListenerWrapper::TextInputState>> mTextInputState;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, uint64>>                             mAudioStreams;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewListenerWrapper& operator=(ViewListenerWrapper const&);
    ViewListenerWrapper(ViewListenerWrapper const&);
    ViewListenerWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewListenerWrapper() /*override*/;

    virtual bool OnNavigateTo(char const*) /*override*/;

    virtual void OnScriptContextCreated() /*override*/;

    virtual void OnDOMBuilt() /*override*/;

    virtual void OnLoadFailed(char const* url, char const* error) /*override*/;

    virtual void OnFinishLoad(char const* url) /*override*/;

    virtual void OnReadyForBindings() /*override*/;

    virtual void OnBindingsReleased() /*override*/;

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested() /*override*/;

    virtual ::cohtml::EventAction::Actions OnNodeTouched(
        ::cohtml::INodeProxy const*     node,
        ::cohtml::TouchEventData const* event,
        void*,
        ::cohtml::InputEventPhase::PhaseType phase
    ) /*override*/;

    virtual ::cohtml::EventAction::Actions OnNodeMouseEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::MouseEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType
    ) /*override*/;

    virtual ::cohtml::EventAction::Actions OnNodeKeyEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::KeyEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType
    ) /*override*/;

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType) /*override*/;

    virtual void OnCaretRectChanged(int x, int y, uint width, uint height) /*override*/;

    virtual void
    OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*) /*override*/;

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    ) /*override*/;

    virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate) /*override*/;

    virtual void OnAudioStreamClosed(int id) /*override*/;

    virtual void OnAudioStreamPlay(int id) /*override*/;

    virtual void OnAudioStreamPause(int id) /*override*/;

    virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels) /*override*/;

    virtual void OnAudioStreamEnded(int id) /*override*/;

    virtual void OnAudioStreamVolumeChanged(int id, float volume) /*override*/;

    virtual void
    OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection) /*override*/;

    virtual void OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    ) /*override*/;

    virtual void OnFocus(::cohtml::IInputProxy* proxy) /*override*/;

    virtual void OnBlur(::cohtml::IInputProxy*) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnAudioStreamFlush();

    MCAPI void _tryEnablingKeyboard(::cohtml::IInputProxy* proxy, ::std::string const& text, int maxLength);

    MCAPI void _updateFromInputProxy(::cohtml::IInputProxy& proxy);

    MCAPI ::std::string getTextInputText();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $OnNavigateTo(char const*);

    MCFOLD void $OnScriptContextCreated();

    MCFOLD void $OnDOMBuilt();

    MCAPI void $OnLoadFailed(char const* url, char const* error);

    MCAPI void $OnFinishLoad(char const* url);

    MCAPI void $OnReadyForBindings();

    MCAPI void $OnBindingsReleased();

    MCAPI ::cohtml::ScreenInfo $OnScreenInfoRequested();

    MCAPI ::cohtml::EventAction::Actions $OnNodeTouched(
        ::cohtml::INodeProxy const*     node,
        ::cohtml::TouchEventData const* event,
        void*,
        ::cohtml::InputEventPhase::PhaseType phase
    );

    MCFOLD ::cohtml::EventAction::Actions $OnNodeMouseEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::MouseEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType
    );

    MCFOLD ::cohtml::EventAction::Actions $OnNodeKeyEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::KeyEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType
    );

    MCFOLD void $OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    MCAPI void $OnCaretRectChanged(int x, int y, uint width, uint height);

    MCAPI void $OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*);

    MCFOLD ::cohtml::IClientSideSocket* $OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    );

    MCAPI void $OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);

    MCAPI void $OnAudioStreamClosed(int id);

    MCAPI void $OnAudioStreamPlay(int id);

    MCAPI void $OnAudioStreamPause(int id);

    MCAPI void $OnAudioDataReceived(int id, int samples, float** pcm, int channels);

    MCAPI void $OnAudioStreamEnded(int id);

    MCAPI void $OnAudioStreamVolumeChanged(int id, float volume);

    MCFOLD void $OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection);

    MCFOLD void $OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    );

    MCAPI void $OnFocus(::cohtml::IInputProxy* proxy);

    MCAPI void $OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForITextInputHandler();

    MCNAPI static void** $vftableForIViewListener();
    // NOLINTEND
};

} // namespace OreUI
