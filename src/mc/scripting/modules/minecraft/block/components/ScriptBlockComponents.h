#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {
public:
    // prevent constructor by default
    ScriptBlockComponents& operator=(ScriptBlockComponents const&);
    ScriptBlockComponents(ScriptBlockComponents const&);
    ScriptBlockComponents();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                       moduleBuilder,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& blockComponentTypeEnumBuilder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
