#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFloatsInLiquidComponent {
public:
    // prevent constructor by default
    ScriptFloatsInLiquidComponent& operator=(ScriptFloatsInLiquidComponent const&);
    ScriptFloatsInLiquidComponent(ScriptFloatsInLiquidComponent const&);
    ScriptFloatsInLiquidComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptFloatsInLiquidComponent() = default;

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
