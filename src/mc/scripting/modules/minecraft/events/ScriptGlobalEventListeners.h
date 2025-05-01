#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class BlockEventCoordinator;
class ScriptingEventCoordinator;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGlobalEventListeners {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4e8803;
    ::ll::UntypedStorage<8, 8> mUnk9665ec;
    ::ll::UntypedStorage<8, 8> mUnke2a078;
    ::ll::UntypedStorage<8, 8> mUnk7578a4;
    ::ll::UntypedStorage<8, 8> mUnk473e27;
    ::ll::UntypedStorage<8, 8> mUnk37740c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGlobalEventListeners& operator=(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGlobalEventListeners(
        ::ActorEventCoordinator&     actorEventCoordinator,
        ::BlockEventCoordinator&     blockEventCoordinator,
        ::ScriptingEventCoordinator& scriptEventCoordinator
    );

    MCNAPI ~ScriptGlobalEventListeners();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorEventCoordinator&     actorEventCoordinator,
        ::BlockEventCoordinator&     blockEventCoordinator,
        ::ScriptingEventCoordinator& scriptEventCoordinator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
