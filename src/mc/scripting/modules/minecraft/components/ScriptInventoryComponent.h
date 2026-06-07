#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::Scripting::StrongObjectHandle>> mScriptContainer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<int> getAdditionalSlotsPerStrength() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCanBeSiphonedFrom() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getContainerType() const;

    MCAPI ::Scripting::Result_deprecated<int> getInventorySize() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>
    getOrCreateContainerV1();

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getOrCreateContainerV2();

    MCAPI ::Scripting::Result_deprecated<bool> getPrivate() const;

    MCAPI ::Scripting::Result_deprecated<bool> getRestrictToOwner() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
