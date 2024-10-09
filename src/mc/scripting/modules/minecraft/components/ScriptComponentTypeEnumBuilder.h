#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponentType.h"

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
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType componentType);

    MCAPI class Scripting::EnumBindingBuilder<std::string, std::string>
    bind(std::optional<struct Scripting::Version> releaseVersion);

    MCAPI struct Scripting::ConstantFactory&
    bindComponentId(std::string const& componentName, std::string const& componentId);

    MCAPI ~ScriptComponentTypeEnumBuilder();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
