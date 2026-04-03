#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { class ScriptAllowList; }
namespace ScriptModuleServerAdmin { class ScriptLevelStorage; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptDedicatedServerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcbaf6b;
    ::ll::UntypedStorage<8, 32> mUnk50de5e;
    ::ll::UntypedStorage<8, 32> mUnk878b2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDedicatedServerManager& operator=(ScriptDedicatedServerManager const&);
    ScriptDedicatedServerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDedicatedServerManager(::ScriptModuleServerAdmin::ScriptDedicatedServerManager const&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptAllowList> allowList();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptLevelStorage> levelStorage();

    MCNAPI ~ScriptDedicatedServerManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleServerAdmin::ScriptDedicatedServerManager const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
