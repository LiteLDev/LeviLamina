#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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

    MCNAPI void _registerBlockType(
        ::std::string                                                                  blockName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> blockHandle
    );

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bind_V010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
