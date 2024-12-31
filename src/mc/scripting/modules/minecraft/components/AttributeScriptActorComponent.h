#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
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

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<float> getCurrent() const;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<bool> setCurrent(float const& value) const;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<float> getValue() const;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<float> getEffectiveMinValue() const;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<float> getEffectiveMaxValue() const;

    // vIndex: 7
    virtual ::Scripting::Result<void> resetToMinValue() const;

    // vIndex: 8
    virtual ::Scripting::Result<void> resetToMaxValue() const;

    // vIndex: 9
    virtual ::Scripting::Result<void> resetToDefaultValue() const;

    // vIndex: 1
    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::Attribute const&                    sharedAttribute
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::AttributeScriptActorComponent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::Attribute const&                    sharedAttribute
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> $getCurrent() const;

    MCAPI ::Scripting::Result_deprecated<bool> $setCurrent(float const& value) const;

    MCAPI ::Scripting::Result_deprecated<float> $getValue() const;

    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMinValue() const;

    MCAPI ::Scripting::Result_deprecated<float> $getEffectiveMaxValue() const;

    MCAPI ::Scripting::Result<void> $resetToMinValue() const;

    MCAPI ::Scripting::Result<void> $resetToMaxValue() const;

    MCAPI ::Scripting::Result<void> $resetToDefaultValue() const;

    MCAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
