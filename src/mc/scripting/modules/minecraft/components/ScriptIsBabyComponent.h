#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsBabyComponent {
public:
    // prevent constructor by default
    ScriptIsBabyComponent& operator=(ScriptIsBabyComponent const&);
    ScriptIsBabyComponent(ScriptIsBabyComponent const&);
    ScriptIsBabyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsBabyComponent() = default;

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
