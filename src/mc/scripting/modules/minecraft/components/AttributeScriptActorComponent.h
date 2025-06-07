#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~AttributeScriptActorComponent() /*override*/ = default;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<float> getCurrent() const;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<float> getValue() const;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<float> getEffectiveMinValue() const;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<float> getEffectiveMaxValue() const;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> resetToMinValue() const;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<void> resetToMaxValue() const;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<void> resetToDefaultValue() const;

    // vIndex: 3
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
