#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptScaleComponent {
public:
    // prevent constructor by default
    ScriptScaleComponent& operator=(ScriptScaleComponent const&);
    ScriptScaleComponent(ScriptScaleComponent const&);
    ScriptScaleComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptScaleComponent() = default;

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
