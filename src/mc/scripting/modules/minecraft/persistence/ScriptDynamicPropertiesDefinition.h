#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

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
    defineBoolean(std::string const& identifier, std::optional<bool> defaultValue);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(std::string const& identifier, std::optional<float> defaultValue);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(std::string const& identifier, uint maxLength, std::optional<std::string> defaultValue);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineVector3(std::string const& identifier, std::optional<class Vec3> defaultValue);

    MCAPI class DynamicPropertiesDefinition const& getDefinition() const;

    MCAPI class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
