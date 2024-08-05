#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // prevent constructor by default
    ScriptItemComponents& operator=(ScriptItemComponents const&);
    ScriptItemComponents(ScriptItemComponents const&);
    ScriptItemComponents();

public:
    // NOLINTBEGIN
    MCAPI static void
    bind(class Scripting::ModuleBindingBuilder&, class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static std::
        unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IScriptItemComponentFactory>> const&
        getSupportedItemComponents();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
