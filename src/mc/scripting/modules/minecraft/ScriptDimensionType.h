#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
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
    // symbol: ??0ScriptDimensionType@ScriptModuleMinecraft@@QEAA@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI explicit ScriptDimensionType(DimensionType);

    // symbol:
    // ?getTypeId@ScriptDimensionType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getTypeId() const;

    // symbol: ?bind@ScriptDimensionType@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
