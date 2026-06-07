#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                 ::ScriptModuleMinecraft::ScriptPlayerIterator,
                                 ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> {
public:
    // prevent constructor by default
    ScriptPlayerIterator();

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
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>&& scriptPlayers);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
