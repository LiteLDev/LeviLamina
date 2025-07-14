#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/scripting/modules/minecraft/actor/ErrorMemberType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInvalidActorError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 32, ::std::string> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidActorError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName
    );

    MCAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName
    );

    MCAPI ~ScriptInvalidActorError();
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
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName
    );

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
