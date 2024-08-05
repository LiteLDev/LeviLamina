#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionType {
public:
    // prevent constructor by default
    ScriptDimensionType& operator=(ScriptDimensionType const&);
    ScriptDimensionType(ScriptDimensionType const&);
    ScriptDimensionType();

public:
    // NOLINTBEGIN
    MCAPI std::string getTypeId() const;

    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
