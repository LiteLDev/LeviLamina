#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRidingComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptRidingComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getEntityRidingOn() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptRidingComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
