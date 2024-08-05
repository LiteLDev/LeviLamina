#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFlyingSpeedComponent {
public:
    // prevent constructor by default
    ScriptFlyingSpeedComponent& operator=(ScriptFlyingSpeedComponent const&);
    ScriptFlyingSpeedComponent(ScriptFlyingSpeedComponent const&);
    ScriptFlyingSpeedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptFlyingSpeedComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
