#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptGroundOffsetComponent {
public:
    // prevent constructor by default
    ScriptGroundOffsetComponent& operator=(ScriptGroundOffsetComponent const&);
    ScriptGroundOffsetComponent(ScriptGroundOffsetComponent const&);
    ScriptGroundOffsetComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptGroundOffsetComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptGroundOffsetComponent();

    // vIndex: 1, symbol: ?_isValid@ScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptGroundOffsetComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptGroundOffsetComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
