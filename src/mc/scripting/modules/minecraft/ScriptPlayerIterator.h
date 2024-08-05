#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator {
public:
    // prevent constructor by default
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&);
    ScriptPlayerIterator(ScriptPlayerIterator const&);
    ScriptPlayerIterator();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerIterator(std::vector<class Scripting::StrongTypedObjectHandle<
                                            class ScriptModuleMinecraft::ScriptPlayer>>&&);

    MCAPI class ScriptModuleMinecraft::ScriptPlayerIterator&
    operator=(class ScriptModuleMinecraft::ScriptPlayerIterator&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
