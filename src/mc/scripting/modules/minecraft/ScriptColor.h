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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnka089da;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptColor& operator=(ScriptColor const&);
    ScriptColor(ScriptColor const&);
    ScriptColor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::Color const& getColor() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptColor> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
