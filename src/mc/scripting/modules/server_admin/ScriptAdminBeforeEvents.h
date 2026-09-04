#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleServerAdmin::ScriptAdminBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4ee031;
    ::ll::UntypedStorage<8, 8>  mUnk19f05e;
    ::ll::UntypedStorage<8, 16> mUnkb0de83;
    ::ll::UntypedStorage<8, 8>  mUnkff7816;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAdminBeforeEvents& operator=(ScriptAdminBeforeEvents const&);
    ScriptAdminBeforeEvents(ScriptAdminBeforeEvents const&);
    ScriptAdminBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAdminBeforeEvents(
        ::Level*                        level,
        ::Scripting::WeakLifetimeScope& scope,
        ::Scripting::DependencyLocator& locator
    );

    MCNAPI void registerListeners();

    MCNAPI ~ScriptAdminBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level* level, ::Scripting::WeakLifetimeScope& scope, ::Scripting::DependencyLocator& locator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
