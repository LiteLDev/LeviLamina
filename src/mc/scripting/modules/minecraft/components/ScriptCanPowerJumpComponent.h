#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanPowerJumpComponent {
public:
    // prevent constructor by default
    ScriptCanPowerJumpComponent& operator=(ScriptCanPowerJumpComponent const&);
    ScriptCanPowerJumpComponent(ScriptCanPowerJumpComponent const&);
    ScriptCanPowerJumpComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCanPowerJumpComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
