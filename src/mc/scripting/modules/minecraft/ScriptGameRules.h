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
    // symbol: ?bind@ScriptGameRules@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@AEBVLevel@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, class Level const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
