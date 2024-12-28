#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStateType {
public:
    // ScriptBlockStateType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBlockStateType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk375741;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk513a19;
    ::ll::UntypedStorage<8, 8>  mUnka5badd;
    ::ll::UntypedStorage<8, 24> mUnkc6d90c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockStateType& operator=(ScriptBlockStateType const&);
    ScriptBlockStateType(ScriptBlockStateType const&);
    ScriptBlockStateType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fillValidValues();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockStateType> bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockState const& blockState);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
