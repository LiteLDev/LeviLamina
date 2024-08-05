#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptColor2Component {
public:
    // prevent constructor by default
    ScriptColor2Component& operator=(ScriptColor2Component const&);
    ScriptColor2Component(ScriptColor2Component const&);
    ScriptColor2Component();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptColor2Component() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI class Scripting::Result<::PaletteColor> getValue(class Actor const&) const;

    MCAPI static std::string const sClassName;

    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
