#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptPlaceJigsawError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptPlaceJigsawError& operator=(ScriptPlaceJigsawError const&);
    ScriptPlaceJigsawError(ScriptPlaceJigsawError const&);
    ScriptPlaceJigsawError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlaceJigsawError(::std::string message);

    MCAPI ~ScriptPlaceJigsawError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptPlaceJigsawError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
