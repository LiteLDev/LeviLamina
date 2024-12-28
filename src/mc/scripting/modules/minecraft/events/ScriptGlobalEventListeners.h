#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class ScriptingEventCoordinator;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGlobalEventListeners {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk23faec;
    ::ll::UntypedStorage<8, 8> mUnkd9ced4;
    ::ll::UntypedStorage<8, 8> mUnkac54e6;
    ::ll::UntypedStorage<8, 8> mUnkb01fa2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGlobalEventListeners& operator=(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners(ScriptGlobalEventListeners const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGlobalEventListeners();

    MCAPI void
    setUp(::ActorEventCoordinator& actorEventCoordinator, ::ScriptingEventCoordinator& scriptEventCoordinator);

    MCAPI void tearDown();

    MCAPI ~ScriptGlobalEventListeners();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
