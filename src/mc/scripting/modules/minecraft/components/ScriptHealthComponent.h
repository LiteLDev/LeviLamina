#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealthComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const /*override*/;

    virtual ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setCurrentV2(float const& value) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const /*override*/;

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
    MCAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const& value) const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
