#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
    MCNAPI ::Scripting::Result_deprecated<void> registerEntityTypeDynamicProperties(
        ::Scripting::WeakLifetimeScope                                          scope,
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&       dynamicPropertiesDefinition,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptActorType> entityTypeOrId
    );

    MCNAPI ::Scripting::Result_deprecated<void> registerWorldDynamicProperties(
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
