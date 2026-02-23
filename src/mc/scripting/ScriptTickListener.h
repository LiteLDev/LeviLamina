#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
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
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mFlushingCoroutineSubscription;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&>       mDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>                mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&>                  mPluginManager;
    ::ll::TypedStorage<8, 8, ::ScriptDiagnostics&>                    mDiagnostics;
    ::ll::TypedStorage<8, 8, ::ScriptAsyncJobCoordinator&>            mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentTick;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLevelTickStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mScriptTickStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              mScriptCoroutineDuration;
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
    MCAPI ScriptTickListener(
        ::ScriptDeferredEventCoordinator& deferredEventCoordinator,
        ::LevelEventCoordinator&          levelEventCoordinator,
        ::ScriptPluginManager&            pluginManager,
        ::ScriptDiagnostics&              diagnostics,
        ::ScriptAsyncJobCoordinator&      asyncJobCoordinator
    );

    MCAPI ::ServerPerformanceData& _getServerPerfData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI ::EventResult $onLevelTickStart(::Level& level);

    MCAPI ::EventResult $onLevelTickEnd(::Level&);

    MCAPI void $onScriptTickStart();

    MCAPI void $onScriptTickEnd();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScriptDeferredEventListener();

    MCNAPI static void** $vftableForLevelEventListener();
    // NOLINTEND
};
