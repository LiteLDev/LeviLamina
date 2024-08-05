#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptVariantComponent {
public:
    // prevent constructor by default
    ScriptVariantComponent& operator=(ScriptVariantComponent const&);
    ScriptVariantComponent(ScriptVariantComponent const&);
    ScriptVariantComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptVariantComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
