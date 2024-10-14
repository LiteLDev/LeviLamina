#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanFlyComponent {
public:
    // prevent constructor by default
    ScriptCanFlyComponent& operator=(ScriptCanFlyComponent const&);
    ScriptCanFlyComponent(ScriptCanFlyComponent const&);
    ScriptCanFlyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCanFlyComponent() = default;

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
