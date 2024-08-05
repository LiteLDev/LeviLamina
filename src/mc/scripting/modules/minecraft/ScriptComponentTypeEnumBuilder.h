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
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType);

    MCAPI class Scripting::EnumBindingBuilder<std::string, std::string> bind(std::optional<struct Scripting::Version>);

    MCAPI struct Scripting::ConstantFactory& bindComponentId(std::string const&, std::string const&);

    MCAPI ~ScriptComponentTypeEnumBuilder();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
