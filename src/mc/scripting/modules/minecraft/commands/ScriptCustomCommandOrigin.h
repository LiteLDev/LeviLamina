#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandSource> mSourceType;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mSourceEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mInitiatorEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mSourceBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandOrigin();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCustomCommandOrigin(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);

    MCAPI ::ScriptModuleMinecraft::ScriptCustomCommandOrigin&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandOrigin&&);

    MCAPI ::ScriptModuleMinecraft::ScriptCustomCommandOrigin&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
