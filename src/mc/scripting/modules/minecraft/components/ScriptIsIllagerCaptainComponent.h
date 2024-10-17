#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsIllagerCaptainComponent {
public:
    // prevent constructor by default
    ScriptIsIllagerCaptainComponent& operator=(ScriptIsIllagerCaptainComponent const&);
    ScriptIsIllagerCaptainComponent(ScriptIsIllagerCaptainComponent const&);
    ScriptIsIllagerCaptainComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsIllagerCaptainComponent() = default;

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
