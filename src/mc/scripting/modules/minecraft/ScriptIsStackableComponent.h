#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsStackableComponent {
public:
    // prevent constructor by default
    ScriptIsStackableComponent& operator=(ScriptIsStackableComponent const&);
    ScriptIsStackableComponent(ScriptIsStackableComponent const&);
    ScriptIsStackableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsStackableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
