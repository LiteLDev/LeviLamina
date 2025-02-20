#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk97445f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryComponent& operator=(ScriptInventoryComponent const&);
    ScriptInventoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptInventoryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInventoryComponent(::ScriptModuleMinecraft::ScriptInventoryComponent const&);

    MCAPI ::Scripting::Result_deprecated<int> getAdditionalSlotsPerStrength() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCanBeSiphonedFrom() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getContainerType() const;

    MCAPI ::Scripting::Result_deprecated<int> getInventorySize() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();

    MCAPI ::Scripting::Result_deprecated<bool> getPrivate() const;

    MCAPI ::Scripting::Result_deprecated<bool> getRestrictToOwner() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptInventoryComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptInventoryComponent const&);
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
