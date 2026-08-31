#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class BlockEventCoordinator;
class LevelEventCoordinator;
class ScriptingEventCoordinator;
namespace ScriptModuleMinecraft { class ScriptActorGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptBlockGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptLevelGlobalEventListener; }
namespace ScriptModuleMinecraft { class ScriptScriptingGlobalEventListener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGlobalEventListeners {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorEventCoordinator&>     mActorEventCoordinator;
    ::ll::TypedStorage<8, 8, ::BlockEventCoordinator&>     mBlockEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptingEventCoordinator&> mScriptingEventCoordinator;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>     mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptActorGlobalEventListener>>
        mActorEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptBlockGlobalEventListener>>
        mBlockEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptScriptingGlobalEventListener>>
        mScriptingEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptLevelGlobalEventListener>>
        mLevelEventListener;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGlobalEventListeners& operator=(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners(ScriptGlobalEventListeners const&);
    ScriptGlobalEventListeners();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGlobalEventListeners(
        ::ActorEventCoordinator&     actorEventCoordinator,
        ::BlockEventCoordinator&     blockEventCoordinator,
        ::ScriptingEventCoordinator& scriptEventCoordinator,
        ::LevelEventCoordinator&     levelEventCoordinator
    );

    MCAPI ~ScriptGlobalEventListeners();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorEventCoordinator&     actorEventCoordinator,
        ::BlockEventCoordinator&     blockEventCoordinator,
        ::ScriptingEventCoordinator& scriptEventCoordinator,
        ::LevelEventCoordinator&     levelEventCoordinator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
