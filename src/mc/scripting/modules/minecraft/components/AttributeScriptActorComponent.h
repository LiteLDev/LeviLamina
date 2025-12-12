#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class AttributeScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc8d220;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeScriptActorComponent& operator=(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent(AttributeScriptActorComponent const&);
    AttributeScriptActorComponent();

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
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<float> $getCurrent() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCNAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        $setCurrentV2(float const& value) const;

    MCNAPI ::Scripting::Result_deprecated<float> $getValue() const;

    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;

    MCNAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMinValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToMaxValue() const;

    MCNAPI ::Scripting::Result_deprecated<void> $resetToDefaultValue() const;

    MCNAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
