#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkeb848e;
    ::ll::UntypedStorage<8, 64> mUnk4361db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockTypes& operator=(ScriptBlockTypes const&);
    ScriptBlockTypes(ScriptBlockTypes const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockTypes();

    MCNAPI void _generateAllBlockHandles(::Scripting::WeakLifetimeScope& scope);

    MCNAPI void _registerBlockTypeAlias(
        ::std::string                                                                  blockName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> blockHandle
    );

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    get(::Scripting::WeakLifetimeScope& scope, ::std::string const& blockName);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    getAllBlockTypes(::Scripting::WeakLifetimeScope& scope);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    get_V010(::Scripting::WeakLifetimeScope& scope, ::std::string const& blockName);

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockTypes& operator=(::ScriptModuleMinecraft::ScriptBlockTypes&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockTypes> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockTypes> bind_V010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
