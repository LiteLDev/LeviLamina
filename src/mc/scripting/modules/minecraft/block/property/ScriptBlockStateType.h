#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*> const> blockState;
        // NOLINTEND
    };

    using BlockStateType = ::std::variant<int, ::std::string, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                                     mName;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*> const>               mBlockState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<int, ::std::string, bool>>> mValidValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fillValidValues();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::BlockState const& blockState);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
