#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptMapValueIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypeIterator
: public ::ScriptModuleMinecraft::ScriptMapValueIterator<
      ::ScriptModuleMinecraft::ScriptActorTypeIterator,
      ::std::unordered_map<
          ::std::string,
          ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>>> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorTypeIterator> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
