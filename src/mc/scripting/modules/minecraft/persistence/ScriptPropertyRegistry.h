#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkddaedc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPropertyRegistry& operator=(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPropertyRegistry(::ServerLevel& level);

    MCAPI ::Scripting::Result<void> registerEntityTypeDynamicProperties(
        ::Scripting::WeakLifetimeScope                                          scope,
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&       dynamicPropertiesDefinition,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptActorType> entityTypeOrId
    );

    MCAPI ::Scripting::Result<void> registerWorldDynamicProperties(
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPropertyRegistry> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ServerLevel& level);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
