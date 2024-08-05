#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class DynamicPropertiesDefinition;
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition {
public:
    // prevent constructor by default
    ScriptDynamicPropertiesDefinition& operator=(ScriptDynamicPropertiesDefinition const&);
    ScriptDynamicPropertiesDefinition();

public:
    // NOLINTBEGIN
    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineBoolean(std::string const&, std::optional<bool>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(std::string const&, std::optional<float>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(std::string const&, uint, std::optional<std::string>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineVector3(std::string const&, std::optional<class Vec3>);

    MCAPI class DynamicPropertiesDefinition const& getDefinition() const;

    MCAPI class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
