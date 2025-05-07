#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
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
    // vIndex: 3
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptInventoryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryComponent(::ScriptModuleMinecraft::ScriptInventoryComponent const&);

    MCNAPI ::Scripting::Result_deprecated<int> getAdditionalSlotsPerStrength() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCanBeSiphonedFrom() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getContainerType() const;

    MCNAPI ::Scripting::Result_deprecated<int> getInventorySize() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>
    getOrCreateContainerV1();

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getOrCreateContainerV2();

    MCNAPI ::Scripting::Result_deprecated<bool> getPrivate() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getRestrictToOwner() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptInventoryComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptInventoryComponent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
