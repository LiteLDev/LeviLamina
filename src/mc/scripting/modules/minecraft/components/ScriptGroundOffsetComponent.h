#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptGroundOffsetComponent {
public:
    // prevent constructor by default
    ScriptGroundOffsetComponent& operator=(ScriptGroundOffsetComponent const&);
    ScriptGroundOffsetComponent(ScriptGroundOffsetComponent const&);
    ScriptGroundOffsetComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptGroundOffsetComponent() = default;

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
