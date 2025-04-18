#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkfd05bb;
    ::ll::UntypedStorage<8, 16> mUnk972b73;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDynamicPropertiesDefinition& operator=(ScriptDynamicPropertiesDefinition const&);
    ScriptDynamicPropertiesDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI ScriptDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineBoolean(::std::string const& identifier, ::std::optional<bool> defaultValue);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(::std::string const& identifier, ::std::optional<float> defaultValue);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(::std::string const& identifier, uint maxLength, ::std::optional<::std::string> defaultValue);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineVector3(::std::string const& identifier, ::std::optional<::Vec3> defaultValue);

    MCAPI ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
