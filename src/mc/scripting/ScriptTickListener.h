#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelEventCoordinator;
class ScriptAsyncJobCoordinator;
class ScriptDeferredEventCoordinator;
class ScriptDiagnostics;
class ScriptPluginManager;
struct ServerPerformanceData;
// clang-format on

class ScriptTickListener : public ::LevelEventListener, public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka92da0;
    ::ll::UntypedStorage<8, 8>  mUnk2bc345;
    ::ll::UntypedStorage<8, 8>  mUnk5417e6;
    ::ll::UntypedStorage<8, 8>  mUnke390a2;
    ::ll::UntypedStorage<8, 8>  mUnke4e75b;
    ::ll::UntypedStorage<8, 8>  mUnkcc025a;
    ::ll::UntypedStorage<8, 8>  mUnke6f367;
    ::ll::UntypedStorage<8, 8>  mUnke18734;
    ::ll::UntypedStorage<8, 8>  mUnkd3f5bd;
    ::ll::UntypedStorage<8, 8>  mUnk4ba995;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTickListener() /*override*/ = default;

    virtual ::EventResult onLevelTickStart(::Level& level) /*override*/;

    virtual ::EventResult onLevelTickEnd(::Level&) /*override*/;

    virtual void onScriptTickStart() /*override*/;

    virtual void onScriptTickEnd() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTickListener(
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::LevelEventCoordinator&          levelEventCoordinator,
        ::ScriptPluginManager&            pluginManager,
        ::ScriptDiagnostics&              diagnostics,
        ::ScriptAsyncJobCoordinator&      asyncJobCoordinator
    );

    MCNAPI ::ServerPerformanceData& _getServerPerfData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::LevelEventCoordinator&          levelEventCoordinator,
        ::ScriptPluginManager&            pluginManager,
        ::ScriptDiagnostics&              diagnostics,
        ::ScriptAsyncJobCoordinator&      asyncJobCoordinator
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelTickStart(::Level& level);

    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI void $onScriptTickStart();

    MCNAPI void $onScriptTickEnd();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScriptDeferredEventListener();

    MCNAPI static void** $vftableForLevelEventListener();
    // NOLINTEND
};
