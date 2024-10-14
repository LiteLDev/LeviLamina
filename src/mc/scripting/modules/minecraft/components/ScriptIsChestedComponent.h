#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsChestedComponent {
public:
    // prevent constructor by default
    ScriptIsChestedComponent& operator=(ScriptIsChestedComponent const&);
    ScriptIsChestedComponent(ScriptIsChestedComponent const&);
    ScriptIsChestedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsChestedComponent() = default;

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
