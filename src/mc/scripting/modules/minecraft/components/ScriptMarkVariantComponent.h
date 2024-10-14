#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptMarkVariantComponent {
public:
    // prevent constructor by default
    ScriptMarkVariantComponent& operator=(ScriptMarkVariantComponent const&);
    ScriptMarkVariantComponent(ScriptMarkVariantComponent const&);
    ScriptMarkVariantComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMarkVariantComponent() = default;

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
