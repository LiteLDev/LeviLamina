#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptSkinIdComponent {
public:
    // prevent constructor by default
    ScriptSkinIdComponent& operator=(ScriptSkinIdComponent const&);
    ScriptSkinIdComponent(ScriptSkinIdComponent const&);
    ScriptSkinIdComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSkinIdComponent() = default;

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
