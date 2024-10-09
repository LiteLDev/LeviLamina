#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptWantsJockeyComponent {
public:
    // prevent constructor by default
    ScriptWantsJockeyComponent& operator=(ScriptWantsJockeyComponent const&);
    ScriptWantsJockeyComponent(ScriptWantsJockeyComponent const&);
    ScriptWantsJockeyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWantsJockeyComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
