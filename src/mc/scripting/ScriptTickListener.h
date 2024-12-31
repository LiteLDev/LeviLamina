#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
class Player;
struct ServerPerformanceData;
// clang-format on

class ScriptTickListener : public ::LevelEventListener, public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke390a2;
    ::ll::UntypedStorage<8, 8> mUnke4e75b;
    ::ll::UntypedStorage<8, 8> mUnkcc025a;
    ::ll::UntypedStorage<8, 8> mUnk188dbe;
    ::ll::UntypedStorage<8, 8> mUnke6f367;
    ::ll::UntypedStorage<8, 8> mUnke18734;
    ::ll::UntypedStorage<8, 8> mUnkd3f5bd;
    ::ll::UntypedStorage<8, 8> mUnk4ba995;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptTickListener() /*override*/ = default;

    // vIndex: 6
    virtual ::EventResult onLevelTickStart(::Level& level) /*override*/;

    // vIndex: 7
    virtual ::EventResult onLevelTickEnd(::Level&) /*override*/;

    // vIndex: 3
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;

    // vIndex: 10
    virtual void onScriptTickStart() /*override*/;

    // vIndex: 11
    virtual void onScriptTickEnd() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerPerformanceData& _getServerPerfData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onLevelTickStart(::Level& level);

    MCAPI ::EventResult $onLevelTickEnd(::Level&);

    MCAPI ::EventResult $onLevelRemovedPlayer(::Player& player);

    MCAPI void $onScriptTickStart();

    MCAPI void $onScriptTickEnd();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForScriptDeferredEventListener();

    MCAPI static void** $vftableForLevelEventListener();
    // NOLINTEND
};
