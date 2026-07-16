#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
class IScriptDedicatedServerUtils;
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptDedicatedServerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcbaf6b;
    ::ll::UntypedStorage<8, 8>  mUnk7267ad;
    ::ll::UntypedStorage<8, 32> mUnk50de5e;
    ::ll::UntypedStorage<8, 32> mUnk878b2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDedicatedServerManager& operator=(ScriptDedicatedServerManager const&);
    ScriptDedicatedServerManager(ScriptDedicatedServerManager const&);
    ScriptDedicatedServerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDedicatedServerManager(
        ::Scripting::WeakLifetimeScope& scope,
        ::IScriptDedicatedServerUtils&  serverUtils,
        ::Level&                        level
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
    MCNAPI void*
    $ctor(::Scripting::WeakLifetimeScope& scope, ::IScriptDedicatedServerUtils& serverUtils, ::Level& level);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
