#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsShearedComponent {
public:
    // prevent constructor by default
    ScriptIsShearedComponent& operator=(ScriptIsShearedComponent const&);
    ScriptIsShearedComponent(ScriptIsShearedComponent const&);
    ScriptIsShearedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsShearedComponent() = default;

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
