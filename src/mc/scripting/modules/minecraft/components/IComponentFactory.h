#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IComponentFactory {
public:
    // prevent constructor by default
    IComponentFactory& operator=(IComponentFactory const&);
    IComponentFactory(IComponentFactory const&);
    IComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IComponentFactory();

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, ::std::string const&) = 0;

    // vIndex: 2
    virtual bool hasComponent(::WeakEntityRef) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
