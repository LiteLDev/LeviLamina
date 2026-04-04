#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/playtest/SessionResult.h"

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
    virtual ~EditorPlayerPlaytestServiceProvider() = default;

    virtual ::Editor::Playtest::SessionResult getPlaytestSessionAvailability(::WeakEntityRef playerRef) = 0;

    virtual void beginPlaytestSession(
        ::WeakEntityRef                                                 playerRef,
        ::Editor::GameOptions const&                                    options,
        ::std::function<void(::Editor::Playtest::SessionResult const&)> callback
    ) = 0;

    virtual void _handlePlayersSessionTransferResponse(
        ::WeakEntityRef                                                       playerRef,
        ::Editor::Network::PlaytestBeginSessionTransferResponsePayload const& payload
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
