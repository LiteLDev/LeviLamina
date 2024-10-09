#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsChargedComponent {
public:
    // prevent constructor by default
    ScriptIsChargedComponent& operator=(ScriptIsChargedComponent const&);
    ScriptIsChargedComponent(ScriptIsChargedComponent const&);
    ScriptIsChargedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsChargedComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
