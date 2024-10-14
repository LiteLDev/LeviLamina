#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/world/actor/PaletteColor.h"

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

    MCAPI class Scripting::Result<::PaletteColor> getValue(class Actor const& actor) const;

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
