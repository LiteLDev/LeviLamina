#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptComponentType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponentTypeEnumBuilder {
public:
    // prevent constructor by default
    ScriptComponentTypeEnumBuilder& operator=(ScriptComponentTypeEnumBuilder const&);
    ScriptComponentTypeEnumBuilder(ScriptComponentTypeEnumBuilder const&);
    ScriptComponentTypeEnumBuilder();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptComponentTypeEnumBuilder@ScriptModuleMinecraft@@QEAA@W4ScriptComponentType@1@@Z
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType);

    // symbol:
    // ?bind@ScriptComponentTypeEnumBuilder@ScriptModuleMinecraft@@QEAA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Scripting@@V?$optional@UVersion@Scripting@@@std@@@Z
    MCAPI class Scripting::EnumBindingBuilder<std::string, std::string> bind(std::optional<struct Scripting::Version>);

    // symbol:
    // ?bindComponentId@ScriptComponentTypeEnumBuilder@ScriptModuleMinecraft@@QEAAAEAUConstantFactory@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI struct Scripting::ConstantFactory& bindComponentId(std::string const&, std::string const&);

    // symbol: ??1ScriptComponentTypeEnumBuilder@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptComponentTypeEnumBuilder();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
