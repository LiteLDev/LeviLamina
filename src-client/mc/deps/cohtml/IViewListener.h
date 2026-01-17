#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/Actions.h"
#include "mc/deps/cohtml/ControlType.h"
#include "mc/deps/cohtml/Cursors.h"
#include "mc/deps/cohtml/InterceptRequestStatus.h"
#include "mc/deps/cohtml/PhaseType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IClientSideSocket; }
namespace cohtml { class INodeProxy; }
namespace cohtml { class ISocketListener; }
namespace cohtml { struct KeyEventData; }
namespace cohtml { struct MouseEventData; }
namespace cohtml { struct ScreenInfo; }
namespace cohtml { struct TouchEventData; }
// clang-format on

namespace cohtml {

class IViewListener {
public:
    // IViewListener inner types declare
    // clang-format off
    struct IClipboardData;
    // clang-format on

    // IViewListener inner types define
    struct IClipboardData {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void Set(char const*, uint) = 0;

        virtual ~IClipboardData() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IViewListener() = default;

    virtual bool OnNavigateTo(char const*);

    virtual ::cohtml::InterceptRequestStatus OnResourceRequestIntercepted(char const*);

    virtual void OnScriptContextCreated();

    virtual void OnDOMBuilt();

    virtual void OnLoadFailed(char const*, char const*);

    virtual void OnFinishLoad(char const*);

    virtual void OnReadyForBindings();

    virtual void OnBindingsReleased();

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested();

    virtual ::cohtml::EventAction::Actions OnNodeTouched(
        ::cohtml::INodeProxy const*,
        ::cohtml::TouchEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType const
    );

    virtual ::cohtml::EventAction::Actions OnNodeMouseEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::MouseEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType const
    );

    virtual ::cohtml::EventAction::Actions OnNodeKeyEvent(
        ::cohtml::INodeProxy const*,
        ::cohtml::KeyEventData const*,
        void*,
        ::cohtml::InputEventPhase::PhaseType const
    );

    virtual void OnAudioStreamCreated(int, int, int, float);

    virtual void OnAudioStreamClosed(int);

    virtual void OnAudioStreamPlay(int);

    virtual void OnAudioStreamPause(int);

    virtual void OnAudioDataReceived(int, int, float**, int);

    virtual void OnAudioStreamEnded(int);

    virtual void OnAudioStreamVolumeChanged(int, float);

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    virtual void OnCaretRectChanged(int, int, uint, uint);

    virtual void OnCursorChanged(::cohtml::CursorTypes::Cursors, char const*, float const*, float const*);

    virtual void OnClipboardTextSet(char const*, uint);

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData*);

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(::cohtml::ISocketListener*, char const*, char const**, uint);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
