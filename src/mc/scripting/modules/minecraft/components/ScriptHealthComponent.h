#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> resetToMinValue() const /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result<void> resetToMaxValue() const /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> resetToDefaultValue() const /*override*/;

    // vIndex: 0
    virtual ~ScriptHealthComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void notifyHealthChange(float oldValue, float newValue) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptHealthComponent>
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
    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCAPI ::Scripting::Result<void> $resetToMinValue() const;

    MCAPI ::Scripting::Result<void> $resetToMaxValue() const;

    MCAPI ::Scripting::Result<void> $resetToDefaultValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
