#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk79dfd3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardListener& operator=(ScriptScoreboardListener const&);
    ScriptScoreboardListener(ScriptScoreboardListener const&);
    ScriptScoreboardListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::EventResult onObjectiveRemoved(::std::string const& objective) /*override*/;

    // vIndex: 3
    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const& id) /*override*/;

    // vIndex: 0
    virtual ~ScriptScoreboardListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onObjectiveRemoved(::std::string const& objective);

    MCAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
