#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                ::ScriptModuleMinecraft::ScriptActorIterator,
                                ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> {
public:
    // prevent constructor by default
    ScriptActorIterator& operator=(ScriptActorIterator const&);
    ScriptActorIterator(ScriptActorIterator const&);
    ScriptActorIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptActorIterator& operator=(::ScriptModuleMinecraft::ScriptActorIterator&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
