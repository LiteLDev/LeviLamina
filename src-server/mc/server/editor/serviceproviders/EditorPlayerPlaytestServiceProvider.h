#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/SessionResult.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
namespace Editor::Network { class PlaytestBeginSessionTransferResponsePayload; }
// clang-format on

namespace Editor::Services {

class EditorPlayerPlaytestServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerPlaytestServiceProvider() = default;

    // vIndex: 1
    virtual ::Editor::Playtest::SessionResult getPlaytestSessionAvailability(::WeakEntityRef) = 0;

    // vIndex: 2
    virtual void beginPlaytestSession(::WeakEntityRef, ::Editor::GameOptions const&, ::std::function<void(::Editor::Playtest::SessionResult const&)>) = 0;

    // vIndex: 3
    virtual void _handlePlayersSessionTransferResponse(::WeakEntityRef, ::Editor::Network::PlaytestBeginSessionTransferResponsePayload const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
