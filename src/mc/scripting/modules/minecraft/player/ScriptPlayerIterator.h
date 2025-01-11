#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                 ::ScriptModuleMinecraft::ScriptPlayerIterator,
                                 ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerIterator(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>&& scriptPlayers
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerIterator> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void*
    $ctor(::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>&& scriptPlayers);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
