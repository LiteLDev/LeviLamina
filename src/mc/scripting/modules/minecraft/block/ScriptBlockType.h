#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {
public:
    // ScriptBlockType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockTypePtr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                mScope;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::HashedString const>> mBlockName;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockType const& block);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
