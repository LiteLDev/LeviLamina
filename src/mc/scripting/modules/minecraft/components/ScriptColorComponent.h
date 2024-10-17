#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptColorComponent {
public:
    // prevent constructor by default
    ScriptColorComponent& operator=(ScriptColorComponent const&);
    ScriptColorComponent(ScriptColorComponent const&);
    ScriptColorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptColorComponent() = default;

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
