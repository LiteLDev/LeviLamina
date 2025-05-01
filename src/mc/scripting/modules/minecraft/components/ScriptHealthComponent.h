#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
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
    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> resetToMinValue() const /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result<void> resetToMaxValue() const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result<void> resetToDefaultValue() const /*override*/;

    // vIndex: 0
    virtual ~ScriptHealthComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void notifyHealthChange(float oldValue, float newValue) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptHealthComponent>
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
    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCNAPI ::Scripting::Result<void> $resetToMinValue() const;

    MCNAPI ::Scripting::Result<void> $resetToMaxValue() const;

    MCNAPI ::Scripting::Result<void> $resetToDefaultValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
