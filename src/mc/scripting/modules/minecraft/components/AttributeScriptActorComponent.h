#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Attribute const>> mSharedAttribute;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeScriptActorComponent() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<float> getCurrent() const;

    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const;

    virtual ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setCurrentV2(float const& value) const;

    virtual ::Scripting::Result_deprecated<float> getValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMinValue() const;

    virtual ::Scripting::Result_deprecated<float> getEffectiveMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;

    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> $getCurrent() const;

    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const& value) const;

    MCAPI ::Scripting::Result_deprecated<float> $getValue() const;

    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;

    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;

    MCAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;

    MCAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
