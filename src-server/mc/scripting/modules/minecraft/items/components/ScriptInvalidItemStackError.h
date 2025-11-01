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
    ::ll::UntypedStorage<8, 32> mUnk7252b5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidItemStackError& operator=(ScriptInvalidItemStackError const&);
    ScriptInvalidItemStackError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInvalidItemStackError(::ScriptModuleMinecraft::ScriptInvalidItemStackError const&);

    MCNAPI ScriptInvalidItemStackError(::ScriptModuleMinecraft::ErrorMemberType memberType, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemType, ::std::string_view functionName);

    MCNAPI ~ScriptInvalidItemStackError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptInvalidItemStackError const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ErrorMemberType memberType, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemType, ::std::string_view functionName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
