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
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptBlockComponents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static void
    bind(class Scripting::ModuleBindingBuilder&, class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
