#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFilterGroup {
public:
    // prevent constructor by default
    ScriptFilterGroup& operator=(ScriptFilterGroup const&);
    ScriptFilterGroup(ScriptFilterGroup const&);
    ScriptFilterGroup();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptFilterGroup@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VActorFilterGroup@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ActorFilterGroup> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
