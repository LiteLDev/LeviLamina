#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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
    // prevent constructor by default
    ScriptActorIterator& operator=(ScriptActorIterator const&);
    ScriptActorIterator(ScriptActorIterator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptActorIterator& operator=(::ScriptModuleMinecraft::ScriptActorIterator&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorIterator> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
