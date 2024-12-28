#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponent_WidgetInterface {
public:
    // prevent constructor by default
    ScriptWidgetComponent_WidgetInterface& operator=(ScriptWidgetComponent_WidgetInterface const&);
    ScriptWidgetComponent_WidgetInterface(ScriptWidgetComponent_WidgetInterface const&);
    ScriptWidgetComponent_WidgetInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
