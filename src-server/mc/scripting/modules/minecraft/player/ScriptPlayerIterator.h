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
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&);
    ScriptPlayerIterator(ScriptPlayerIterator const&);
    ScriptPlayerIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerIterator& operator=(::ScriptModuleMinecraft::ScriptPlayerIterator&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
