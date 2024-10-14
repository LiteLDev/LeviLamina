#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFireImmuneComponent {
public:
    // prevent constructor by default
    ScriptFireImmuneComponent& operator=(ScriptFireImmuneComponent const&);
    ScriptFireImmuneComponent(ScriptFireImmuneComponent const&);
    ScriptFireImmuneComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptFireImmuneComponent() = default;

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
