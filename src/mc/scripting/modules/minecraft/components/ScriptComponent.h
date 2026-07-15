#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope const> mScope;
    ::ll::TypedStorage<8, 32, ::std::string>                        mId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptComponent();

    virtual bool _isValid() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptComponent(::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
