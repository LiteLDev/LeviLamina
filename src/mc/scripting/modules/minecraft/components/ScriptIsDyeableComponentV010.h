#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponentV010 {
public:
    // prevent constructor by default
    ScriptIsDyeableComponentV010& operator=(ScriptIsDyeableComponentV010 const&);
    ScriptIsDyeableComponentV010(ScriptIsDyeableComponentV010 const&);
    ScriptIsDyeableComponentV010();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsDyeableComponentV010() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
