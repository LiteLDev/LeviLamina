#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsHiddenWhenInvisibleComponent {
public:
    // prevent constructor by default
    ScriptIsHiddenWhenInvisibleComponent& operator=(ScriptIsHiddenWhenInvisibleComponent const&);
    ScriptIsHiddenWhenInvisibleComponent(ScriptIsHiddenWhenInvisibleComponent const&);
    ScriptIsHiddenWhenInvisibleComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsHiddenWhenInvisibleComponent() = default;

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
