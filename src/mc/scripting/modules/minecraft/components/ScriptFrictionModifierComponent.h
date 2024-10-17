#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFrictionModifierComponent {
public:
    // prevent constructor by default
    ScriptFrictionModifierComponent& operator=(ScriptFrictionModifierComponent const&);
    ScriptFrictionModifierComponent(ScriptFrictionModifierComponent const&);
    ScriptFrictionModifierComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptFrictionModifierComponent() = default;

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
