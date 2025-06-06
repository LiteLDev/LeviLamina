#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget_GroupInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void _performDeleteWidget(bool) = 0;

    // vIndex: 1
    virtual void _setValid(bool) = 0;

    // vIndex: 2
    virtual void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload) = 0;

    // vIndex: 3
    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload) = 0;

    // vIndex: 4
    virtual void _servicePendingStateChanges() = 0;

    // vIndex: 5
    virtual void _setSelectedNoBroadcast(bool) = 0;

    // vIndex: 6
    virtual ::AABB const& _getWorldBounds() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
