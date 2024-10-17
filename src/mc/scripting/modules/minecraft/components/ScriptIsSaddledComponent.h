#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsSaddledComponent {
public:
    // prevent constructor by default
    ScriptIsSaddledComponent& operator=(ScriptIsSaddledComponent const&);
    ScriptIsSaddledComponent(ScriptIsSaddledComponent const&);
    ScriptIsSaddledComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsSaddledComponent() = default;

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
