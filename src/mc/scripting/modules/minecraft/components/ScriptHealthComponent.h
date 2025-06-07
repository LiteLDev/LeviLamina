#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const /*override*/;

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
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
