#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8cd362;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorType& operator=(ScriptActorType const&);
    ScriptActorType(ScriptActorType const&);
    ScriptActorType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> addDynamicPropertiesDefinition(
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );

    MCAPI ::std::string getId() const;

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptActorType const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorType> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
