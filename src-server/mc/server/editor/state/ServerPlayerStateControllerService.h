#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/editor/services/state/PlayerStateControllerService.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor::Network { class PlayerMovementStatePayload; }
namespace Editor::Network { class PlayerZoomPayload; }
namespace Editor::Settings { struct SpeedProps; }
// clang-format on

namespace Editor::Services {

class ServerPlayerStateControllerService : public ::Editor::Services::PlayerStateControllerService,
                                           public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2b7edb;
    ::ll::UntypedStorage<1, 1>  mUnkddf2a9;
    ::ll::UntypedStorage<8, 16> mUnka1bb56;
    ::ll::UntypedStorage<1, 1>  mUnka66d90;
    ::ll::UntypedStorage<4, 4>  mUnk281efa;
    ::ll::UntypedStorage<4, 4>  mUnk9a4c14;
    ::ll::UntypedStorage<4, 16> mUnka438a5;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerStateControllerService& operator=(ServerPlayerStateControllerService const&);
    ServerPlayerStateControllerService(ServerPlayerStateControllerService const&);
    ServerPlayerStateControllerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ServerPlayerStateControllerService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual void _onEditorActivate() /*override*/;

    // vIndex: 8
    virtual void _onEditorDeactivate() /*override*/;

    // vIndex: 9
    virtual void _onEnterToolMode() /*override*/;

    // vIndex: 10
    virtual void _onExitToolMode() /*override*/;

    // vIndex: 11
    virtual void _onEnterCrosshairMode() /*override*/;

    // vIndex: 12
    virtual void _onExitCrosshairMode() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handlePlayerMovementStatePayload(::Editor::Network::PlayerMovementStatePayload const& payload);

    MCNAPI void _handlePlayerZoomPayload(::Editor::Network::PlayerZoomPayload const& payload);

    MCNAPI void _setFlySpeedMultiplier(::Editor::Settings::SpeedProps const& newValue);

    MCNAPI void _updateFlySpeedAbility(bool sync);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _updateAbilitiesOnClient(::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $_onEditorActivate();

    MCNAPI void $_onEditorDeactivate();

    MCNAPI void $_onEnterToolMode();

    MCNAPI void $_onExitToolMode();

    MCNAPI void $_onEnterCrosshairMode();

    MCNAPI void $_onExitCrosshairMode();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
