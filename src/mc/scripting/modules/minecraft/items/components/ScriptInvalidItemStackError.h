#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidItemStackError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>> mItemType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidItemStackError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInvalidItemStackError(
        ::ScriptModuleMinecraft::ErrorMemberType                                      memberType,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemType,
        ::std::string_view                                                            functionName
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType                                      memberType,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemType,
        ::std::string_view                                                            functionName
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
