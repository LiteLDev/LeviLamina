#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/Mode.h"
#include "mc/editor/services/state/ModeService.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class ModeChangedPayload; }
// clang-format on

namespace Editor::Services {

class ServerModeService : public ::Editor::Services::ModeService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> _doSwitchMode(::Editor::Mode newMode) /*override*/;

    virtual void _handleModeChangedPayload(::Editor::Network::ModeChangedPayload const& payload) /*override*/;

    virtual ~ServerModeService() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $_doSwitchMode(::Editor::Mode newMode);

    MCNAPI void $_handleModeChangedPayload(::Editor::Network::ModeChangedPayload const& payload);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForModeServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
