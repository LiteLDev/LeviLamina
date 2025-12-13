#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/scripting/modules/minecraft/ErrorMemberType.h"

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
    ::ll::UntypedStorage<8, 32> mUnkcfcc8a;
    ::ll::UntypedStorage<8, 32> mUnk4854f1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidActorError& operator=(ScriptInvalidActorError const&);
    ScriptInvalidActorError(ScriptInvalidActorError const&);
    ScriptInvalidActorError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName,
        ::std::string_view                          entityName
    );

    MCNAPI ScriptInvalidActorError(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName,
        ::std::string_view                       entityName
    );

    MCNAPI ~ScriptInvalidActorError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType    memberType,
        ::ScriptModuleMinecraft::ScriptActor const& invalidActor,
        ::std::string_view                          functionName,
        ::std::string_view                          entityName
    );

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ErrorMemberType memberType,
        ::std::string_view                       typeId,
        ::std::string_view                       id,
        ::std::string_view                       functionName,
        ::std::string_view                       entityName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
