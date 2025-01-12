#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Mode.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class PlayerStateControllerService : public ::Editor::Services::IEditorService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk89550f;
    ::ll::UntypedStorage<8, 16> mUnk7cf4c4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStateControllerService& operator=(PlayerStateControllerService const&);
    PlayerStateControllerService(PlayerStateControllerService const&);
    PlayerStateControllerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerStateControllerService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 7
    virtual void _onEditorActivate();

    // vIndex: 8
    virtual void _onEditorDeactivate();

    // vIndex: 9
    virtual void _onEnterToolMode();

    // vIndex: 10
    virtual void _onExitToolMode();

    // vIndex: 11
    virtual void _onEnterCrosshairMode();

    // vIndex: 12
    virtual void _onExitCrosshairMode();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerStateControllerService(::Editor::ServiceProviderCollection& providers);

    MCAPI ::Player* _getPlayer() const;

    MCAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCAPI void _syncFlyingNoClip(::Editor::ServiceProviderCollection&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI void $_onEditorActivate();

    MCAPI void $_onEditorDeactivate();

    MCAPI void $_onEnterToolMode();

    MCFOLD void $_onExitToolMode();

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
