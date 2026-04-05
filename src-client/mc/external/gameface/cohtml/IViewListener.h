#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/Actions.h"
#include "mc/external/gameface/cohtml/ControlType.h"
#include "mc/external/gameface/cohtml/Cursors.h"
#include "mc/external/gameface/cohtml/InterceptRequestStatus.h"
#include "mc/external/gameface/cohtml/PhaseType.h"

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

    virtual void OnLoadFailed(char const* url, char const* error);

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

    virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);

    virtual void OnAudioStreamClosed(int id);

    virtual void OnAudioStreamPlay(int id);

    virtual void OnAudioStreamPause(int id);

    virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels);

    virtual void OnAudioStreamEnded(int id);

    virtual void OnAudioStreamVolumeChanged(int id, float volume);

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    virtual void OnCaretRectChanged(int x, int y, uint width, uint height);

    virtual void OnCursorChanged(::cohtml::CursorTypes::Cursors, char const*, float const*, float const*);

    virtual void OnClipboardTextSet(char const* text, uint lengthBytes);

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData* setDataObject);

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
