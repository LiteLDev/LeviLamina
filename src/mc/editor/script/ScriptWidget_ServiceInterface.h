#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget_ServiceInterface {
public:
    // prevent constructor by default
    ScriptWidget_ServiceInterface& operator=(ScriptWidget_ServiceInterface const&);
    ScriptWidget_ServiceInterface(ScriptWidget_ServiceInterface const&);
    ScriptWidget_ServiceInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
