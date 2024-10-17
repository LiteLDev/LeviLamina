#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorType {
public:
    // prevent constructor by default
    ScriptActorType& operator=(ScriptActorType const&);
    ScriptActorType(ScriptActorType const&);
    ScriptActorType();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptActorType(class ActorDefinition& definition);

    MCAPI class Scripting::Result<void> addDynamicPropertiesDefinition(
        class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );

    MCAPI std::string getId() const;

    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptActorType const& other) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActorType> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ActorDefinition& definition);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
