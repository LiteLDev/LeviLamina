#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponent_WidgetInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const&) = 0;

    // vIndex: 1
    virtual void _onOwnerPositionUpdate() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
