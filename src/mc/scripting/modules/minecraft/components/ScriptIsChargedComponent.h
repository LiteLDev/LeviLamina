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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _isValid$() const;

    MCAPI static std::string const& sClassName();

    MCAPI static char const* const& sComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
