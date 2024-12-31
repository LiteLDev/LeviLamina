#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/state/PlayerStateControllerService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor::Settings { struct SpeedProps; }
// clang-format on

namespace Editor::Services {

class ServerPlayerStateControllerService : public ::Editor::Services::PlayerStateControllerService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2b7edb;
    ::ll::UntypedStorage<1, 1>  mUnkddf2a9;
    ::ll::UntypedStorage<8, 16> mUnka1bb56;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerStateControllerService& operator=(ServerPlayerStateControllerService const&);
    ServerPlayerStateControllerService(ServerPlayerStateControllerService const&);
    ServerPlayerStateControllerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerStateControllerService() /*override*/ = default;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

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
    MCAPI void _setFlySpeedMultiplier(::Editor::Settings::SpeedProps const& newValue);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _updateAbilitiesOnClient(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void $_onEditorActivate();

    MCAPI void $_onEditorDeactivate();

    MCAPI void $_onEnterToolMode();

    MCAPI void $_onExitToolMode();

    MCAPI void $_onEnterCrosshairMode();

    MCAPI void $_onExitCrosshairMode();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
