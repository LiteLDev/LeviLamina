#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptColor {
public:
    // prevent constructor by default
    ScriptColor& operator=(ScriptColor const&);
    ScriptColor(ScriptColor const&);
    ScriptColor();

public:
    // NOLINTBEGIN
    MCAPI class mce::Color const& getColor() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptColor> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
