#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptPushThroughComponent {
public:
    // prevent constructor by default
    ScriptPushThroughComponent& operator=(ScriptPushThroughComponent const&);
    ScriptPushThroughComponent(ScriptPushThroughComponent const&);
    ScriptPushThroughComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPushThroughComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
