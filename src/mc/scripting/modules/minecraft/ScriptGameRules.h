#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGameRules {
public:
    // prevent constructor by default
    ScriptGameRules& operator=(ScriptGameRules const&);
    ScriptGameRules(ScriptGameRules const&);
    ScriptGameRules();

public:
    // NOLINTBEGIN
    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder, class Level const& level);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
