#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsTamedComponent {
public:
    // prevent constructor by default
    ScriptIsTamedComponent& operator=(ScriptIsTamedComponent const&);
    ScriptIsTamedComponent(ScriptIsTamedComponent const&);
    ScriptIsTamedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsTamedComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
