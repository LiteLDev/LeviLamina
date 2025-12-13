#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget_ServiceInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
