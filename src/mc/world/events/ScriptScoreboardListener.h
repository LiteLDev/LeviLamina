#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
class ScoreboardEventListener;
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener : public ::ScoreboardEventListener {
public:
    // prevent constructor by default
    ScriptScoreboardListener& operator=(ScriptScoreboardListener const&);
    ScriptScoreboardListener(ScriptScoreboardListener const&);
    ScriptScoreboardListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptScoreboardListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptScoreboardListener() = default;

    // vIndex: 2, symbol:
    // ?onObjectiveRemoved@ScriptScoreboardListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult onObjectiveRemoved(std::string const& objective);

    // vIndex: 3, symbol:
    // ?onScoreboardIdentityRemoved@ScriptScoreboardListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScoreboardId@@@Z
    virtual ::EventResult onScoreboardIdentityRemoved(struct ScoreboardId const& id);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
