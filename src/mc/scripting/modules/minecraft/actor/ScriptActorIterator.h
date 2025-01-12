#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                ::ScriptModuleMinecraft::ScriptActorIterator,
                                ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptActorIterator(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>&& scriptActors
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorIterator> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void*
    $ctor(::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>&& scriptActors);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
