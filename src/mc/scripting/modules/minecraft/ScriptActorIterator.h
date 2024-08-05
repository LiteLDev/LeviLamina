#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorIterator {
public:
    // prevent constructor by default
    ScriptActorIterator& operator=(ScriptActorIterator const&);
    ScriptActorIterator(ScriptActorIterator const&);
    ScriptActorIterator();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptActorIterator(std::vector<class Scripting::StrongTypedObjectHandle<
                                           class ScriptModuleMinecraft::ScriptActor>>&&);

    MCAPI class ScriptModuleMinecraft::ScriptActorIterator&
    operator=(class ScriptModuleMinecraft::ScriptActorIterator&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
