#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk62f2d0;
    ::ll::UntypedStorage<8, 32> mUnkc4b3d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorComponent(::ScriptModuleMinecraft::ScriptActorComponent const&);

    MCNAPI ScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& context,
        ::std::string const&                  id
    );

    MCNAPI ::Scripting::Error _functionError(::std::string_view functionName) const;

    MCNAPI ::Scripting::Error _getPropertyError(::std::string_view propertyName) const;

    MCNAPI ::Scripting::Error _setPropertyError(::std::string_view propertyName) const;

    MCNAPI ::Actor* _tryGetOwner() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> getEntityV1() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getEntityV2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorComponent const&);

    MCNAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& context, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
