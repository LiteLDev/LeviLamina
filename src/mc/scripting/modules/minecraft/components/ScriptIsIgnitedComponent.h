#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsIgnitedComponent {
public:
    // prevent constructor by default
    ScriptIsIgnitedComponent& operator=(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsIgnitedComponent() = default;

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
