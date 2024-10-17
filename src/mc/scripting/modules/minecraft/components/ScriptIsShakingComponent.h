#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsShakingComponent {
public:
    // prevent constructor by default
    ScriptIsShakingComponent& operator=(ScriptIsShakingComponent const&);
    ScriptIsShakingComponent(ScriptIsShakingComponent const&);
    ScriptIsShakingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsShakingComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _isValid$() const;

    MCAPI static std::string const& sClassName();

    MCAPI static char const* const& sComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
