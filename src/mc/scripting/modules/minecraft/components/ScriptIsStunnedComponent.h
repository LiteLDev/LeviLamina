#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsStunnedComponent {
public:
    // prevent constructor by default
    ScriptIsStunnedComponent& operator=(ScriptIsStunnedComponent const&);
    ScriptIsStunnedComponent(ScriptIsStunnedComponent const&);
    ScriptIsStunnedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsStunnedComponent() = default;

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
