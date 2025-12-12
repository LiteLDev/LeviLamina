#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/Mode.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~PlayerStateControllerService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual void _onEditorActivate();

    virtual void _onEditorDeactivate();

    virtual void _onEnterToolMode();

    virtual void _onExitToolMode();

    virtual void _onEnterCrosshairMode();

    virtual void _onExitCrosshairMode();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCNAPI void _syncFlyingNoClip(::Editor::ServiceProviderCollection&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

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
