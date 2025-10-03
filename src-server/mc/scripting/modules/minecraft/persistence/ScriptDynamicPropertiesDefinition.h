#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
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
    MCNAPI ScriptDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCNAPI ScriptDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineBoolean(::std::string const& identifier, ::std::optional<bool> defaultValue);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(::std::string const& identifier, ::std::optional<float> defaultValue);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(::std::string const& identifier, uint maxLength, ::std::optional<::std::string> defaultValue);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineVector3(::std::string const& identifier, ::std::optional<::Vec3> defaultValue);

    MCNAPI ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
