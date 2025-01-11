#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Mode.h"
#include "mc/editor/services/state/ModeService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class ModeChangedPayload; }
// clang-format on

namespace Editor::Services {

class ServerModeService : public ::Editor::Services::ModeService {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _doSwitchMode(::Editor::Mode newMode) /*override*/;

    // vIndex: 8
    virtual void _handleModeChangedPayload(::Editor::Network::ModeChangedPayload const& payload) /*override*/;

    // vIndex: 0
    virtual ~ServerModeService() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $_doSwitchMode(::Editor::Mode newMode);

    MCAPI void $_handleModeChangedPayload(::Editor::Network::ModeChangedPayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForModeServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
