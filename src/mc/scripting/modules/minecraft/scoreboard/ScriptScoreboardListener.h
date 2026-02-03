#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard>>
        mScoreboardHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onObjectiveRemoved(::std::string const& objective) /*override*/;

    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const& id) /*override*/;

    virtual ~ScriptScoreboardListener() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
