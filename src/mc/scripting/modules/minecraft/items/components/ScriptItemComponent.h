#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5e0c70;
    ::ll::UntypedStorage<8, 32> mUnk8f4aee;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponent& operator=(ScriptItemComponent const&);
    ScriptItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemComponent() /*override*/;

    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemComponent(::ScriptModuleMinecraft::ScriptItemComponent const&);

    MCNAPI ScriptItemComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope,
        ::std::string                                                                  id
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemComponent const&);

    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope,
        ::std::string                                                                  id
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
