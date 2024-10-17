#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanClimbComponent {
public:
    // prevent constructor by default
    ScriptCanClimbComponent& operator=(ScriptCanClimbComponent const&);
    ScriptCanClimbComponent(ScriptCanClimbComponent const&);
    ScriptCanClimbComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCanClimbComponent() = default;

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
