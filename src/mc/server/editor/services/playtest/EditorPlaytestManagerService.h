#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/SessionResult.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/serviceproviders/EditorPlayerPlaytestServiceProvider.h"
#include "mc/server/editor/serviceproviders/EditorPlaytestManagerServiceProvider.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
namespace Editor::Network { class PlaytestBeginSessionTransferResponsePayload; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorPlaytestManagerService : public ::Editor::Services::IEditorService,
                                     public ::Editor::Services::EditorPlaytestManagerServiceProvider,
                                     public ::Editor::Services::EditorPlayerPlaytestServiceProvider {
public:
    // EditorPlaytestManagerService inner types declare
    // clang-format off
    struct PlayerSessionInfo;
    // clang-format on

    // EditorPlaytestManagerService inner types define
    enum class SessionState : int {
        Idle                     = 0,
        Archiving                = 1,
        ArchiveComplete          = 2,
        AwaitingTransferResponse = 3,
        ExecutingTransfer        = 4,
        ReturningToEditor        = 5,
    };

    struct PlayerSessionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk4b5298;
        ::ll::UntypedStorage<4, 4>  mUnka73670;
        ::ll::UntypedStorage<4, 4>  mUnkcbf064;
        ::ll::UntypedStorage<8, 32> mUnka39940;
        ::ll::UntypedStorage<8, 32> mUnkf32514;
        ::ll::UntypedStorage<8, 64> mUnk87fe44;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerSessionInfo& operator=(PlayerSessionInfo const&);
        PlayerSessionInfo(PlayerSessionInfo const&);
        PlayerSessionInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PlayerSessionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbabb70;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlaytestManagerService& operator=(EditorPlaytestManagerService const&);
    EditorPlaytestManagerService(EditorPlaytestManagerService const&);
    EditorPlaytestManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlaytestManagerService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Editor::Playtest::SessionResult getPlaytestSessionAvailability(::WeakEntityRef playerRef) /*override*/;

    // vIndex: 2
    virtual void beginPlaytestSession(
        ::WeakEntityRef                                                 playerRef,
        ::Editor::GameOptions const&                                    options,
        ::std::function<void(::Editor::Playtest::SessionResult const&)> callback
    ) /*override*/;

    // vIndex: 3
    virtual void _handlePlayersSessionTransferResponse(
        ::WeakEntityRef                                                       playerRef,
        ::Editor::Network::PlaytestBeginSessionTransferResponsePayload const& payload
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::Services::EditorPlaytestManagerService::PlayerSessionInfo*
    _createSessionInfo(::mce::UUID const& clientUUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void> $init();

    MCFOLD ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Editor::Playtest::SessionResult $getPlaytestSessionAvailability(::WeakEntityRef playerRef);

    MCAPI void $beginPlaytestSession(
        ::WeakEntityRef                                                 playerRef,
        ::Editor::GameOptions const&                                    options,
        ::std::function<void(::Editor::Playtest::SessionResult const&)> callback
    );

    MCAPI void $_handlePlayersSessionTransferResponse(
        ::WeakEntityRef                                                       playerRef,
        ::Editor::Network::PlaytestBeginSessionTransferResponsePayload const& payload
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForEditorPlaytestManagerServiceProvider();

    MCAPI static void** $vftableForEditorPlayerPlaytestServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
